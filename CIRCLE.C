#include<graphics.h>

void main()
{
	int gdriver=DETECT,gmode;
	int maxy,midx,midy;

	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

	/*maxy = getmaxy();
	midx = getmaxx() / 2 ;
	midy = getmaxy() / 2 ; */
	//outtext("gk");
	//line(1,maxy,midx,midy);
	circle(5,5,3);
	//closegraph();

getch();
}