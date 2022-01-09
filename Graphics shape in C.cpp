//WAP to make a graphics shape in C....
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC\\BGI");
	rectangle(100,100,300,200);
	getch();
	closegraph();
	return 0;
}
