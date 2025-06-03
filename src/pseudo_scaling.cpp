#include <conio.h>
#include<stdio.h>
#include <graphics.h>
int main(){
    int x1,x2,y1,y2,tx,ty,depth,gm,gd=DETECT;
    printf("Enter x1, y1:");
    scanf("%d%d",&x1,&y1);
    printf("Enter x2, y2");
    scanf("%d%d",&x2,&y2);
    depth=(x2-x1)/4;
    initgraph(&gm,&gd,"");
    bar3d(x1,y1,x2,y2,depth,7);
    printf("enter scaling point:");
    scanf("%d%d",&tx,&ty);
    x1=x1*tx;
    x2=x2*tx;
    y1=y1*ty;
    y2=y2*ty;
    depth=(x2-x1)/4;
    bar3d(x1,y1,x2,y2,depth,7);
    getch();
    closegraph();
    
}