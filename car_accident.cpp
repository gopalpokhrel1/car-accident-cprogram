#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
	int i,j;
	setbkcolor(BLACK);
	for(i=0; i<170; i++)
	{
		//road
		setcolor(15);
		line(0,400, 700, 400);
		
		// stick man
		circle(450-i,300,15);//head
		line(450-i,315,450-i,350);//body
		line(450-i,335,500-i,350);//right hand
	   line(450-i,335,395-i,350);//left hand
	    line(450-i,350,475-i,400);//right foot
	   line(450-i,350,435-i,400);//left foot
	   
	   
	   
	   // car
	   circle(20+i,385, 15);//front wheel
	   circle(70+i, 385, 15);//back wheel
	   line(5+i, 385, 0+i, 340);//back line
	   line(35+i, 385, 55+i, 385);//mid line
	   line(85+i, 385, 90+i, 340);//front line
	   line(0+i, 340, 90+i, 340);//top line
	   rectangle(1+i, 330, 89+i, 340);//top roop
	   rectangle(12+i, 350, 24+i, 370);// back window
	   rectangle(66+i, 350, 78+i, 370);// front window
	   
	   
	   //after accident
	   if(i==169)
	   {
	   	for(j=0; j<200; j++)
	   	{
	    	line(0,400, 700, 400);//road
	    	//vehical body
          line(169, 355, 174 , 400);
          line(264, 355, 259, 400);
          line(169,355, 264,355);
          
          circle(300+j,300-j,15);//head
          line(300+j,315+j,300+j,350+j);//body
          line(300+j,315,300+j, 270);
          circle(169-j, 385, 15);//back wheel
          circle(259+j, 385-j, 15);//front wheel
          //window
          rectangle(180+j, 350+j, 192+j, 370+j);
          delay(5);
	   		cleardevice();
		   }
	   }
	   
	   
	   delay(50);
		cleardevice();
	}
	getch();
	closegraph();
}
