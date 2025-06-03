#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int main() {
    int x1, y1, x2, y2, dx, dy, xwmin, ywmin, xwmax, ywmax;
    int i,p[4],q[4];
    float t1=0.0,t2=1.0;
    printf("Enter lower end coordinate of window:");
    scanf("%d%d", &xwmin,&ywmin);
    printf("Enter upper end coordinate of window:");
    scanf("%d%d",&xwmax,&ywmax);
    printf("Enter initial point of line:");
    scanf("%d%d",&x1,&y1);
    printf("Enter final points of line:");
    scanf("%d%d",&x2,&y2);
    int gm,gd=DETECT;
    initgraph(&gm,&gd,"");
    setColor(BLUE);
    rectangle(xwmin,ywmax,xwmax,ywmin);
    setColor(GREEN);
    line(x1,y1,x2,y2);
    printf("Press any key to clip:");
    scanf(" ");
    dx=x2-x1;
    dy=y2-y1;
    p[0]=-dx;                           q[0]=x1-xwmin;
    p[1]=dx;                            q[1]=xwmax-x1;
    p[2]=-dy;                           q[2]=y1-ywmin;
    p[3]=dy;                            q[3]=ywmax-y1;
    for(i=0;i<4;i++) {
        if(p[i]==0&&q[i]<0)
        printf("completely outside and parallel");
        else {
            if(p[i]>0)
            t1=fmax(0.0,(float)q[i]/p[i]);
            if(p[i]<0)
            t2=fmin(1.0,(float)q[i]/p[i]);
        }
    }
    int newx1=x1+t1*dx;
    int newy1=y1+t1*dx;
    int newx2=x1+t2*dx;
    int newy2=y1+t2*dy;
    setColor(RED);
    line(newx1, newy1, newx2, newy2);
    getch();
    closegraph();
    return 0;

}                               