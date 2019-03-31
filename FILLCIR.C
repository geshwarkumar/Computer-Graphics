#include<graphics.h>

void main()
{
	int gdriver=DETECT,gmode;
	int x1,y1,x2,y2;
	//cleardevice();

	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	x1 = 100, y1 = 100 ;
	x2 = 200, y2 = 200 ;
	line(x1,y1,x2,y2);
	//outtext("Line:-");
	circle(x1,y1,3);
	circle(x2,y2,3);
	outtextxy(x1+4,y1-3,"(100,100)");
	outtextxy(x2+4,y2-3,"(200,200)");
	floodfill(x1,y1-1,WHITE);
	floodfill(x2,y2-1,WHITE);

getch();
}