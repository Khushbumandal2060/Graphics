#include<math.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void draw(int a,int b){
    int x,y,p1,p2;
    x=0;
    y=b;
    p1=b*b-a*a*b+(1/4)*a*a;
    int t1=2*b*b*x;
    int t2=2*a*a*y;
    for(int i=0;t1<=t2;i++){
    t1=2*b*b*x;
    t2=2*a*a*y;
        putpixel(x,y,WHITE);
        putpixel(-x,y,WHITE);
        putpixel(x,-y, WHITE);
        putpixel(-x,-y,WHITE);
        if(p1<0){
            x=x+1;
            y=y;
        p1=p1+b*b+t1;
        }
        else{
            x=x+1;
            y=y-1;
        p1=p1+t1-t2+b*b;
        }
    }
    p2=b*b*(x+0.5)*(x+0.5)+a*a*(y-1)*(y-1)-a*a*b*b;
    for(int i=0;y>=0;i++){
        putpixel(x,y,WHITE);
        putpixel(-x,y,WHITE);
        putpixel(x,-y, WHITE);
        putpixel(-x,-y,WHITE);
        if(p2<0){
            x=x+1;
            y=y-1;
        p2=p2+a*a+t1-t2;
        }
        else{
            x=x;
            y=y-1;
       p2=p2+a*a-t2;
}
t1=2*b*b*x;
 t2=2*a*a*y;
    }}
main(){
    int a,b,gd=DETECT,gm;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    initgraph(&gm,&gd,"");
    draw(a,b);
    getch();
    closegraph();
}