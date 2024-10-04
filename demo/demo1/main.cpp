#include "getch.hpp"

#include "VaEcControl.hpp"
#include <iostream>

int main (int argc , char** argv )
{
    vaec::cur_moveto(0,0);

    int front=30;
    int back=30;
    char kb = 0;
    
    std::cout<<vaec::_clear()<<"Screen cleared!"<<std::endl;
    getch();
    std::cout<<vaec::_cur_hide()<<"Cursor hidded!"<<std::endl;
    getch();
    std::cout<<vaec::_cur_move(CUR_DOWN,1)<<"Move down for 1 ch!"<<std::endl;
    getch();
    std::cout<<vaec::_cur_moveto(4,0)<<vaec::_clear_line()<<
        "Move and clear!"<<std::endl;
    getch();
    std::cout<<vaec::_high_light()<<"I am high lighted!"<<vaec::_un_high_light()<<std::endl;
    std::cout<<vaec::_cur_show()<<std::endl;

    vaec::set_color(FRONT_BLACK,BACKGROUND_DEEP_GREEN);
    std::cout<<"\n move by <wasd> That's cool ,isn't it?\n";
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            std::cout<<vaec::_set_color(30+i,40+j)<<"color";
        }
        std::cout<<std::endl;
    }

    int w=30,h=20;

    for( ; ;)
    {
        kb=getch();

        switch(kb)
        {
            case 'w':{h--;break;}
            case 's':{h++;break;}
            case 'a':{w--;break;}
            case 'd':{w++;break;}
        }

        vaec::cur_moveto(h,w);
    }

    return 0;
}
