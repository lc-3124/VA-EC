#include <string>
#include <cstdio>
#include "VaEcControl.hpp"

// clear
const char* VaEcControl::_clear()
{
    return "\033[2J";
}
void VaEcControl::clear()
{
    printf("\033[2J");
}

// clear line
const char* VaEcControl::_clear_line()
{
    return "\033[K";
}
void VaEcControl::clear_line()
{
    printf("\033[K");
}

// cur_moveto
const char* VaEcControl::_cur_moveto(int h, int w)
{
    static char escapeCommand[64];
    int len = snprintf(escapeCommand, sizeof(escapeCommand), "\033[%d;%dH", h, w);
    if (len < 0 || len >= 64)
    {
        throw "VaEcControl::_cur_moveto:escapeCommand overflowed";
        // In fact , I don't think there is any one's screen so big that course the overflowing
        return nullptr;
    }
    return escapeCommand;
}
void VaEcControl::cur_moveto(int h, int w)
{
    printf("\033[%d;%dH", h, w);
}

// move the cursor, just move, 2 args : direct, distance
const char* VaEcControl::_cur_move(int dr, int ds)
{
    static char escapeCommand[64];
    switch (dr)
    {
        case CUR_LEFT:
            {
                int len = snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dD", ds);
                if (len < 0 || len >= 64)
                {
                    throw "VaEcControl::_cur_move:escapeCommand overflowed";
                    return nullptr;
                }
                break;
            }
        case CUR_RIGHT:
            {
                int len = snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dC", ds);
                if (len < 0 || len >= 64)
                {
                    throw "VaEcControl::_cur_move:escapeCommand overflowed";
                    return nullptr;
                }
                break;
            }
        case CUR_UP:
            {
                int len = snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dA", ds);
                if (len < 0 || len >= 64)
                {
                    throw "VaEcControl::_cur_move:escapeCommand overflowed";
                    return nullptr;
                }
                break;
            }
        case CUR_DOWN:
            {
                int len = snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dB", ds);
                if (len < 0 || len >= 64)
                {
                    throw "VaEcControl::_cur_move:escapeCommand overflowed";
                    return nullptr;
                }
                break;
            }
        default:
            //throwing a error may be not the best way?
            throw "VaEcControl::_cur_move:Invalid direction parameter";
            return nullptr;
    }
    return escapeCommand;
}
void VaEcControl::cur_move(int dr, int ds)
{
    switch (dr)
    {
        case CUR_LEFT:
            printf("\033[%dD", ds);
            break;
        case CUR_RIGHT:
            printf("\033[%dC", ds);
            break;
        case CUR_UP:
            printf("\033[%dA", ds);
            break;
        case CUR_DOWN:
            printf("\033[%dB", ds);
            break;
        default:
            throw "VaEcControl::cur_move:Invalid direction parameter" ; 
    }
}

// reset the cursor
const char* VaEcControl::_cur_reset()
{
    return "\033[H";
}
void VaEcControl::cur_reset()
{
    printf("\033[H");
}

// hide or show the cursor
const char* VaEcControl::_cur_hide()
{
    return "\033[?25l";
}
const char* VaEcControl::_cur_show()
{
    return "\033[?25h";
}
void VaEcControl::cur_hide()
{
    printf("\033[?25l");
}
void VaEcControl::cur_show()
{
    printf("\033[?25h");
}

// hight light or no hight light 
const char* VaEcControl::_high_light()
{
    return "\033[7m";
}
void VaEcControl::un_high_light()
{
    printf("\033[27m");
}

const char* VaEcControl::_un_high_light()
{
    return "\033[27m";
}
void VaEcControl::high_light()
{
    printf("\033[7m");
}

// set the color (8 Color  
const char* VaEcControl::_set_color(int front, int background)
{
    static char escapeCommand[64];
    int len = snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dm\033[%dm", front, background);
    if (len < 0 || len >= 64)
    {
        throw "VaEcControl::_set_color:escapeCommand overflowed";
        return nullptr;
    }
    return escapeCommand;
}
void VaEcControl::set_color(int front, int background)
{
    printf("\033[%dm\033[%dm", front, background);
}

// set the color (16 Color  
const char* VaEcControl::_set_color16(int front, int background)
{
    int len = 0 ;
    static char escapeCommand[64];

    len = snprintf(escapeCommand, sizeof(escapeCommand),"\033[38;5;%dm\033[48;5;%dm",front,background);

    if (len < 0 || len >= 64)
    {
        throw "VaEcControl::_set_color16:escapeCommand overflowed";
        return nullptr;
    }

    return escapeCommand;
}

void VaEcControl::set_color16(int front, int background)
{
    printf("\033[38;5;%dm\033[48;5;%dm",front,background);
}

//set the color (256 Color
const char* VaEcControl::_set_color256(int front,int background)
{ 
    int len = 0 ;
    static char escapecommand[64];

    len = snprintf(escapecommand, sizeof(escapecommand),"\033[38;5;%dm\033[48;5;%dm",front,background);

    if (len < 0 || len >= 64)
    {
        throw "vaeccontrol::_set_color256:escapecommand overflowed";
        return nullptr;
    }

    return escapecommand;
}

void VaEcControl::set_color256(int front, int background)
{
    printf("\033[38;5;%dm\033[48;5;%dm",front,background);
}

//set the color (RGB
const char* VaEcControl::_set_front_color_RGB(int R ,int G ,int B)
{
    int len = 0 ;
    static char escapecommand[64];

    len = snprintf(escapecommand, sizeof(escapecommand),"\033[38;2;%d,%d,%dm",R,G,B);

    if (len < 0 || len >= 64)
    {
        throw "vaeccontrol::_set_front_color:escapecommand overflowed";
        return nullptr;
    }

    return escapecommand;

      
}

void VaEcControl::set_front_color_RGB(int R ,int G ,int B)
{
    printf("\033[38;2;%d,%d,%dm",R,G,B);
}
    //My console don't support RGB ,So I don't like to code it

//
