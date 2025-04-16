#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
main(){
    int x1,x2,y1,y2,t;
    printf("Enter inital points of line:");
    scanf("%d%d",&x1,&y1);
    printf("Enter final points of line:");
    scanf("%d%d",&x2,&y2);
    int gm,gd=DETECT;
    initgraph(&gm,&gd,"");
    line(x1,y1,x2,y2);
    printf("Enter angle of rotation in degree");
    scanf("%d",&t);
    x1=x1*cos(t)-y1*sin(t);
    y1=x1*sin(t)+y1*cos(t);
    x2=x2*cos(t)-y2*sin(t);
    y2=x2*sin(t)+y2*cos(t);
    line(x1,y1,x2,y2);
    getch();
    closegraph();
}