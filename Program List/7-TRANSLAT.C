/*C PROGRAM FOR TRANSFORMATION :- TRANSLATION
-GESHWAR KUMAR
-28/08/2017*/
#include<graphics.h>
#include<math.h>
   void main(){

	/*DECLARATION*/
	int *gd=DETECT, *gm ;
	int T[3][3]={{1,0,10},{0,1,6},{0,0,1}},P[3][1]={{5},{7},{1}},res[3][1];
	int row,col,temp,sum=0;

	/*INITIATE GRAPHICS*/
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	clrscr();
	/*CLEAR OUTPUT SCREEN*/
	cleardevice();
	line(P[0][0],P[1][0],P[0][1],P[1][1]);
	line(P[0][1],P[1][1],P[0][2],P[1][2]);
	line(P[0][2],P[1][2],P[0][0],P[1][0]);
	/*MATRIX MULTIPLICATION*/
	for(row=0;row<3;row++){
		for(col=0;col<1;col++){
			for(temp=0;temp<3;temp++){
				sum=sum+T[row][temp]*P[temp][col];
				//printf("%d ",res[row][col]);
			}
			res[row][col]=sum;
			sum=0;
		}
	}
	line(res[0][0],res[1][0],res[0][1],res[1][1]);
	line(res[0][1],res[1][1],res[0][2],res[1][2]);
	line(res[0][2],res[1][2],res[0][0],res[1][0]);

	/*for(row=0;row<3;row++){
		for(col=0;col<1;col++){
			printf("%d\t",res[row][col]);
		}
		printf("\n");
	} */

getch();
closegraph();
}