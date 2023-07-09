#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void draw(int a, int b, int x, int y)
{
    putpixel(a+x, b+y, BLUE);
    putpixel(a+x, b-y, BLUE);
    putpixel(a-x, b+y, BLUE);
    putpixel(a-x, b-y, BLUE);
    putpixel(a+y, b+x, BLUE);
    putpixel(a+y, b-x, BLUE);
    putpixel(a-y, b+x, BLUE);
    putpixel(a-y, b-x, BLUE);
}

void midPointCircle(int a, int b, int r)
{
    int x, y, p;
    p = 1-r;
    x = 0;
    y = r;

    while(x<y)
    {
        draw(a,b,x,y);
        x++;
        if(p<0) p += 2*x+1;
        else
        {
            y--;
            p += 2*x+1-2*y;
        }
        delay(40);
    }
}
int main()
{
    initwindow(1000,1000);

    midPointCircle(400,400,70);

    getch();
}

