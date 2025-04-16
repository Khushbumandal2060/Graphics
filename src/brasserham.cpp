#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void draw(int x1,int y1,int x2,int y2){
    int dx,dy,temp,steps;
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dx)>abs(dy))
    steps=abs(dx);
    else
    steps=abs(dy);
    temp=2*dy-2*dx;
    int p[steps];
    int x,y;
    x=x1;
    y=y1;
    p[0]=2*dy-dx;
    for(int i=0;i<=steps;i++){
        putpixel(x,y,WHITE);
        delay(100);
        if(p[i]>=0){
            x=x+1;
            y=y+1;
            p[i+1]=p[i]+temp;

        }else{
            x=x+1;
            y=y;
            p[i+1]=p[i]+2*dy;
        }
    }

}int main(){
    int x1,x2,y1,y2;
    printf("enter x1,y1:");
    scanf("%d%d",&x1,&y1);
    printf("enter x2,y2");
    scanf("%d%d",&x2,&y2);
    int gm,gd=DETECT;
    initgraph(&gm,&gd,"");
    draw(x1,y1,x2,y2);
    getch();
    closegraph();

}