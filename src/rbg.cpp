//RGB to HSV conversion 
#include<stdio.h>
int main(){
  int R,G,B;
  float r,g,b,Cmax,Cmin,dc,H,S,V;
  printf("EnterRGB Color codes:");
  scanf("%d%d%d",&R,&g,&b);
  r=(float)R/255;
  g=(float)G/255;
  b=(float)B/255;
  if(r>g&&r>b)
  Cmax=r;
  else if(g>r&&g>b)
  Cmax=g;
  else
  Cmax=b;
  if(r<b&&r<g)
  Cmin=r;
  else if(g<b&&g<r)
  Cmin=g;
  else
  Cmin=b;
  dc=Cmax-Cmin;
  
  if(dc==0){
  H=0;
}
  else if (Cmax==r){
    int temp=(g-b)/dc;
    H=60*(temp%6);
  }
  else if(Cmax=g){
    int temp=(b-r)/dc;
    H=60*(temp+2);
  }
  else{
    int temp=(r-g)/dc;
    H=60*(temp+4);
  }
  if(Cmax==0)
  S=0;
  else
  S=dc/Cmax;
  V=Cmax; 
  if(H<0)
  H=H+360;
  printf("RGB %d%d%d is HSV %.2f %.2f and %.2f,R,G,B,H,S,V");
  return 0;
}