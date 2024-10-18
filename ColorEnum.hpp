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
        BLACK = 0,
        RED = 1,
        GREEN = 2,
        YELLOW = 3,
        BLUE = 4,
        PURPLE = 5,
        DEEP_GREEN = 6,
        WHITE = 7,
        BRIGHT_BLACK =8,
        BRIGHT_RED =9,
        BRIGHT_GREEN =10,
        BRIGHT_YELLOW =11,
        BRIGHT_BLUE =12,
        BRIGHT_PURPLE =13,
        BRIGHT_DEEP_GREEN =14,
        BRIGHT_WHITE =15
    };
}

