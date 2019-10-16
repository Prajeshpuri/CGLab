#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	for(int j=0;j<5;j++)
	{
	for(int i=0;i<600;i++)
	{
	setfillstyle(SOLID_FILL,MAGENTA);
	circle(50,390-i,50);
	floodfill(50,390-i,WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	circle(90+i,390-2*i,50);
	floodfill(90+i,390-2*i,WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	circle(135+2*i,393-i,50);
	floodfill(130+2*i,390-i,WHITE);
	setfillstyle(SOLID_FILL,WHITE);
	circle(195+2*i,393-3*i,50);
	floodfill(195+2*i,393-3*i,WHITE);

	delay(5);
	cleardevice();
	}
	}
	getch();
}