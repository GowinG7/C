//Write a program to draw rectangle.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
rectangle(200,100,500,200);
setcolor(GREEN);
getch();
closegraph();
}
