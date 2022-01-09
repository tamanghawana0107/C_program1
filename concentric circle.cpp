#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int x=240,y=140,radius;
	for(radius=50;radius<=100;radius=radius+25)
	{
		circle(240,140,radius);
	}
	closegraph();
	getch();
}
