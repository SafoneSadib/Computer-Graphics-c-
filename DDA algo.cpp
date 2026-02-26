#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    float x1, y1, x2, y2;
    cout<<"Enter x1 y1: ";
    cin>>x1>>y1;
    cout<<"Enter x2 y2: ";
    cin>>x2>>y2;

    float dx = x2 - x1;
    float dy = y2 - y1;

    float steps;

    if(abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    float xInc = dx / steps;
    float yInc = dy / steps;

    float x = x1;
    float y = y1;

    for(int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x = x + xInc;
        y = y + yInc;
    }

    getch();
    closegraph();
    return 0;
}
