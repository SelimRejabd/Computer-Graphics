#include<graphics.h>

int main()
{
    initwindow(1000,600);

    setcolor(GREEN);
    rectangle(50,50,500,300);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(51,51,GREEN);


    setcolor(RED);
    circle(275,175,60);
    setfillstyle(SOLID_FILL,RED);
    floodfill(276,176,RED);


    getch();

}
