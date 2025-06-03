#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
main(){
    int x1,x2,y1,y2,x,y;
    printf("Enter inital points of line:");
    scanf("%d%d",&x1,&y1);
    printf("Enter final points of line:");
    scanf("%d%d",&x2,&y2);
    int gm,gd=DETECT;
    initgraph(&gm,&gd,"");
    line(x1,y1,x2,y2);
    printf("Enter scaling points");
    scanf("%d%d",&x,&y);
    x1=x1*x;
    y1=y1*y;
    x2=x2*x;
    y2=y2*y;
    line(x1,y1,x2,y2);
    getch();
    closegraph();
}