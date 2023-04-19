#include <iostream>
#include <graphics.h>

using namespace std;

void drawLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int x = x1;
    int y = y1;

    putpixel(x, y, WHITE);

    if (dx == 0) {
        for (int i = 1; i <= dy; i++) {
            y++;
            putpixel(x, y, WHITE);
        }
    }
    else if (dy == 0) {
        for (int i = 1; i <= dx; i++) {
            x++;
            putpixel(x, y, WHITE);
        }
    }
    else if (abs(dx) > abs(dy)) {
        float m = (float)dy / dx;
        float e = m - 0.5;

        for (int i = 1; i <= dx; i++) {
            x++;
            if (e >= 0) {
                y++;
                e -= 1;
            }
            e += m;
            putpixel(x, y, WHITE);
        }
    }
    else {
        float m = (float)dx / dy;
        float e = m - 0.5;

        for (int i = 1; i <= dy; i++) {
            y++;
            if (e >= 0) {
                x++;
                e -= 1;
            }
            e += m;
            putpixel(x, y, WHITE);
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1,x2,y1,y2;
    cout<<"Enter the value of x1 & y1: ";
    cin>>x1>>y1;
    cout<<"Enter the value of x2 & y2: ";
    cin>>x2>>y2;

    drawLine(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}

