#include "VaEcControl.hpp"
#include <iostream>
using namespace std;

int main (int argc , char** argv )
{
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
           cout<< vaec::_set_color16(i,j);
            cout<<" color\033[0m";
        }
        cout<<endl;
    }

    cout<<"\033[0m";
    cout<<"16 color test!\n";
    return 0;
}
