# vaec - Ansi Escape Character Utility Class
 
## Introduction
 
This is a class written in C++. It is designed to conveniently combine and output various interesting ANSI escape characters. It was created when preparing for another project called VAWK and has good reusability. Currently, it includes functions for outputting colors and moving the cursor. More functions will be added later. However, there are currently significant naming issues with this code.
 
## 如果你是中国人，请看这份文档 https://github.com/lc-3124/VA-EC/README_zh.md
## Features
 
It's too troublesome. Just look at the source code. The function list is very clear.
 
### Function List:
 
1.  clear() : Clears the entire screen.
2.  clear_line() : Clears the area from the cursor's position to the end of the line.
3.  cur_moveto(int h, int w) : Moves the cursor to the specified position (h, w).
4.  cur_move(int dr, int ds) : Moves the cursor in a given direction by a specified distance.
5.  cur_reset() : Resets the cursor to its default position.
6.  cur_hide() : Hides the cursor.
7.  cur_show() : Shows the cursor.
8.  set_color(int front, int background) : Sets the text and background colors (8-color mode).
9.  set_color16(int front, int background) : Sets the text and background colors (16-color mode).
10.  set_color256(int front, int background) : Sets the text and background colors (256-color mode).
11.  set_background_color_RGB(int R, int B, int G) : Sets the background color using RGB values.
12.  set_front_color_RGB(int R, int B, int G) : Sets the text color using RGB values.
13.  high_light() : Enables highlighting.
14.  un_high_light() : Disables highlighting.
15.  underline() : Underlines the text.
16.  un_underline() : Removes underlining.
17.  bright() : Enables bright text.
18.  un_bright() : Disables bright text.
 
### Color Definitions
 
1. 8-color definitions (including background color totals 16 colors, but it is commonly referred to as 8 colors):
-  FRONT_BLACK = 30 : Black text.
-  FRONT_RED = 31 : Red text.
-  FRONT_GREEN = 32 : Green text.
-  FRONT_YELLOW = 33 : Yellow text.
-  FRONT_BLUE = 34 : Blue text.
-  FRONT_PURPLE = 35 : Purple text.
-  FRONT_DEEP_GREEN = 36 : Deep green text.
-  FRONT_WHITE = 37 : White text.
-  BACKGROUND_BLACK = 40 : Black background.
-  BACKGROUND_RED = 41 : Red background.
-  BACKGROUND_GREEN = 42 : Green background.
-  BACKGROUND_YELLOW = 43 : Yellow background.
-  BACKGROUND_BLUE = 44 : Blue background.
-  BACKGROUND_PURPLE = 45 : Purple background.
-  BACKGROUND_DEEP_GREEN = 46 : Deep green background.
-  BACKGROUND_WHITE = 47 : White background.
2. 16-color definitions:
- In  set_color16 , if brightened, returns  \033[1;(CODE - 100)m .
-  BLACK = 0 : Black.
-  RED = 1 : Red.
-  GREEN = 2 : Green.
-  YELLOW = 3 : Yellow.
-  BLUE = 4 : Blue.
-  PURPLE = 5 : Purple.
-  DEEP_GREEN = 6 : Deep green.
-  WHITE = 7 : White.
-  BRIGHT_BLACK = 8 : Bright black.
-  BRIGHT_RED = 9 : Bright red.
-  BRIGHT_GREEN = 10 : Bright green.
-  BRIGHT_YELLOW = 11 : Bright yellow.
-  BRIGHT_BLUE = 12 : Bright blue.
-  BRIGHT_PURPLE = 13 : Bright purple.
-  BRIGHT_DEEP_GREEN = 14 : Bright deep green.
-  BRIGHT_WHITE = 15 : Bright white.
 
## Instructions
 
As the author is currently busy with studies and doesn't have much time to spend on this project, there may be some imperfections and the documentation is correspondingly insufficient. Over time, the author will gradually improve it in spare time from studies.
 
## Future Plans
 
This was originally created for other projects. If there are any issues later, I will push updates. If you use it, you can also send pull requests at any time.
 
## Usage
 
Detailed information on how to use this class will be provided in future documentation. For now, you can refer to the following example:troublesome. Just look at the source code. The function list is very clear.
 
### Function List:
 
1.  clear() : Clears the entire screen.
2.  clear_line() : Clears the area from the cursor's position to the end of the line.
3.  cur_moveto(int h, int w) : Moves the cursor to the specified position (h, w).
4.  cur_move(int dr, int ds) : Moves the cursor in a given direction by a specified distance.
5.  cur_reset() : Resets the cursor to its default position.
6.  cur_hide() : Hides the cursor.
7.  cur_show() : Shows the cursor.
8.  set_color(int front, int background) : Sets the text and background colors (8-color mode).
9.  set_color16(int front, int background) : Sets the text and background colors (16-color mode).
10.  set_color256(int front, int background) : Sets the text and background colors (256-color mode).
11.  set_background_color_RGB(int R, int B, int G) : Sets the background color using RGB values.
12.  set_front_color_RGB(int R, int B, int G) : Sets the text color using RGB values.
13.  high_light() : Enables highlighting.
14.  un_high_light() : Disables highlighting.
15.  underline() : Underlines the text.
16.  un_underline() : Removes underlining.
17.  bright() : Enables bright text.
18.  un_bright() : Disables bright text.
 
### Color Definitions
 
1. 8-color definitions (including background color totals 16 colors, but it is commonly referred to as 8 colors):
-  FRONT_BLACK = 30 : Black text.
-  FRONT_RED = 31 : Red text.
-  FRONT_GREEN = 32 : Green text.
-  FRONT_YELLOW = 33 : Yellow text.
-  FRONT_BLUE = 34 : Blue text.
-  FRONT_PURPLE = 35 : Purple text.
-  FRONT_DEEP_GREEN = 36 : Deep green text.
-  FRONT_WHITE = 37 : White text.
-  BACKGROUND_BLACK = 40 : Black background.
-  BACKGROUND_RED = 41 : Red background.
-  BACKGROUND_GREEN = 42 : Green background.
-  BACKGROUND_YELLOW = 43 : Yellow background.
-  BACKGROUND_BLUE = 44 : Blue background.
-  BACKGROUND_PURPLE = 45 : Purple background.
-  BACKGROUND_DEEP_GREEN = 46 : Deep green background.
-  BACKGROUND_WHITE = 47 : White background.
2. 16-color definitions:
- In  set_color16 , if brightened, returns  \033[1;(CODE - 100)m .
-  BLACK = 0 : Black.
-  RED = 1 : Red.
-  GREEN = 2 : Green.
-  YELLOW = 3 : Yellow.
-  BLUE = 4 : Blue.
-  PURPLE = 5 : Purple.
-  DEEP_GREEN = 6 : Deep green.
-  WHITE = 7 : White.
-  BRIGHT_BLACK = 8 : Bright black.
-  BRIGHT_RED = 9 : Bright red.
-  BRIGHT_GREEN = 10 : Bright green.
-  BRIGHT_YELLOW = 11 : Bright yellow.
-  BRIGHT_BLUE = 12 : Bright blue.
-  BRIGHT_PURPLE = 13 : Bright purple.
-  BRIGHT_DEEP_GREEN = 14 : Bright deep green.
-  BRIGHT_WHITE = 15 : Bright white.
 
## Instructions
 
As the author is currently busy with studies and doesn't have much time to spend on this project, there may be some imperfections and the documentation is correspondingly insufficient. Over time, the author will gradually improve it in spare time from studies.
 
## Future Plans
 
This was originally created for other projects. If there are any issues later, I will push updates. If you use it, you can also send pull requests at any time.
 
## Usage
 
Detailed information on how to use this class will be provided in future documentation. For now, you can refer to the following example:
