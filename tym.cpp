#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    cout<<"Hello\n";
    float x,y,z;
    for(y=1.5; y>-1.5; y-=0.1)
    {
        for(x=-1.5; x<1.5; x+=0.05)
        {
            z= x*x+y*y-1;
            putchar(z*z*z-x*x*y*y*y<=0.0?'*':' ');
        }
        sleep(1);
        putchar('\n');
    }
    return 0;
}
