/*C PROGRAM TO DRAW LINE USING DDA
-GESHWAR KUMAR
-26/07/2017*/
#include<graphics.h>
#include<math.h>

void main(){
	int *gd=DETECT, *gm ;
	float x, y, del_x, del_y, m ;
	int x1, x2, y1, y2 ;
	int iter;

	initgraph(&gd, &gm, "C:\\TC\\BGI");

	cleardevice();

	x1 = 100 , y1 = 100 ;
	x2 = 200 , y2 = 150 ;

	del_x = x2 - x1 ;
	del_y = y2 - y1 ;

	m = del_y/del_x ;

	x = x1 , y = y1 ;

	putpixel(x, y, RED);
	printf("%f-%f ",x,y);
	if(del_x >= del_y){
		for(iter = 1 ; iter <= del_x ;iter++){
			x = x + 1 ;
			y = y + m ;
			putpixel(floor(x + .5), floor(y + .5),RED);
			printf("%f-%f ",x,y);
		}
	}
	else{
		for(iter = 1 ; iter <= del_y ; iter++){
			x = x + 1/m ;
			y = y + 1 ;
			putpixel(floor(x + .5), floor(y + .5),RED);
			printf("%f-%f ",x,y);
		}
	}
getch();
closegraph();
}