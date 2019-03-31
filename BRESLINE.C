/*C PROGRAM TO DRAW LINE USING BRESHEM ALGORITHM
-GESHWAR KUMAR
-29/07/2017*/
#include<graphics.h>
#include<math.h>

void main(){
	/*DECLARATION*/
	int *gd=DETECT, *gm ;
	float x, y, del_x, del_y, xinc=0, yinc=0 ;
	int x1, x2, y1, y2, steps ;
	int iter,iter2;
	/*INITIATE GRAPHICS*/
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	/*CLEAR OUTPUT SCREEN*/
	cleardevice();

	x1 = 100 , y1 = 100 ;
	x2 = 200 , y2 = 150 ;

	del_x = x2 - x1 ;	del_y = y2 - y1;

	x = x1 , y = y1 ;

	steps = (2 * del_y) - del_x ;
	if(steps < 0){
		xinc = 1 ;
		yinc = 0 ;
		steps = steps + (2 * del_y) ;
	}
	else{
		xinc = 1 ;
		yinc = 1 ;
		steps = steps + 2 * (del_y - del_x) ;
	}
	putpixel(x, y, RED);

       for(iter = 1 ; iter <= steps ; iter++){
		x = x + xinc ;
		y = y + yinc ;
		putpixel(floor(x + .5), floor(y + .5),RED);
		printf("%.2f<=>%.2f ",x,y);
	}
getch();
closegraph();
}