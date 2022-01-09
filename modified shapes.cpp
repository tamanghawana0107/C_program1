//WAP to make graphics shape in C...
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC\\BGI");
	rectangle(150,150,300,200);
	rectangle(165,165,285,185);
	line(150,150,125,175);
	line(150,200,125,175);
	line(300,150,325,175);
	line(325,175,300,200);
	getch();
	closegraph();
	return 0;
}
