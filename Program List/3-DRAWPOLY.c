/*C PROGRAM FOR DRAW POLYGON :- TRIANGLE,RECTANGLE,PENTAGON...etc.,
-GESHWAR KUMAR
-28/08/2017*/
#include<graphics.h>

int main()
{
    int gd=DETECT, gm;
    int triangle[8]={20,150, 60,70, 110,150, 20,150};
    int rect[10]={150,60, 280,60, 280,150, 150,150, 150,60};
    int pentagon[12]={340,150, 320,110, 360,70, 400,110, 380,150, 340,150};
    int hexagon[14] ={ 360,260, 340,240, 360,220, 400,220, 420,240, 400,260, 360,260}; 
    int octagon[18]={450,150, 430,120, 430,100, 450,70, 500,70, 520,100, 520,120, 500,150, 450,150};
    int poly1[10]={50,400, 50,300, 150,400, 250,300, 250,400 };
    int poly2[12]={350,430, 350,390, 430,350, 350,310, 300,410, 350,430 };

    initgraph(&gd, &gm, "C:\\TC\\BGI");
    
    outtextxy(150,15, "Polygon Drawing in Graphics.h using drawpoly() & fillpoly().");      

    drawpoly(4,triangle);  
    outtextxy(30,160, "Triangle");

    drawpoly(5,rect);  
    outtextxy(190, 160, "Rectangle");   
    drawpoly(6,pentagon);  
    outtextxy(330, 160, "Pentagon");
    drawpoly(9,octagon);
    outtextxy(450, 160, "Octagon");
  
    fillpoly(7,hexagon);
    outtextxy(362, 262, "Hexagon");     

    drawpoly(5,poly1);
    drawpoly(6,poly2);
    outtextxy(400, 400, "Polygon");

    getch();
    closegraph();
    return 0;
}