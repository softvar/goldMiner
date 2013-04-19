#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<process.h>
#define pi 3.1452
int i;
void ud();//upper diagram
void score();//for scoring
void obj();//for objects
int move();//for arrow moving
void mix();//for background
void grasp();//for catching objects
void intro();//startup page
void main()
{int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\tc\\BGI");
 intro();
 cleardevice();
 setbkcolor(MAGENTA);
 settextstyle(0,0,4);
 outtextxy(180,230,"GOLD MINER");
 getch();
 cleardevice();
 setbkcolor(BLACK);
 settextstyle(0,0,1);
 mix();
 grasp();
 getch();
}
void intro()
{char msg[80],j,k=10,i;
 setcolor(BLUE);
 for(j=0;j<8;j++)
 {cleardevice();
  settextstyle(0,0,4) ;
  sprintf(msg,"Loading");
  outtextxy(100,240,msg);
  for(i=0;i<10;i++)
  {circle(350,270,i);
  }
  delay(200);
  for(i=0;i<10;i++)
  {circle(400,270,i);
  }
  delay(200);
  for(i=0;i<10;i++)
  {circle(450,270,i);
  }
  delay(300);
 }
 settextstyle(0,0,1);
 outtextxy(350,400,"Press any key to cont...");
 getch();
 cleardevice();
 for(i=1;i<=10;i++)
 {setcolor(GREEN);
  rectangle(100,200,500,270);
  delay(300);
  cleardevice();
  settextstyle(0,0,3);
  outtextxy(200,300,"Please Wait...");
  gotoxy(16+4.5*i,12);
  printf("%d%",k);
  k+=10;
  for(int j=0;j<40*i;j++)
  {
   setcolor(GREEN);
   rectangle(100,200,500,270);
   line(100+j,200,100+j,270);
   setcolor(LIGHTGREEN);
   line(100+j,233,100+j,237);
   delay(0);
  }
  if(k==110)
  {settextstyle(0,0,1);
   outtextxy(350,400,"Press any key to continue...");
   getch();
  }
}
}
void ud()
{
 for(i=0;i<4;i++)
 {setcolor(YELLOW);
  line(0,150+i,640,150+i);
 }
 setcolor(BROWN);
 for(i=0;i<5;i++)
 {arc(292,150,0,180,80+i);
 }
}
void score()
{setcolor(GREEN);
 {rectangle(520,0,638,100);
  rectangle(525,5,633,95);
  rectangle(2,0,120,100);
  rectangle(7,5,113,95);
  outtextxy(8,30,"AIM: 200$");
  outtextxy(8,60,"TOTAL:");
  outtextxy(526,50,"TRIALS=3");
 }
}
void obj()
{
for(i=0;i<=15;i++)
{
setcolor(YELLOW);
{
   circle(292,380,i);
   circle(580,180,i);
   circle(150,380,i);
}
setcolor(RED);
   rectangle(320+i,210+i,335-i,225-i);
   rectangle(520+i,310+i,535-i,325-i);
   rectangle(115+i,180+i,130-i,195-i);
   setcolor(7);
   ellipse(400+i/10,430-i/10,0,360,10-i,23-i);

}
{
   line(310,450,320,456);
   line(310,450,300,456);
   line(320,456,310,475);
   line(300,456,310,475);
   line(320,456,310,460);
   line(310,460,300,456);
}

{
   line(20,260,30,266);
   line(20,260,10,266);
   line(30,266,20,285);
   line(10,266,20,285);
   line(30,266,20,270);
   line(20,270,10,266);
}
{
   line(540,340,550,346);
   line(540,340,530,346);
   line(550,346,540,365);
   line(530,346,540,365);
   line(550,346,540,350);
   line(540,350,530,346);
}
}
void mix()
{ud();
 score();
 obj();
}
int move()
{int m=295,n=165,x1=10,ctr1=0,ctr2=0,res1;
 char ch;
 do{
 cleardevice();
 mix();
 line(295,118,m,n);
 //line(290,160,m+y,n+y);
 //line(304,160,m+y,n+y);
 ch=getch();
 if(ch=='a')
 {line(295,118,m-x1,n);
  m=m-x1;
  ctr1++;
 }
 if(ch=='d')
 {line(295,118,m+x1,n);
  m=m+x1;
  ctr2++;
 }
 }while(ch!='s');
 res1=ctr1-ctr2;
 cleardevice();
 mix();
 return res1;
}
void grasp()
{
 int res,x=40,x1,x2,l;
 int k,y,z,aim=0,t=0,r,m,p=0;
 l=295,k=118;
 do
 {
 res=move();
 switch(res)
 {case 0: for(x=0;x<260;x+=20)
	  {line(295,165,l,k+x);
	   y=k+x;
	   delay(100);
	  }
	  for(x=0;x<200;x+=20)
	  {setcolor(BROWN);
	   line(l,k,l,y-x);
	   setcolor(YELLOW);
	   for(i=0;i<15;i++)
	   {circle(292,380-x,i);
	   }
	   delay(300);
	   cleardevice();
	   mix();
	    for(i=0;i<17;i++)
	    {setcolor(BLACK);
	     circle(292,380,i);
	    }
	  }
	  cleardevice();
	  mix();
	  for(i=0;i<15;i++)
	    {setcolor(BLACK);
	     circle(292,380,i);
	    }
	  for(x=0;x<270;x+=14)
	  {
	   cleardevice();
	   mix();
	   for(i=0;i<17;i++)
	    {setcolor(BLACK);
	     circle(292,380,i);
	    }
	   setcolor(RED);
	   outtextxy(276-x,365-x,"50$");
	   delay(70);
	  }
	  cleardevice();
	  mix();
	  for(i=0;i<17;i++)
	    {setcolor(BLACK);
	     circle(292,380,i);
	    }
	  aim+=50;
	  gotoxy(7,5);
	  printf("%d",aim);
	  getch();
	  break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 11:
	  x1=l,x2=k;
	  for(x=10;x<200;x+=10)
	  {if(res==1)
	   {t+=3;
	   }
	   else if(res==2)
	   {t+=6;
	   }
	   else if(res==3)
	   {t+=8;
	   }
	   else if(res==4)
	   {t+10;
	   }
	   else if(res==5)
	   {t+=11;
	   }
	   else if(res==6)
	   {t+=13;
	   }
	   else if(res==7)
	   {t+=15;
	   }
	   else if(res==9)
	   {t+=17;
	   }
	   else if(res==10)
	   {t+=19;
	   }
	   else if(res==11)
	   {t+=21;
	   }
	   setcolor(BROWN);
	   line(x1,x2,l-t,k+x);
	   x1=l-t,x2=k+x;
	   delay(100);
	  }
	  cleardevice();
	  mix();
	  break;
  case -2:
  case -3:
  case -5:
  case -6:
  case -7:
  case -9:
  case -10:
  case -11:
	  x1=l,x2=k;
	  for(x=10;x<200;x+=10)
	  {if(res==-1)
	   {t+=3;
	   }
	   else if(res==-2)
	   {t+=6;
	   }
	   else if(res==-3)
	   {t+=8;
	   }
	   else if(res==-5)
	   {t+=11;
	   }
	   else if(res==-6)
	   {t+=13;
	   }
	   else if(res==-7)
	   {t+=15;
	   }
	   else if(res==-9)
	   {t+=17;
	   }
	   else if(res==-10)
	   {t+=19;
	   }
	   else if(res==-11)
	   {t+=21;
	   }
	   setcolor(BROWN);
	   line(x1,x2,l+t,k+x);
	   x1=l+t,x2=k+x;
	   delay(100);
	  }
	  cleardevice();
	  mix();
	  break;
  case -1:x=10;
	  m=x-10;
	  for(x=0;x<100;x+=10)
	  {setcolor(BROWN);
	   line(295,118,l+m,k+x);
	   y=l+m,z=k+x;
	   delay(100);
	   m+=2;
	  }
	  cleardevice();
	  mix();
	  x=10;
	  m=x-10;
	  for(x=0;x<100;x+=10)
	  {setcolor(BLACK);
	   for(i=0;i<15;i++)
	   {rectangle(320+i,210+i,335-i,225-i);
	   }
	   setcolor(BROWN);
	   line(l,k,y-m,z-x);
	   for(i=0;i<15;i++)
	   {rectangle(320+i-m,210+i-x,335-i-m,225-i-x);
	   }
	   m+=2;
	   delay(100);
	   cleardevice();
	   mix();
	   setcolor(BLACK);
	   for(i=0;i<15;i++)
	   {rectangle(320+i,210+i,335-i,225-i);
	   }
	  }
	  for(x=0;x<100;x+=10)
	   {
	   setcolor(RED);
	   outtextxy(320-x,210-x,"10$");
	   delay(100);
	   cleardevice();
	   mix();
	   setcolor(BLACK);
	   for(i=0;i<15;i++)
	   {rectangle(320+i,210+i,335-i,225-i);
	   }
	   }
	   aim+=10;
	   gotoxy(7,5);
	   printf("%d",aim);
	   getch();
	  break;
  case -4:setcolor(BROWN);
	  for(x=0;x<240;x+=20)
	  {line(295,118,l+x,k+x);
	   y=l+x,z=k+x;
	   delay(100);
	  }
	  cleardevice();
	  mix();
	  for(x=0;x<200;x+=20)
	  {setcolor(BLACK);
	   line(540,340,550,346);
	   line(540,340,530,346);
	   line(550,346,540,365);
	   line(530,346,540,365);
	   line(550,346,540,350);
	   line(540,350,530,346);
	   setcolor(BROWN);
	   line(l,k,y-x,z-x);
	   line(530-x,340-x,540-x,346-x);
	   line(530-x,340-x,520-x,346-x);
	   line(540-x,346-x,530-x,365-x);
	   line(520-x,346-x,530-x,365-x);
	   line(540-x,346-x,530-x,350-x);
	   line(530-x,350-x,520-x,346-x);
	   delay(500);
	   cleardevice();
	   mix();
	   setcolor(BLACK);
	   line(540,340,550,346);
	   line(540,340,530,346);
	   line(550,346,540,365);
	   line(530,346,540,365);
	   line(550,346,540,350);
	   line(540,350,530,346);
	  }
	  for(x=0;x<270;x+=25)
	  {
	  setcolor(RED);
	  outtextxy(540-x,350-x,"100$");
	  delay(70);
	  cleardevice();
	  mix();
	  setcolor(BLACK);
	  line(540,340,550,346);
	  line(540,340,530,346);
	  line(550,346,540,365);
	  line(530,346,540,365);
	  line(550,346,540,350);
	  line(540,350,530,346);
	  }
	  aim+=100;
	  gotoxy(7,5);
	  printf("%d",aim);
	  getch();
	  break;
  case 8: setcolor(BROWN);
	  for(x=0;x<50;x+=20)
	  {line(295,118,l-6*x,k+3*x);
	   y=l-6*x,z=k+3*x;
	   delay(150);
	  }
	  cleardevice();
	  mix();
	   for(x=0;x<140;x+=20)
	  {setcolor(BLACK);
	   line(20,260,30,266);
	   line(20,260,10,266);
	   line(30,266,20,285);
	   line(10,266,20,285);
	   line(30,266,20,270);
	   line(20,270,10,266);
	   setcolor(BROWN);
	   line(l,k,y+x,z-x);
	   int m=x-10;
	   line(20+m,260-m,30+m,266-m);
	   line(20+m,260-m,10+m,266-m);
	   line(30+m,266-m,20+m,285-m);
	   line(10+m,266-m,20+m,285-m);
	   line(30+m,266-m,20+m,270-m);
	   line(20+m,270-m,10+m,266-m);
	   delay(500);
	   cleardevice();
	   mix();
	   setcolor(BLACK);
	   line(20,260,30,266);
	   line(20,260,10,266);
	   line(30,266,20,285);
	   line(10,266,20,285);
	   line(30,266,20,270);
	   line(20,270,10,266);
	   y=y+20;
	  }
	   for(x=0;x<270;x+=20)
	   {
	   setcolor(RED);
	   outtextxy(20,270-x,"100$");
	   delay(70);
	   cleardevice();
	   mix();
	   setcolor(BLACK);
	   line(20,260,30,266);
	   line(20,260,10,266);
	   line(30,266,20,285);
	   line(10,266,20,285);
	   line(30,266,20,270);
	   line(20,270,10,266);
	   }
	   aim+=100;
	   gotoxy(7,5);
	   printf("%d",aim);
	   getch();
	   break;
  case -8: for(x=0;x<200;x+=23)
	  {line(295,118,l+6*x,k+3*x);
	   y=l+6*x,z=k+3*x;
	   delay(150);
	  }
	  cleardevice();
	  mix();
	  for(x=0;x<200;x+=20)
	  {line(y,z,y-6*x,z-3*x);
	   delay(300);
	  }
	  cleardevice();
	  mix();
	  break;

  case 12: for(x=0;x<40;x+=20)
	  {line(295,118,l-9*x,k+3*x);
	   y=l-9*x,z=k+3*x;
	   delay(100);
	  }
	  cleardevice();
	  mix();
	  for(x=0;x<40;x+=20)
	  {line(y,z,y+9*x,z-3*x);
	   setcolor(BLACK);
	   for(i=0;i<15;i++)
	   {rectangle(115+i,180+i,130-i,195-i);
	   }
	   setcolor(BROWN);
	   line(y,z,y-m,z-x);
	   for(i=0;i<15;i++)
	   {rectangle(115+i+x,180+i-x,130-i+x,195-i-x);
	   }
	   delay(100);
	   cleardevice();
	   mix();
	   setcolor(BLACK);
	   for(i=0;i<15;i++)
	   {rectangle(115+i,180+i,130-i,195-i);
	   }
	  }
	  for(x=0;x<40;x+=4)
	   {
	   setcolor(RED);
	   outtextxy(115-x,180-x,"10$");
	   delay(100);
	   cleardevice();
	   mix();
	   setcolor(BLACK);
	   for(i=0;i<15;i++)
	   {rectangle(115+i,180+i,130-i,195-i);
	   }
	   }
	   aim+=10;
	   gotoxy(7,5);
	   printf("%d",aim);
	   getch();
	   break;
  case -12: for(x=0;x<200;x+=20)
	  {line(295,118,l+9*x,k+3*x);
	   y=l+9*x,z=k+3*x;
	   delay(150);
	  }
	  cleardevice();
	  mix();
	  for(x=0;x<200;x+=20)
	  {line(y,z,y-9*x,z+3*x);
	   delay(300);
	  }
	  cleardevice();
	  mix();
	  break;
  default:
	  cleardevice();
	  setbkcolor(BLUE);
	  setfillstyle(3,4);
	  settextstyle(0,0,2);
	  outtextxy(180,250,"OUT OF RANGE ! TRY AGAIN.");
	  getch();
	  cleardevice();
	  settextstyle(0,0,1);
	  setbkcolor(BLACK);
	  mix();
	  grasp();
	  break;

 }
 p++;
 }while(p<3);
}