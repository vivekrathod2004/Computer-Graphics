 #include<iostream.h>
 #include<conio.h>
 #include<stdio.h>
 #include<math.h>
 #include<graphics.h>
 #include<dos.h>

 void drawcircle(int centerX, int centerY,int radius)
 {
	int x=0;
	int y=radius;
	int p=1-radius;
	while(x<=y)
	{
		putpixel(centerX+x,centerY+y,RED);
		putpixel(centerX+y,centerY+x,RED);
		putpixel(centerX-x,centerY+y,RED);
		putpixel(centerX-y,centerY+x,RED);
		putpixel(centerX+x,centerY-y,RED);
		putpixel(centerX+y,centerY-x,RED);
		putpixel(centerX-x,centerY-y,RED);
		putpixel(centerX-y,centerY-x,RED);

		if(p<0)
		{
			p+=2*x+3;  d
		}
		else
		{
			p+=2*(x-y)+5;
			y--;
		}
		x++;
	}
 }
 int main()
 {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	int centerX,centerY,radius;
	cout<<"Enter the center coordinate(x,y)"<<endl;
	cin>>centerX>>centerY;
	cout<<"Enter the radius"<<endl;
	cin>>radius;

	drawcircle(centerX,centerY,radius);
	getch();
	closegraph();
	return 0;
 }
