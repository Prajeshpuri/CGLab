#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
 int gdriver=DETECT,gmode,errorcode,tmp,i=1,rds;
 float st_x,st_y,x1,x2,y1,y2,ep;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
       printf("Enter Radius:");
 scanf("%d",&rds);
 while(rds>pow(2,i))
  i++;
   ep=1/pow(2,i);
 x1=rds;  y1=0;
 st_x=rds; st_y=0;
 do
 { x2=x1+(y1*ep);
  y2=y1-(x2*ep);
  putpixel(x2+200,y2+200,10);
  x1=x2;
  y1=y2;
 }while((y1-st_y)<ep || (st_x-x1)>ep);
    getch();
}
