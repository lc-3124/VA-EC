# vaec - ANSI 转义字符工具类
 
## 一、简介
 
这是一个用 C++编写的类，旨在方便地组合和输出各种有趣的 ANSI 转义字符。它在准备另一个项目 VAWK 时创建，具有不错的复用性。目前包含输出颜色和移动光标的功能，后续会加入其他功能。但目前代码的命名存在一些问题。
 
## 二、特性
 
麻烦死了，你直接看源代码吧
 
### 函数列表：
 
- 1.  clear() ：清空整个屏幕。
- 2.  clear_line() ：清空从光标位置到行尾的区域。
- 3.  cur_moveto(int h, int w) ：将光标移动到指定位置(h, w)。
- 4.  cur_move(int dr, int ds) ：在给定方向上移动光标一段指定距离。
- 5.  cur_reset() ：将光标重置到默认位置。
- 6.  cur_hide() ：隐藏光标。
- 7.  cur_show() ：显示光标。
- 8.  set_color(int front, int background) ：设置文本和背景颜色（8 色模式）。
- 9.  set_color16(int front, int background) ：设置文本和背景颜色（16 色模式）。
- 10.  set_color256(int front, int background) ：设置文本和背景颜色（256 色模式）。
- 11.  set_background_color_RGB(int R, int B, int G) ：使用 RGB 值设置背景颜色。
- 12.  set_front_color_RGB(int R, int B, int G) ：使用 RGB 值设置文本颜色。
- 13.  high_light() ：启用高亮显示。
- 14.  un_high_light() ：禁用高亮显示。
- 15.  underline() ：给文本添加下划线。
- 16.  un_underline() ：去除文本下划线。
- 17.  bright() ：启用明亮文本。
- 18.  un_bright() ：禁用明亮文本。
 
### 三、颜色定义
 
1. 8 色定义（包括背景色共 16 种颜色，但我习惯称为 8 色）：
-  FRONT_BLACK = 30 ：黑色文本。
-  FRONT_RED = 31 ：红色文本。
-  FRONT_GREEN = 32 ：绿色文本。
-  FRONT_YELLOW = 33 ：黄色文本。
-  FRONT_BLUE = 34 ：蓝色文本。
-  FRONT_PURPLE = 35 ：紫色文本。
-  FRONT_DEEP_GREEN = 36 ：深绿色文本。
-  FRONT_WHITE = 37 ：白色文本。
-  BACKGROUND_BLACK = 40 ：黑色背景。
-  BACKGROUND_RED = 41 ：红色背景。
-  BACKGROUND_GREEN = 42 ：绿色背景。
-  BACKGROUND_YELLOW = 43 ：黄色背景。
-  BACKGROUND_BLUE = 44 ：蓝色背景。
-  BACKGROUND_PURPLE = 45 ：紫色背景。
-  BACKGROUND_DEEP_GREEN = 46 ：深绿色背景。
-  BACKGROUND_WHITE = 47 ：白色背景。
2. 16 色定义：
- 在  set_color16  中，如果启用高亮，返回  \033[1;(CODE - 100)m 。
-  BLACK = 0 ：黑色。
-  RED = 1 ：红色。
-  GREEN = 2 ：绿色。
-  YELLOW = 3 ：黄色。
-  BLUE = 4 ：蓝色。
-  PURPLE = 5 ：紫色。
-  DEEP_GREEN = 6 ：深绿色。
-  WHITE = 7 ：白色。
-  BRIGHT_BLACK = 8 ：高亮黑色。
-  BRIGHT_RED = 9 ：高亮红色。
-  BRIGHT_GREEN = 10 ：高亮绿色。
-  BRIGHT_YELLOW = 11 ：高亮黄色。
-  BRIGHT_BLUE = 12 ：高亮蓝色。
-  BRIGHT_PURPLE = 13 ：高亮紫色。
-  BRIGHT_DEEP_GREEN = 14 ：高亮深绿色。
-  BRIGHT_WHITE = 15 ：高亮白色。
 
## 四、说明
 
由于作者目前学业繁忙，没有很多时间花在项目上，因此可能存在一些不完善的地方，文档也相应不足。随着时间的推移，作者会在学业之余逐步完善。
 
## 五、未来计划
 
本来就是为其他项目准备的，之后有问题会进行推送。如果您使用它，也可以随时发送拉取请求。
 
## 六、使用方法
 
关于如何使用这个类的详细信息将在未来的文档中提供。目前可以参考以下示例：

c++:

#include "VaEcControl.hpp"
int main() {
    // 例如，使用 clear 函数清空屏幕
    VaEcControl::clear();
    // 将光标移动到特定位置
    VaEcControl::cur_moveto(5, 10);
    // 设置颜色，这里不再使用魔法数字，而是使用枚举名
    VaEcControl::set_color(VaEcControl::FRONT_RED, VaEcControl::BACKGROUND_BLUE);
    return 0;
}

## 七、贡献
 
欢迎贡献。如果您发现任何命名问题或有改进建议，请随时提交拉取请求。
