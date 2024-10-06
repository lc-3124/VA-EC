#pragma once

// 8 Color definitions (including backgroundcolor is 16 color ? But I like to call it 8 color)
enum 
{
    FRONT_BLACK = 30,
    FRONT_RED = 31,
    FRONT_GREEN = 32,
    FRONT_YELLOW = 33,
    FRONT_BLUE = 34,
    FRONT_PURPLE = 35,
    FRONT_DEEP_GREEN = 36,
    FRONT_WHITE = 37,
    BACKGROUND_BLACK = 40,
    BACKGROUND_RED = 41,
    BACKGROUND_GREEN = 42,
    BACKGROUND_YELLOW = 43,
    BACKGROUND_BLUE = 44,
    BACKGROUND_PURPLE = 45,
    BACKGROUND_DEEP_GREEN = 46,
    BACKGROUND_WHITE = 47
};

namespace _16color
{
    //16 Color definitions
    //in set_color16 ,if brighted ,return  \033[1;(CODE-100)m
    enum
    {    
        FRONT_BLACK = 30,
        FRONT_RED = 31,
        FRONT_GREEN = 32,
        FRONT_YELLOW = 33,
        FRONT_BLUE = 34,
        FRONT_PURPLE = 35,
        FRONT_DEEP_GREEN = 36,
        FRONT_WHITE = 37,
        BACKGROUND_BLACK = 40,
        BACKGROUND_RED = 41,
        BACKGROUND_GREEN = 42,
        BACKGROUND_YELLOW = 43,
        BACKGROUND_BLUE = 44,
        BACKGROUND_PURPLE = 45,
        BACKGROUND_DEEP_GREEN = 46,
        BACKGROUND_WHITE = 47,
        FRONT_BRIGHT_BLACK = 130,
        FRONT_BRIGHT_RED = 131,
        FRONT_BRIGHT_GREEN = 132,
        FRONT_BRIGHT_YELLOW = 133,
        FRONT_BRIGHT_BLUE = 134,
        FRONT_BRIGHT_PURPLE = 135,
        FRONT_BRIGHT_DEEP_GREEN = 136,
        FRONT_BRIGHT_WHITE = 137,
        BACKGROUND_BRIGHT_BLACK = 140,
        BACKGROUND_BRIGHT_RED = 141,
        BACKGROUND_BRIGHT_GREEN = 142,
        BACKGROUND_BRIGHT_YELLOW = 143,
        BACKGROUND_BRIGHT_BLUE = 144,
        BACKGROUND_BRIGHT_PURPLE = 145,
        BACKGROUND_BRIGHT_DEEP_GREEN = 146,
        BACKGROUND_BRIGHT_WHITE = 147
    };
}
