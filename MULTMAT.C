/*C PROGRAM FOR TRANSFORMATION :- TRANSLATION
-GESHWAR KUMAR
-28/08/2017*/
#include<graphics.h>
#include<math.h>
   void main(){

	/*DECLARATION*/
	//int *gd=DETECT, *gm ;
	int mat1[3][3]={{1,2,0},{0,1,1},{2,0,1}},mat2[3][3]={{1,1,2},{2,1,1},{1,2,1}},res[3][3																																																																																														];
	int row,col,temp,sum=0;

	/*INITIATE GRAPHICS*/
	//initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	clrscr();
	/*CLEAR OUTPUT SCREEN*/
	//cleardevice();
	/*MATRIX MULTIPLICATION*/
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			for(temp=0;temp<3;temp++){
				sum=sum+mat1[row][temp]*mat2[temp][col];
				//printf("%d ",res[row][col]);
			}
			res[row][col]=sum;
			sum=0;
		}
	}
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf("%d\t",res[row][col]);
		}
		printf("\n");
	}

getch();
//closegraph();
}