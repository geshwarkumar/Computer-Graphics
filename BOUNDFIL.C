/*C PROGRAM TO FILL AN CLOSED AREA USING BOUNDARY FILL METHOD
-GESHWAR KUMAR
-14-17/08/2017*/
#include<graphics.h>
#include<math.h>

void main(){

	/*DECLARATION*/
	int *gd=DETECT, *gm ;
	int fcolor=WHITE, bgcolor, bcolor=RED;
	int sx, sy, x, y;

	/*INITIATE GRAPHICS*/
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	/*CLEAR OUTPUT SCREEN*/
	cleardevice();

	setcolor(bcolor);     //SET BOUNDARY COLOR
	/*DRAW RECTANGLE FOR FILL PIXEL*/
	//rectangle(5,5,100,80);
	circle(200,250,100);
	sx = 210, sy = 230 ;

	bgcolor = getpixel(sx,sy);//GAIN BACKGROUD COLOR
	/*FOR FILL LOWER PART*/
	for(y = sy ;; y++){
		x = sx ;
		bgcolor = getpixel(x,y);
		if(bgcolor == bcolor)
			break;
		/* +VE SIDE OF X-AXIS*/
		for(x = sx ;; x++){
			bgcolor = getpixel(x,y);
			if(bgcolor == bcolor)
				break ;
			putpixel(x,y,fcolor);
			delay(5);
		}
		bgcolor = getpixel(sx-1,y);
		/* -VE SIDE OF X-AXIS*/
		for(x = sx-1 ;; x--){
			bgcolor = getpixel(x,y);
			if(bgcolor == bcolor)
				break ;
			putpixel(x,y,fcolor);
			delay(5);
		}
	}
	/*FOR FILL UPPER PART*/
	for(y = sy ;; y--){
		x = sx ;
		bgcolor = getpixel(x,y);
		if(bgcolor == bcolor)
			break;
		/* +VE SIDE OF X-AXIS*/
		for(x = sx ;; x++){
			bgcolor = getpixel(x,y);
			if(bgcolor == bcolor)
				break ;
			putpixel(x,y,fcolor);
			delay(5);
		}
		bgcolor = getpixel(sx-1,y);
		/* -VE SIDE OF X-AXIS*/
		for(x = sx-1 ;; x--){
			bgcolor = getpixel(x,y);
			if(bgcolor == bcolor)
				break ;
			putpixel(x,y,fcolor);
			delay(5);
		}
	}

getch();
closegraph();
}