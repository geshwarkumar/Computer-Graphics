/*C PROGRAM TO DRAW LINE USING DDA
-GESHWAR KUMAR
-26/07/2017*/
#include<graphics.h>
#include<math.h>

void main(){
	/*DECLARATION*/
	int *gd=DETECT, *gm ;
	float x, y, del_x, del_y, m, xinc, yinc ;
	int x1, x2, y1, y2, steps ;
	int iter,iter2;
	/*INITIATE GRAPHICS*/
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	/*CLEAR OUTPUT SCREEN*/
	cleardevice();

	x1 = 100 , y1 = 150 ;
	x2 = 150 , y2 = 200 ;

       //	del_x = x2 - x1 ;
	//printf("%f-%d",del_x,del_x);
	del_x = abs(x2-x1);
	//printf("%f-%d",del_x,del_x);
	del_y = abs(y2 - y1);

	m = del_y/del_x ;

	x = x2 , y = y2 ;

	if(del_x >= del_y){
		xinc = 1 ;
		yinc = m ;
		steps = del_x ;
	}
	else{
		xinc = 1/m ;
		yinc = 1 ;
		steps = del_y ;
	}
	putpixel(x, y, RED);
	/*for(iter = steps ; iter >= 1 ; iter--){
		x = x - xinc ;
		y = y - yinc ;
		putpixel(floor(x + .5), floor(y + .5),RED);
	}*/
       for(iter = 1 ; iter <= steps ; iter++){
		x = x + xinc ;
		y = y + yinc ;
		putpixel(floor(x + .5), floor(y + .5),WHITE);
	}
	/*if(del_x >= del_y){
		for(iter = 1 ; iter <= del_x ;iter++){
			x = x + 1 ;
			y = y + m ;
			putpixel(floor(x + .5), floor(y + .5),RED);
		}
	}
	else{
		for(iter = 1 ; iter <= del_y ; iter++){
			x = x + 1/m ;
			y = y + 1 ;
			putpixel(floor(x + .5), floor(y + .5),RED);
		}
	} */
getch();
closegraph();
}