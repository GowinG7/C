#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
circle(100,100,50);
outtextxy(90,100,”BCA”);
setcolor(WHITE);
getch();
closegraph();
}
