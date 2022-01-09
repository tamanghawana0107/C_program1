//WAP to make rectangle graphics in C....
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC\\BGI");
	int x=250,y=200,radius=20;
	rectangle(100,100,400,300);
	for(radius=20;radius<=100;radius=radius+20)
	{
		circle(x,y,radius);
	}
	getch();
	closegraph();
	return 0;
}
