#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
void firel(int xc, int yc)
{
	int xr,yr;
	xr = (xc-100) + (rand() % (int) ((xc+100) - (xc-100) + 1));
	yr = (yc-100) + (rand() % (int) ((yc+100) - (yc-100) + 1));
	line(xc,yc,xr,yr);
}
void fire(int xcf, int ycf)
{
	int i,rnd,qnt,col;
	col = 1 + (rand() % (int) (15 - 1 + 1));
	setcolor(col);
	qnt = 50 + (rand() % (int) (150 - 50 + 1));
	for(i = 0; i <= qnt; i++)
	{       rnd = 3 + (rand() % (int) (15 - 3 + 1));
		firel(xcf,ycf);
		delay(rnd);
	}

}
void main()
{
	int gd = DETECT, gm,lp, xcr, ycr;
	clrscr();
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	for(lp = 0; lp <= 20; lp++)
	{
		xcr = 20 + (rand() % (int)(600 - 20 + 1));
		ycr = 20 + (rand() % (int) (400 - 20 + 1));
		delay(3);
		fire(xcr,ycr);
	}
	getch();
	closegraph();
}