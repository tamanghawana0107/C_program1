
#include<stdio.h>
#include<conio.h>
int main()
{
	int gd,gm,x,y,i;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	x=getmaxx();
	y=getmaxx();
	for(i=1;i<=y;i+=10)
	{
		ellipse(x/2,y/2,0,360,i+10,i);
	}
	getch();
	closegraph();
	restorecrtmode();
}
