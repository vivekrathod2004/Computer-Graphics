#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void bsline(int x,int y,int x2,int y2)
{
int dx,dy,p;
dx=x2-x;
dy=y2-x);
p=2*(dy)-(dx);
while(x<=x2)
{
if(p<0)
{
x=x+1;
y=y;
p=p+2*(dy);
}
else
{
x=x+1;
y=y+1;
p=p+2*(dy-dx);
}
putpixel(x,y,RED);
delay(10);
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
int x1,x2,y1,y2;
cout<<"Enter the x1,y1,x2,y2 values: ";
cin>>x1>>y1>>x2>>y2;
bsline(x1,y1,x2,y2);
getch();
closegraph();
}
