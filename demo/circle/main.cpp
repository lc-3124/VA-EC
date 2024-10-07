#include <VaEcControl.hpp>
#include <unistd.h>
#include <iostream>
#include <math.h>
#include <string>
#include "getch.hpp"

#define PI 3.1415926

int main(int argc ,char** argv)
{
    //too few or more argments to call
    if(argc != 4)
    {
        vaec::cur_show();
        vaec::set_color(FRONT_RED,BACKGROUND_BLACK);
        std::cout<<"Need 3args ,x,y,r\n\033[0m";
        std::exit(0);
    }

    //Input X Y R of the circle
    float x= std::stoi(argv[1]);
    float y= std::stoi(argv[2]); 
    float r= std::stoi(argv[3]);

    //init screen
    vaec::clear();
    vaec::cur_moveto(0,0);
    vaec::cur_hide();

    //?
    bool ud=0;
    float tmpr = r;
    int CntColor;
    int CntBuf=0;

    while(1){
        //press any key to exit
        if(kbhit()==true)
        {
            vaec::cur_moveto(0,0);
            vaec::cur_show(); 
            break;
        }

        //draw thr circle
        for(float i = 0 ;i < PI*5 ;i+=0.05)
        {
            vaec::cur_moveto(
                    static_cast<int>((y+r*sin(i)*0.55)),
                    static_cast<int>(x+r*cos(i))
                    );
            std::printf("*");

            vaec::cur_moveto(0,0);
            std::printf("Press any key to exit");
        }

        CntBuf++;
        if(CntBuf==5)
        {
            CntColor++;
            CntBuf=0;
        }
        if(CntColor>15)
            CntColor=1;

        vaec::set_color16(CntColor,0);

        //sleep
        usleep(50000);

        vaec::clear();

        if(ud==0)
        {
            r--;
        }
        else r++;

        if(r==0)ud=1;
        if(r==tmpr)ud=0;
    }

    return 0;
}
