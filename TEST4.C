#include<graphics.h>
struct point{
	int x,y;
}p1,p2;
void main()
{
	int gdriver=DETECT,gmode;
	char buf[100];
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	p1.x = 100, p1.y = 100 ;
	p2.x = 200, p2.y = 200 ;
	line(p1.x,p1.y,p2.x,p2.y);
//return 0;
getch();
}