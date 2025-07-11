//Write a program to draw two concentric circles with center (50,50) and radii 75 and 125.

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    circle(300, 200, 75);
    circle(300, 200, 125);
    setcolor(WHITE);
    getch();
    closegraph();
    return 0;
}
