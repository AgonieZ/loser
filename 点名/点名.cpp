#include <graphics.h>
#include<time.h> 
#include <iostream>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h> 
#include<wchar.h>
#include <string>
#include <cstdlib>
#include <math.h>
using namespace std;

int main ()
{
time_t nowtime;
	struct tm* p;
	time(&nowtime);
	p = localtime(&nowtime);

int sj,a,b,c,d,z;
    srand((int)p->tm_sec);
	sj=rand()%100;
	short win_width,win_height;
win_width = 1000;win_height = 700;//�ǵø�ΪѧУ
initgraph(win_width,win_height,0);
setcaption("��            ��            ��            ��");
setinitmode(0, 0, 0);

setcolor(WHITE);//����ɫ 
line(600,0,600,700); 
line(601,0,601,700); 
line(602,0,602,700); //���� 
line(602,498,1000,498); 
line(602,499,1000,499); 
line(602,500,1000,500); //���� 
setcolor(EGERGB(109,109,109));
rectangle(630, 390, 780, 450);

rectangle(820, 390, 970, 450);
setbkmode(TRANSPARENT);
setfont(40,0,"����");

xyprintf(856,400,"����");
xyprintf(666,400,"��ʼ");
setbkcolor(RGB(230,230,230));

    
	setfont(20,0,"����");
    setcolor(BLACK); 
	outtextrect
	(620, 580,2000,2000,
	 "   �� �� �� �� �ṩ����ָ��\n   �� �� �� � �ṩѧ���б�\n   �� ������� ���ͼ�ν���\n   (��ʦ�㲻����������!)\n�汾��:v1.0.1(��������)");
	setfont(19,0,"΢���ź�");
	outtextrect(640, 450,2000,2000,""); 
	setfont(50,0,"��Բ");
	setfontbkcolor(WHITE); 
	setbkmode(OPAQUE);
	xyprintf(603,520,"%02d��|%02d��|%02d��",p->tm_year+1900,p->tm_mon+1,p->tm_mday);
  setfont(90,0,"��Բ");
  setbkmode(TRANSPARENT);
  for ( ; is_run(); delay_fps(60))
    {
    mouse_msg msg = {0};
while (mousemsg()) 
{msg = getmouse();}
	if ( msg.is_down() && (820 <= msg.x) && (msg.x < 970) && (390 <= msg.y && (msg.y < 450)) )
	closegraph();
	if ( msg.is_down() && (630 <= msg.x) && (msg.x < 780) && (390 <= msg.y && (msg.y < 450)) ) 
    {
	
	if (sj<=5)
	        { 
	    setfont(20,0,"����");
        xyprintf(620,20,"С��:'����%02d�¼���?'",p->tm_mon+1);
        Sleep (500);
	    xyprintf(620,80,"ѧ��:'%02d��%d��!'",p->tm_mon+1,p->tm_mday);
        Sleep (500);
	    xyprintf(620,140,"С��:'��,�Ǿ�%d��.'",p->tm_mday);
        srand((int)time(0));
	    sj=rand()%100;} 
	if (sj>5) 
	        {
	    setfont(90,0,"��Բ");
	    setbkmode(OPAQUE);
	    a=rand()%29;
		b=rand()%19;
	    c=rand()%31;
		d=rand()%97;
		z=a+b+c+d;
		z=z%58;
		printf("%d\n",z);
         
		switch(z+=1)                        
		        {
		case 1:xyprintf(125,270,"¬ �� ��");break; 
	    case 2:xyprintf(125,270,"�� �� �");break;
		case 3:xyprintf(125,270,"κ �� ��");break;
		case 4:xyprintf(125,270,"κ �� �");break;
		case 5:xyprintf(125,270,"�� ˼ ��");break;
		case 6:xyprintf(125,270,"�� �� �");break;
		case 7:xyprintf(125,270,"�� �� ��");break;
		case 8:xyprintf(125,270,"ţ �� ��");break;
		case 9:xyprintf(125,270,"�� �� ��");break;
		case 10:xyprintf(125,270,"�� �� ��");break;
		case 11:xyprintf(125,270,"κ �� ��");break;
		case 12:xyprintf(125,270,"�� �� ��");break;
		case 14:xyprintf(125,270,"�� ˼ ��");break;
		case 15:xyprintf(125,270,"�� � ��");break;
		case 16:xyprintf(125,270,"�������");break;
		case 17:xyprintf(125,270,"�� �� ��");break;
		case 18:xyprintf(125,270,"�� �� ��");break;
		case 19:xyprintf(125,270,"�� �� ��");break;
		case 20:xyprintf(125,270,"�� �� ��");break;
		case 21:xyprintf(125,270,"�� �� ��");break;
		case 22:xyprintf(125,270,"�� �� ��");break;
		case 23:xyprintf(125,270,"�� �� ��");break;
		case 24:xyprintf(125,270,"�� �� ��");break;
		case 25:xyprintf(125,270,"�� �� ��");break;
		case 26:xyprintf(125,270,"�� �� ��");break;
		case 27:xyprintf(125,270,"��    ��");break;
		case 28:xyprintf(125,270,"�� �� ��");break;
		case 29:xyprintf(125,270,"�� ˼ Դ");break;
		case 30:xyprintf(125,270,"�� �� ��");break;
		case 31:xyprintf(125,270,"�� �� ��");break;
		case 32:xyprintf(125,270,"�� �� ��");break;
		case 33:xyprintf(125,270,"�� �� ��");break;
		case 34:xyprintf(125,270,"�� �� ε");break;
		case 35:xyprintf(125,270,"�� ַ Դ");break;
		case 36:xyprintf(125,270,"�� �� ��");break;
		case 37:xyprintf(125,270,"· �� ��");break;
		case 38:xyprintf(125,270,"�� �� ��");break;
		case 39:xyprintf(125,270,"�� ѫ ��");break;
		case 40:xyprintf(125,270,"��    ��");break;
		case 41:xyprintf(125,270,"�� �� �");break;
		case 42:xyprintf(125,270,"�� ԣ ��");break;
		case 43:xyprintf(125,270,"�� �� ��");break;
		case 44:xyprintf(125,270,"�� � �");break;
		case 45:xyprintf(125,270,"�� �� ܰ");break;
		case 46:xyprintf(125,270,"�� �� ��");break;
		case 47:xyprintf(125,270,"��    �");break;
		case 48:xyprintf(125,270,"�� �� ��");break;
		case 49:xyprintf(125,270,"�� �� ��");break;
		case 50:xyprintf(125,270,"�� �� ��");break;
		case 51:xyprintf(125,270,"֣ �� ��");break;
		case 52:xyprintf(125,270,"�� �� ��");break;
		case 53:xyprintf(125,270,"�� �� ��");break;
		case 54:xyprintf(125,270,"�� �� ��");break;
		case 55:xyprintf(125,270,"�� �Z ��");break;
		case 56:xyprintf(125,270,"�� һ ��");break;
		case 57:xyprintf(125,270,"�� �� ��");break;
		case 58:xyprintf(125,270,"�� �� �");break;
		        }
	        }
        } 
	}    
	system("pause");
}
