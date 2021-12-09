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
win_width = 1000;win_height = 700;//记得改为学校
initgraph(win_width,win_height,0);
setcaption("刑            罚            工            具");
setinitmode(0, 0, 0);

setcolor(WHITE);//线颜色 
line(600,0,600,700); 
line(601,0,601,700); 
line(602,0,602,700); //竖线 
line(602,498,1000,498); 
line(602,499,1000,499); 
line(602,500,1000,500); //横线 
setcolor(EGERGB(109,109,109));
rectangle(630, 390, 780, 450);

rectangle(820, 390, 970, 450);
setbkmode(TRANSPARENT);
setfont(40,0,"楷体");

xyprintf(856,400,"结束");
xyprintf(666,400,"开始");
setbkcolor(RGB(230,230,230));

    
	setfont(20,0,"楷体");
    setcolor(BLACK); 
	outtextrect
	(620, 580,2000,2000,
	 "   由 程 江 晸 提供技术指导\n   由 张 泽 昊 提供学生列表\n   由 杨宇锦浩 设计图形界面\n   (老师你不能提问这里!)\n版本号:v1.0.1(持续更新)");
	setfont(19,0,"微软雅黑");
	outtextrect(640, 450,2000,2000,""); 
	setfont(50,0,"幼圆");
	setfontbkcolor(WHITE); 
	setbkmode(OPAQUE);
	xyprintf(603,520,"%02d年|%02d月|%02d号",p->tm_year+1900,p->tm_mon+1,p->tm_mday);
  setfont(90,0,"幼圆");
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
	    setfont(20,0,"楷体");
        xyprintf(620,20,"小伙:'今天%02d月几号?'",p->tm_mon+1);
        Sleep (500);
	    xyprintf(620,80,"学生:'%02d月%d号!'",p->tm_mon+1,p->tm_mday);
        Sleep (500);
	    xyprintf(620,140,"小伙:'噢,那就%d号.'",p->tm_mday);
        srand((int)time(0));
	    sj=rand()%100;} 
	if (sj>5) 
	        {
	    setfont(90,0,"幼圆");
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
		case 1:xyprintf(125,270,"卢 布 谷");break; 
	    case 2:xyprintf(125,270,"张 泽 昊");break;
		case 3:xyprintf(125,270,"魏 启 航");break;
		case 4:xyprintf(125,270,"魏 海 璇");break;
		case 5:xyprintf(125,270,"陈 思 宇");break;
		case 6:xyprintf(125,270,"解 轶 琛");break;
		case 7:xyprintf(125,270,"赵 天 俊");break;
		case 8:xyprintf(125,270,"牛 欣 玮");break;
		case 9:xyprintf(125,270,"吕 启 超");break;
		case 10:xyprintf(125,270,"李 晓 东");break;
		case 11:xyprintf(125,270,"魏 涵 韵");break;
		case 12:xyprintf(125,270,"任 家 玉");break;
		case 14:xyprintf(125,270,"张 思 博");break;
		case 15:xyprintf(125,270,"严 昊 天");break;
		case 16:xyprintf(125,270,"杨宇锦浩");break;
		case 17:xyprintf(125,270,"陈 泽 阳");break;
		case 18:xyprintf(125,270,"任 钊 涵");break;
		case 19:xyprintf(125,270,"何 佳 瑞");break;
		case 20:xyprintf(125,270,"唐 琰 迪");break;
		case 21:xyprintf(125,270,"李 萌 蕾");break;
		case 22:xyprintf(125,270,"王 梦 瑶");break;
		case 23:xyprintf(125,270,"尹 泽 轩");break;
		case 24:xyprintf(125,270,"杜 金 泽");break;
		case 25:xyprintf(125,270,"车 佰 迪");break;
		case 26:xyprintf(125,270,"邹 江 新");break;
		case 27:xyprintf(125,270,"郭    蒙");break;
		case 28:xyprintf(125,270,"安 依 铭");break;
		case 29:xyprintf(125,270,"刘 思 源");break;
		case 30:xyprintf(125,270,"范 云 迪");break;
		case 31:xyprintf(125,270,"程 江 晸");break;
		case 32:xyprintf(125,270,"周 嘉 乐");break;
		case 33:xyprintf(125,270,"刘 文 泽");break;
		case 34:xyprintf(125,270,"柳 林 蔚");break;
		case 35:xyprintf(125,270,"贾 址 源");break;
		case 36:xyprintf(125,270,"侯 杰 特");break;
		case 37:xyprintf(125,270,"路 炳 哲");break;
		case 38:xyprintf(125,270,"张 晨 雨");break;
		case 39:xyprintf(125,270,"任 勋 鹏");break;
		case 40:xyprintf(125,270,"曲    歌");break;
		case 41:xyprintf(125,270,"李 研 睿");break;
		case 42:xyprintf(125,270,"拜 裕 润");break;
		case 43:xyprintf(125,270,"李 晨 阳");break;
		case 44:xyprintf(125,270,"张 婧 璇");break;
		case 45:xyprintf(125,270,"张 艺 馨");break;
		case 46:xyprintf(125,270,"周 佳 利");break;
		case 47:xyprintf(125,270,"罗    璇");break;
		case 48:xyprintf(125,270,"李 柯 颐");break;
		case 49:xyprintf(125,270,"陈 子 今");break;
		case 50:xyprintf(125,270,"周 凡 杰");break;
		case 51:xyprintf(125,270,"郑 博 文");break;
		case 52:xyprintf(125,270,"宁 王 俊");break;
		case 53:xyprintf(125,270,"李 俊 杰");break;
		case 54:xyprintf(125,270,"王 煜 泽");break;
		case 55:xyprintf(125,270,"李 璟 岩");break;
		case 56:xyprintf(125,270,"宋 一 凡");break;
		case 57:xyprintf(125,270,"王 欣 盟");break;
		case 58:xyprintf(125,270,"赵 天 昊");break;
		        }
	        }
        } 
	}    
	system("pause");
}
