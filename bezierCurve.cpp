#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
    initwindow(1000,1000);

    int x[4], y[4];
    double px, py, t;
    cout<<"Enter 4 values of x & y: ";

    for(int i=0; i<4; i++)
    {
        cin>>x[i]>>y[i];
        setcolor(WHITE);
        circle(x[i],y[i],3);
    }


    for(t=0.0; t<=1.0; t += 0.0001)
    {
        px = pow((1-t), 3)*x[0] + pow((1-t), 2)*x[1]*3*t + x[2]*3*t*t*(1-t) + pow(t,3)*x[3];
        py = pow((1-t), 3)*y[0] + pow((1-t), 2)*y[1]*3*t + y[2]*3*t*t*(1-t) + pow(t,3)*y[3];
        putpixel(px,py, WHITE);

    }

    getch();

}
