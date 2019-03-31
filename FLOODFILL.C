/*C PROGRAM TO FILL AN CLOSED AREA USING FLOOD FILL METHOD
-GESHWAR KUMAR
-14-17/08/2017*/
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void fill_right(int x,int y);
void fill_left(int x,int y);
void main()
{
                int gd=DETECT,gm,n,i,x,y,a[10][10];
                clrscr();
                initgraph(&gd,&gm,"c:\\turboc3\\bgi");
                printf("*** Flood Fill Algorithm ***\n");
                printf("Enter the no. of edges of polygon\t");
                scanf("%d",&n);
                printf("Enter the cordinates of polygon\n");
                for(i=0;i<n;i++)
                {
                                printf("X%d Y%d ",i,i);
                                scanf("%d %d",&a[i][0],&a[i][1]);
                }
                a[n][0]=a[0][0];
                a[n][1]=a[0][1];
                printf("Enter the seed Point (X,Y)\t");
                scanf("%d%d",&x,&y);
                setcolor(WHITE);
                for(i=0;i<n;i++) /*- draw poly -*/
                {
                                line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
                }
                fill_right(x,y);
                fill_left(x-1,y);
                getch();
}
void fill_right(int x,int y)
{
                if(getpixel(x,y) == 0)
                {
                                putpixel(x,y,RED);
                                fill_right(++x,y);
                                x=x-1;
                                fill_right(x,y-1);
                                fill_right(x,y+1);

                }
}
void fill_left(int x,int y)
{
                if(getpixel(x,y) == 0)
                {
                                putpixel(x,y,RED);
                                fill_left(--x,y);
                                x=x+1;
                                fill_left(x,y-1);
                                fill_left(x,y+1);
                }
}

