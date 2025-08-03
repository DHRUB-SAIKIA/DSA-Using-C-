// C++ Program to show how to use
// sleep function
#include <iostream>
#include<graphics.h>

// Library effective with Windows
#include <windows.h>

// Library effective with Linux
#include <unistd.h>

using namespace std;

int main()
{
	
	int gd=DETECT , 	gm;
	initgraph(&gd, &gm , (char*)"");
	
	line(120,0,120,2000);
	line(0,330,1200,330);
	moveto(120,330);
	for(int k=1;k<100;k++)
	for(int i=21.0,j=32;i<40,j<51;i=i+3,j=j-k*20)
	{
		sleep(1.5);
		outtextxy(600,600,"T");
		linerel(i,-j);
	}

	
	getch();
	closegraph();
	return 0;
}
