#include<graphics.h>
#include<stdio.h>
//#include<dos.h>
void main()
{
	int gdriver=DETECT,gmode;
	int maxx,maxy,midx,midy;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

	maxx = getmaxx();
	maxy = getmaxy();
	midx = getmaxx() / 2 ;
	midy = getmaxy() / 2 ;
	line(midx,1,midx,maxx);
	line(1,midy,maxx,midy);
	//printf("X = %d \t Y = %d",maxx,maxy);
getch();
}