#include <iostream>
#include <graphics.h>
#include <cmath>

void drawKoch(int x1, int y1, int x2, int y2, int depth) {
    if (depth == 0) {
        line(x1, y1, x2, y2);
    }
    else {
        int deltaX = x2 - x1;
        int deltaY = y2 - y1;

        int x3 = x1 + deltaX / 3;
        int y3 = y1 + deltaY / 3;

        int x4 = x1 + (deltaX * 2) / 3;
        int y4 = y1 + (deltaY * 2) / 3;

        int x = x3 + (x4 - x3) * cos(M_PI / 3) - (y4 - y3) * sin(M_PI / 3);
        int y = y3 + (x4 - x3) * sin(M_PI / 3) + (y4 - y3) * cos(M_PI / 3);

        drawKoch(x1, y1, x3, y3, depth - 1);
        drawKoch(x3, y3, x, y, depth - 1);
        drawKoch(x, y, x4, y4, depth - 1);
        drawKoch(x4, y4, x2, y2, depth - 1);
    }
}

int main() {
    initwindow(1000,1000);

    int x1 = 100, y1 = 300;
    int x2 = 500, y2 = 300;
    int depth = 4;

    drawKoch(x1, y1, x2, y2, depth);

    delay(5000);
}

