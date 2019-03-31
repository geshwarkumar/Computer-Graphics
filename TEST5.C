#include<graphics.h>
struct point{
	int x,y;
}p[3];
void main()
{
	int iter1,iter2,iter3;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

	p[0].x = 5 , p[0].y = 5 ;
	//p[1].x = 100, p[1].y = 100 ;
	for(iter1 = 0 ; iter1 < 3 ;iter1++){
		for(iter2 = 1 ; iter2 < 3 ; iter2++){
			for(iter3 = 2 ; iter3 < 3 ; iter3++){
			}
		}
	}

	line(p[0].x,p[0].y,p[1].x,p[1].y);
getch();
}