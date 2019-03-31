/*C PROGRAM FOR TRANSFORMATION :- SCALLING OF TRIANGLE
-GESHWAR KUMAR
-18/09/2017*/
#include<graphics.h>
#include<math.h>
void main(){

	/*DECLARATION*/
	int gd=DETECT, gm ;
	int BT[3][3]={
					{1,0,-50},
					{0,1,-90},
					{0,0,1}
				},
		FT[3][3]={
					{1,0,50},
					{0,1,90},
					{0,0,1}
				},
		S[3][3]={
					{3,0,0},
					{0,2,0},
					{0,0,1}
				},
		P[3][3]={
					{50,90,90},
					{50,50,70},
					{1,1,1}
				},
		res[3][3];
	int row,col,temp,sum=0,i;//,maxx,maxy,midx,midy;

	/*INITIATE GRAPHICS*/
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	clrscr();
	/*CLEAR OUTPUT SCREEN*/
	cleardevice();
	/*CALCULATE MID POINT
	maxx = getmaxx();
	maxy = getmaxy();
	midx = maxx/2;
	midy = maxy/2;
	/*********************/
	printf("Example of Triangle Scalling:");
	/*FOR DRAW SHAPE BEFORE TRANSLATION*/
	for(i=0;i<3;i++)
		line(P[0][i],P[1][i],P[0][(i+1)%3],P[1][(i+1)%3]);
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
	/*SCALLING*/
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			for(temp=0;temp<3;temp++){
				sum=sum+S[row][temp]*res[temp][col];
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
		line(res[0][i],res[1][i],res[0][(i+1)%3],res[1][(i+1)%3]);
	/*
	line(res[0][0],res[1][0],res[0][1],res[1][1]);
	line(res[0][1],res[1][1],res[0][2],res[1][2]);
	line(res[0][2],res[1][2],res[0][3],res[1][3]);
	line(res[0][3],res[1][3],res[0][0],res[1][0]);
	*/
	/*FOR DISPLAY MULTIPLICATION RESULT*/
	/*
	for(row=0;row<4;row++){
		for(col=0;col<4;col++){
			printf("%d\t",res[row][col]);
		}
		printf("\n");
	}
	*/
getch();
closegraph();
}