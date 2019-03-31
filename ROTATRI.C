/*C PROGRAM FOR TRANSFORMATION :- ROTATION OF TRIANGLE
-GESHWAR KUMAR
-18/09/2017*/
#include<graphics.h>
#include<math.h>
void main(){

	/*DECLARATION*/
	int gd=DETECT, gm ;
	float BT[3][3]={
					{1,0,-50},
					{0,1,-50},
					{0,0,1}
				},
		FT[3][3]={
					{1,0,50},
					{0,1,50},
					{0,0,1}
				},
		R[3][3]={
					{0.5,-0.86,0},
					{0.86,0.5,0},
					{0,0,1}
				},
		P[3][3]={
					{50,90,90},
					{50,50,70},
					{1,1,1}
				},
		res[3][3];
	int row,col,temp,sum=0,i,maxx,maxy,midx,midy;

	/*INITIATE GRAPHICS*/
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	clrscr();
	/*CLEAR OUTPUT SCREEN*/
	cleardevice();
	/*CALCULATE MID POINT*/
	maxx = getmaxx();
	maxy = getmaxy();
	midx = maxx/2;
	midy = maxy/2;
	line(midx,1,midx,maxx);
	line(1,midy,maxx,midy);
	/*********************/
	printf("Example of Triangle Rotation: at 60 degree::");
	/*FOR DRAW SHAPE BEFORE TRANSLATION*/
	for(i=0;i<3;i++)
		line(midx+P[0][i],midy-P[1][i],midx+P[0][(i+1)%3],midy-P[1][(i+1)%3]);
	/*
	line(P[0][0],P[1][0],P[0][1],P[1][1]);
	line(P[0][1],P[1][1],P[0][2],P[1][2]);
	line(P[0][2],P[1][2],P[0][3],P[1][3]);
	line(P[0][3],P[1][3],P[0][0],P[1][0]);
	*/
	/*MATRIX MULTIPLICATION*/
	/*BACKWARD TRANSLATION*/
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			for(temp=0;temp<3;temp++){
				sum=sum+BT[row][temp]*P[temp][col];
				//printf("%d ",res[row][col]);
			}
			res[row][col]=sum;
			sum=0;
		}
	}
	/*ROTATION*/
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			for(temp=0;temp<3;temp++){
				sum=sum+R[row][temp]*P[temp][col];
				//printf("%d ",res[row][col]);
			}
			res[row][col]=sum;
			sum=0;
		}
	}
	/*FORWARD TRANSLATION*/
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			for(temp=0;temp<3;temp++){
				sum=sum+FT[row][temp]*res[temp][col];
				//printf("%d ",res[row][col]);
			}
			res[row][col]=sum;
			sum=0;
		}
	}
	/*FOR DRAW SHAPE AFTER TRANSLATION*/
	for(i=0;i<3;i++)
		line(midx+res[0][i],midy-res[1][i],midx+res[0][(i+1)%3],midy-res[1][(i+1)%3]);
	/*
	line(res[0][0],res[1][0],res[0][1],res[1][1]);
	line(res[0][1],res[1][1],res[0][2],res[1][2]);
	line(res[0][2],res[1][2],res[0][3],res[1][3]);
	line(res[0][3],res[1][3],res[0][0],res[1][0]);
	*/
	/*FOR DISPLAY MULTIPLICATION RESULT
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf("%.2f\t",res[row][col]);
		}
		printf("\n");
	}
	*/
getch();
closegraph();
}