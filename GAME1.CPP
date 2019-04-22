#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>
#include<process.h>
void one();
void two();
void three();
void four();
int main()
{
	clrscr();
	char gh[3],c[3],ch;
	time_t t;
	unsigned int seed;
	int f=0,i=0,x=60,y=60,gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	settextstyle(2,0,6);
	outtextxy(50,30,"PASSWORD");
	rectangle(250,50,50,90);
	do{
	gh[i]=getche();
	if(gh[i]>='a' && gh[i]<='z')
	{
	settextstyle(1,1,5);
	outtextxy(50+f,60,"*");
	f+=25;

	}
	i++;
	}
	while(i<4);
	cleardevice();

	if((gh[0]+=5)==108 && (gh[1]+=5)==116 && (gh[2]+=5)==116 && (gh[3]+=5)==105)
	{	for(i=5;i<=365;i++)
	{
		if((i>=5 && i<=30) || (i>=55 && i<=80) || (i>=105 && i<=130) || (i>=155 && i<=180) || (i>=205 && i<=230) || (i>=255 && i<=280) || (i>=305 && i<=330) || (i>=340 && i<=365))
		{
		setcolor(RED);
		settextstyle(1,0,5);
		outtextxy(200,150,"LOADING");
		}
		else
		{
		setcolor(BLUE);
		settextstyle(1,0,5);
		outtextxy(200,150,"LOADING");
		}
		/*line(150,220,250,220);
		line(150,250,250,250);
		line(150,220,150,250);
		line(250,220,250,250);*/
		//if(i>5 && i<=57)
		{
		if(i>=50 && i<=110)
		{
		one();
		}
		if(i>=111 && i<=220)
		{
		two();
		}
		if(i>=221 && i<=300)
		{
		three();
		}
		if(i>=301 && i<=365)
		{
		four();
		}
		setcolor(CYAN);
		rectangle(470,220,100,250);
		line(100+i,223,100+i,247);
		delay(20);
		}
	}
	delay(1000);
	cleardevice();
	outtextxy(350,350,"PRESS ESC KEY TO EXIT");
outtextxy(350,370,"PRESS W TO MOVE UP");
outtextxy(350,390,"PRESS S TO MOVE DOWN");
outtextxy(350,410,"PRESS A TO MOVE LEFT");
outtextxy(350,430,"PRESS D TO MOVE RIGHT");
seed=(unsigned)time(&t);
seed+=20;
	do
{
//new code 21.02.2017
if(seed<(unsigned)time(&t))
{
   outtextxy(350,430,"TIME OUT.YOU FAILED");
   delay(2000);
   return 0;
}
//new code 21.02.2017
line(90,50,90,80);line(130,90,130,60);
line(170,50,170,80);
line(210,90,210,60);
{
	line(50,50,250,50);
	line(50,90,250,90);
	line(50,50,50,90);
	line(250,85,250,50);
}
//rectangle(250,50,50,90);//50,50,250,90
if((x>=253)&&(y>=87))
{
   outtextxy(350,430,"YOU WON.");
   delay(2000);
   return 0;
}
circle(x,y,2);
ch=getche();
if(ch=='w')
{
delay(1);
if((x>=88 && x<=92) && (y==82) || (x>=168 && x<=172) && (y==82) || (x>=52 && x<=248 ) && (y==53))
{                             /*(x==252 && (y>=48 && y<=88))*/
sound(50);
delay(5);
nosound();
y;

}
else
y--;
}
if(ch=='s')
{
delay(1);
if(((x>=128 && x<=132) && (y==58)) || ((x>=208 && x<=212) && (y==58)) || (x==252 && (y>=48 && y<=88)) || (x>=52 && x<=248 ) && (y==87))
{
sound(50);
delay(5);
nosound();
y;
}
else
y++;
}
if(ch=='a')
{
delay(1);
if((x==53 && (y>=53 && y<=87)) || (x==213 && (y<=87 && y>=58)) || (x==173 && (y<=82 && y>=52)) || (x==133 && (y<=87 && y>=58)) || (x==93 && (y<=82 && y>=52)))
{
sound(50);
delay(5);
nosound();
x;
}
else
x--;
}
if(ch=='d')
{
delay(1);
if((x==87 && (y>=52 && y<=82)) || (x==167 && (y>=52 && y<=82)) || (x==127 && (y>=58 && y<=137)) || (x==207 && (y>=58 && y<=137)) || (x==247 && (y>=53 && y<=86)))
{
sound(50);
delay(5);
nosound();
x;
}
else
x++;
}
cleardevice();
}while(ch!=27);
	}
	else
	{
	setcolor(RED);
	settextstyle(1,0,5);
	outtextxy(260,100,"!");
	outtextxy(200,150,"ABORT");
	delay(1000);
	return 0;
	}

return 0;
}
void one()
{

		setcolor(WHITE);
		settextstyle(1,0,2);
		outtextxy(150,220,"25 %");
}
void two()
{
		setcolor(CYAN);
		settextstyle(1,0,2);
		outtextxy(150,220,"25 %");
		setcolor(WHITE);
		settextstyle(1,0,2);
		outtextxy(150,220,"50 %");
}
void three()
{
		setcolor(CYAN);
		settextstyle(1,0,2);
		outtextxy(150,220,"50 %");
		setcolor(WHITE);
		settextstyle(1,0,2);
		outtextxy(150,220,"75 %");
}
void four()
{
		setcolor(CYAN);
		settextstyle(1,0,2);
		outtextxy(150,220,"75 %");
		setcolor(WHITE);
		settextstyle(1,0,2);
		outtextxy(150,220,"100 %  COMPLETE");
}
