#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#define ROUND(x) ((int) (x+0.5))

//DDA Function 
void ddaline(int x1, int y1, int x2, int y2, int c)
{
    // calculate dx & dy
    int dx = x2 - x1;
    int dy = y2 - y1;

    // calculate steps required for generating pixels
    int steps;
    if(abs(dx) > abs(dy))
	steps = abs(dx);
    else
	steps = abs(dy);

    // calculate increment in x & y for each steps
    float x_inc = dx / (float)steps;
    float y_inc = dy / (float)steps;

    // Put pixel for each step
    float x = x1;
    float y = y1;
    putpixel(x,y,c);
    for (int i = 0; i < steps; ++i)
    {
	x += x_inc;                          
	y += y_inc;                          
	putpixel(ROUND(x), ROUND(y),c);
    }
}

// Driver program
void main()
{
    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "C:\\TC\\BGI");

    ddaline(10,10,50,10,111);
    ddaline(10,10,10,50,111);
    ddaline(50,10,50,50,111);
    ddaline(10,50,50,50,111);

    getch();
}