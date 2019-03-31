/*C PROGRAM TO FILL AN CLOSED AREA USING FLOOD FILL METHOD
-GESHWAR KUMAR
-14-17/08/2017*/
#include<graphics.h>

void main()
{
	int gdriver=DETECT,gmode;
	int x1,y1,x2,y2;
	//cleardevice();
	char buf[100];
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	x1 = 100, y1 = 100 ;
	x2 = 200, y2 = 200 ;
	line(x1,y1,x2,y2);
	//outtext("Line:-");
	circle(x1,y1,3);
	circle(x2,y2,3);

	sprintf(buf,"(%d,%d)",x1,y1);

	outtextxy(x1+4,y1-3,buf);
	sprintf(buf,"(%d,%d)",x2,y2);
	outtextxy(x2+4,y2-3,buf);

	floodfill(x1,y1-1,WHITE);
	floodfill(x2,y2-1,WHITE);

getch();
}