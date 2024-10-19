#pragma once

#include <cstdio>
#include "ColorEnum.hpp"

/*
 * This is a class that contains functions used to manage some Escape characters.
 * It is designed to provide useful functionality for terminal control.
 * So I like it, it could be used for long time  :)
 */
/*
 * Enum definitions for cursor movement directions and color codes.
 */
// Cursor movement directions
enum
{
    CUR_LEFT = 0,
    CUR_RIGHT = 1, 
    CUR_UP = 3,
    CUR_DOWN = 4
};

class VaEcControl
{
    private:
        // No private members currently, but may be added in the future.
    public:
        /*
         * Functions related to screen actions.
         */
        // Clear the entire screen.
        inline static const char* _clear()
        {
            return "\033[2J";
        }
        inline static void clear()
        {
            printf("\033[2J");
        }

        // Clear the area from the cursor's position to the end of the line.
        inline static const char* _clear_line()
        {
            return "\033[K";
        }
        inline static void clear_line()
        {
            printf("\033[K");
        }

        /*
         * Functions related to cursor actions.
         */
        // Move the cursor to the specified position (h, w).
        inline static const char* _cur_moveto(int h, int w)
        {
            static char escapeCommand[64];
            snprintf(escapeCommand, sizeof(escapeCommand), "\033[%d;%dH", h, w);
            return escapeCommand;
        }
        inline static void cur_moveto(int h, int w)
        {
            printf(_cur_moveto(h, w));
        }

        // Move the cursor in a given direction by a specified distance.
        // e.g. cout << _move(LEFT, 10);
        inline static const char* _cur_move(int dr, int ds)
        {
            static char escapeCommand[64];
            switch (dr)
            {
                case CUR_LEFT:
                    {
                        snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dD", ds);
                        return escapeCommand;
                    }
                case CUR_RIGHT:
                    {
                        snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dC", ds);
                        return escapeCommand;
                    }
                case CUR_UP:
                    {
                        snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dA", ds);
                        return escapeCommand;
                    }
                case CUR_DOWN:
                    {     snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dB", ds);
                        return escapeCommand;
                    }default:
                    return nullptr;
            }
        }
        inline static void cur_move(int dr, int ds)
        {
            printf(_cur_move(dr, ds));
        }

        // Reset the cursor to its default position.
        inline static const char* _cur_reset()
        {
            return "\033[H";
        }
        inline static void cur_reset()
        {
            printf("\033[H");
        }

        // Hide the cursor.
        inline static const char* _cur_hide()
        {
            return "\033[?25l";
        }
        inline static void cur_hide()
        {
            printf("\033[?25l");
        }

        // Show the cursor.
        inline static const char* _cur_show()
        {
            return "\033[?25h";
        }
        inline static void cur_show()
        {
            printf("\033[?25h");
        }

        /*
         * Functions related to color control.
         */
        // Set the text and background colors.
        // Remember to reset before returning to system, you know why  
        inline static const char* _set_color(int front, int background)
        {
            static char escapeCommand[64];
            snprintf(escapeCommand, sizeof(escapeCommand), "\033[%dm\033[%dm", front, background);
            return escapeCommand;
        }
        inline static void set_color(int front, int background)
        {
            printf(_set_color(front, background));
        }

        inline static const char* _set_color16(int front, int background)
        {

            static char escapeCommand[64];
            snprintf(escapeCommand, sizeof(escapeCommand),"\033[38;5;%dm\033[48;5;%dm",front,background);
            return escapeCommand;
        }
        inline static void set_color16(int front, int background)
        {
            printf(_set_color16(front, background));
        }

        inline static const char* _set_color256(int front, int background)
        { 

            static char escapecommand[64];
            snprintf(escapecommand, sizeof(escapecommand),"\033[38;5;%dm\033[48;5;%dm",front,background);
            return escapecommand;
        }
        inline static void set_color256(int front, int background)
        {
            printf(_set_color256(front, background));
        }

        //My console is not supporting RGB,so I don't know if it can work
        inline static const char* _set_background_color_RGB(int R,int B,int G)
        {

            static char escapecommand[64];
            snprintf(escapecommand, sizeof(escapecommand),"\033[48;2;%d,%d,%dm",R,G,B);
            return escapecommand;
        }
        inline static void set_background_color_RGB(int R, int B,int G)
        {
            printf(_set_background_color_RGB(R, B, G));
        }

        inline static const char* _set_front_color_RGB(int R,int B,int G)
        {

            static char escapecommand[64];
            snprintf(escapecommand, sizeof(escapecommand),"\033[38;2;%d,%d,%dm",R,G,B);
            return escapecommand;
        }
        inline static void set_front_color_RGB(int R, int B,int G)
        {
            printf(_set_front_color_RGB(R, G, B));
        }

        /*
         * Functions related to effect cotrol.
         */
        // Enable or disable highlighting.
        inline static const char* _high_light()
        {
            return "\033[7m";
        }
        inline static void high_light()
        {
            printf("\033[7m");
        } 
        inline static const char* _un_high_light()
        {
            return "\033[27m";
        }
        inline static void un_high_light()
        {
            printf("\033[27m");
        }

        // Underline or disable 
        inline static const char*  _underline()
        {
            return "\033[4m";
        }
        inline static void underline()
        {
            printf("\033[4m");
        }
        inline static const char*  _un_underline()
        {
            return "\033[24m";
        }
        inline static void un_underline()
        {
            printf("\033[24m");
        }

        // It may occurs effect on the 16color setting
        inline static const char*  _bright()
        {
            return "\033[1m";
        }
        inline static void bright()
        {
            printf("\033[1m");
        }

        inline static const char*  _un_bright()
        {
            return "\033[21m";
        }
        inline static void un_bright()
        {
            printf("\033[21m");
        }
};

typedef VaEcControl vaec;

