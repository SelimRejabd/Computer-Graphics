#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void bresenhamsLine(int x0, int y0, int x1, int y1)
{
    if(x0>x1)
    {
        swap(x0,x1);
        swap(y0, y1);
    }
    int dx = abs(x1-x0);
    int dy = abs(y1-y0);
    int p = 2*dy - dx;
    int x , y = y0;

    for(x=x0; x<=x1; x++)
    {
        putpixel(x,y, RED);
        if (p<0) p = p + 2*dy;
        else
        {
            p = p + 2*dy - 2*dx;
            y++;
        }
    }

}

int main()
{
    initwindow(1000,1000);
    bresenhamsLine(100,200,500,700);
    getch();

}
