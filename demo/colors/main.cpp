#include "VaEcControl.hpp"
#include <iostream>

int main (int argc , char** argv )
{
    std::cout<<" "<<"#"<<std::endl;
    std::cout << vaec::_set_color16(_16color::BACKGROUND_BRIGHT_WHITE,_16color::BACKGROUND_BRIGHT_BLACK);
    std::cout<<" "<<"#"<<std::endl;
}
