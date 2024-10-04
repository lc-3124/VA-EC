#pragma once
/*
 * This is a class that contains functions used to manage some Escape characters.
 * It is designed to provide useful functionality for terminal control.
 * So I like it , it could be used for long time  :)
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
// Color definitions
// Although it may not be sufficient to support only 8 colors currently,
// other work needs to be completed first.
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

class VaEcControl
{
private:
    // No private members currently, but may be added in the future.
public:
    /*
     * Functions related to screen actions.
     */
    // Clear the entire screen.
    static const char* _clear();
    static void clear();

    // Clear the area from the cursor's position to the end of the line.
    static const char* _clear_line();
    static void clear_line();

    /*
     * Functions related to cursor actions.
     */
    // Move the cursor to the specified position (h, w).
    static const char* _cur_moveto(int h, int w);
    static void cur_moveto(int h, int w);

    // Move the cursor in a given direction by a specified distance.
    // e.g. cout << _move(LEFT, 10);
    static const char* _cur_move(int dr, int ds);
    static void cur_move(int dr, int ds);

    // Reset the cursor to its default position.
    static const char* _cur_reset();
    static void cur_reset();

    // Hide the cursor.
    static const char* _cur_hide();
    static void cur_hide();

    // Show the cursor.
    static const char* _cur_show();
    static void cur_show();

    /*
     * Functions related to color control.
     */
    // Enable or disable highlighting.
    static const char* _high_light();
    static void high_light(); 
    static const char* _un_high_light();
    static void un_high_light();

    // Set the text and background colors.
    // Remember to reset before returning to system , you know why  
    static const char* _set_color(int front, int background);
    static void set_color(int front, int background);
};

typedef VaEcControl vaec;

