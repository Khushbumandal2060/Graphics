#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
main(){
    int x1,x2,y1,y2,y;
    printf("Enter inital points of line:");
    scanf("%d%d",&x1,&y1);
    printf("Enter final points of line:");
    scanf("%d%d",&x2,&y2);
    int gm,gd=DETECT;
    initgraph(&gm,&gd,"");
    line(x1,y1,x2,y2);
    printf("Enter y shearing point");
    scanf("%d",&y);
    x1=x1;
    y1=y1+y*x1;
    x2=x2;
    y2=y2+y*x2;
    line(x1,y1,x2,y2);
    getch();
    closegraph();
}