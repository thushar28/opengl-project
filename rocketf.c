#include <stdio.h>
#include <stdlib.h>
#include<GL/glut.h>
#include<string.h>
int i=0,s=0,k=0;
float x,y,z;
//char *str;
void slide1()
{
glClearColor(0.1,0.1,0.1,0);
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,1000,0,1000);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
	char str1[]="MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING";
glColor3f(1,0,0);
glRasterPos2f(200,950);
for(i=0;i<strlen(str1);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }

char str2[]="MOODBIDRI,MANGALORE";
glColor3f(0.5,1.0,1);
glRasterPos2f(335,900);
for(i=0;i<strlen(str2);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
        }

char str3[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
glColor3f(2,5,1);
glRasterPos2f(220,820);
for(i=0;i<strlen(str3);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
        }

char str4[]="COMPUTER GRAPHICS AND VISUALIZATION";
glColor3f(1,0.5,0);
glRasterPos2f(280,770);
for(i=0;i<strlen(str4);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
        }

char str5[]="   MINI PROJECT";
glColor3f(1,1,1);
glRasterPos2f(390,690);
for(i=0;i<strlen(str5);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
        }

char str6[]="   ON";
glColor3f(1,0,0);
glRasterPos2f(440,640);
for(i=0;i<strlen(str6);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
        }

char str16[]="                 ROCKET LAUNCH";
glColor3f(1,1,0);
glRasterPos2f(320,580);
for(i=0;i<strlen(str16);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str16[i]);
        }

char str7[]="TEAM MEMBERS:";
glColor3f(1,0,0);
glRasterPos2f(0,400);
for(i=0;i<strlen(str7);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
        }

char str8[]="THILOTH B SHETTY 4MT19CS171";
glColor3f(1.0,1.0,1);
glRasterPos2f(0,350);
for(i=0;i<strlen(str8);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }

char str9[]="THUSHAR S RAO 4MT19CS173";
glColor3f(1.0,1.0,1);
glRasterPos2f(0,300);
for(i=0;i<strlen(str9);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[i]);
        }

char str10[]="6th SEM";
glColor3f(0,1,1);
glRasterPos2f(0,250);
for(i=0;i<strlen(str10);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[i]);
        }

char str11[]="PROJECT GUIDE:";
glColor3f(1,0,0);
glRasterPos2f(810,400);
for(i=0;i<strlen(str11);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[i]);
        }

char str12[]="AISHWARYA M BHAT";
glColor3f(2,0.5,1);
glRasterPos2f(810,350);
for(i=0;i<strlen(str12);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[i]);
        }
   
    char str13[]="SUNITHA N V";
glColor3f(2,0.5,1);
glRasterPos2f(810,300);
for(i=0;i<strlen(str13);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[i]);
        }


char str14[]="DEPT OF CSE";
glColor3f(0,1,1);
glRasterPos2f(810,250);
for(i=0;i<strlen(str14);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[i]);
        }

char str15[]="              PRESS ENTER";
glColor3f(0,1,0);
glRasterPos2f(350,30);
for(i=0;i<strlen(str15);i++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str15[i]);
        }
glEnd();
glFlush();
}
void rstand()
{
	glBegin(GL_POLYGON);//grey stand
	glColor3f(0.6 ,0.6 ,0.6);
	glVertex2i(370,850);
	glVertex2i(370,90);
	glVertex2i(300,90);
	glVertex2i(300,850);
	glEnd();
	glBegin(GL_POLYGON);//black base
	glColor3f(0.0,0.0,0.0);
	glVertex2i(270,90);
	glVertex2i(800,90);
	glVertex2i(800,10);
	glVertex2i(270,10);
	glEnd();
	glBegin(GL_POLYGON);//stand black line-1
	glColor3f(0.0 ,0.0 ,0.0);
	glVertex2i(370,850);
	glVertex2i(300,750);
	glVertex2i(300,730);
	glVertex2i(370,830);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0 ,0.0 ,0.0);//black line 2
	glVertex2i(300,730);
	glVertex2i(370,650);
	glVertex2i(370,630);
	glVertex2i(300,710);
	glEnd();
	glBegin(GL_POLYGON);//stand black line-3
	glColor3f(0.0 ,0.0 ,0.0);
	glVertex2i(370,650);
	glVertex2i(300,550);
	glVertex2i(300,530);
	glVertex2i(370,630);
	glEnd();
	glBegin(GL_POLYGON);//l-4
	glColor3f(0.0 ,0.0 ,0.0);
	glVertex2i(300,550);
	glVertex2i(370,450);
	glVertex2i(370,430);
	glVertex2i(300,530);
	glEnd();
	glBegin(GL_POLYGON);//stand black line-5
	glColor3f(0.0 ,0.0 ,0.0);
	glVertex2i(370,450);
	glVertex2i(300,350);
	glVertex2i(300,330);
	glVertex2i(370,430);
	glEnd();
	glBegin(GL_POLYGON);//l-4
	glColor3f(0.0 ,0.0 ,0.0);
	glVertex2i(300,350);
	glVertex2i(370,250);
	glVertex2i(370,230);
	glVertex2i(300,330);
	glEnd();
	glBegin(GL_POLYGON);//stand black line-5
	glColor3f(0.0 ,0.0 ,0.0);
	glVertex2i(370,250);
	glVertex2i(300,150);
	glVertex2i(300,130);
	glVertex2i(370,230);
	glEnd();
	glBegin(GL_POLYGON);//l-6
	glColor3f(0.0 ,0.0 ,0.0);
	glVertex2i(300,150);
	glVertex2i(370,50);
	glVertex2i(370,30);
	glVertex2i(300,130);
	glEnd();
}
void rocket()
{
	int f;
	glClearColor(0.5,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
	glMatrixMode(GL_MODELVIEW);
	glBegin(GL_POLYGON);
	glColor3f(1,0.5,0);
	glVertex2i(500,800);
	glVertex2i(450,650);
	glVertex2i(550,650);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(450,650);
	glVertex2i(550,650);
	glVertex2i(550,470);
	glVertex2i(450,470);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.2);
	glVertex2i(450,470);
	glVertex2i(550,470);
	glVertex2i(550,120);
	glVertex2i(450,120);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.1,0.1);
	glVertex2i(519,400);
	glVertex2i(490,400);
	glVertex2i(490,120);
	glVertex2i(519,120);
	glEnd();
	glBegin(GL_POLYGON);	
	glColor3f(1.0,0.0,0.0);
	glVertex2i(519,400);
	glVertex2i(490,400);
	glVertex2i(505,450);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.1,0.1);
	glVertex2i(550,400);
	glVertex2i(550,120);
	glVertex2i(578,120);
	glVertex2i(578,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2i(550,450);
	glVertex2i(578,400);
	glVertex2i(550,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.1,0.1);
	glVertex2i(450,400);
	glVertex2i(450,120);
	glVertex2i(422,120);
	glVertex2i(422,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2i(450,450);
	glVertex2i(422,400);
	glVertex2i(450,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex2i(450,120);
	glVertex2i(550,120);
	glVertex2i(570,90);
	glVertex2i(430,90);
	glEnd();
	rstand();
	char a[]="             PRESS L or l to Launch";
	glColor3f(0,1,0);
	glRasterPos2f(350,30);
	for(f=0;f<strlen(a);f++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,a[f]);
        }		
	glFlush();
}void fire()
{

	glBegin(GL_POLYGON);
	glColor3ub(255, 119, 0);
	glVertex2i(430,90);
	glVertex2i(410,30);
	glVertex2i(500,1);
	glVertex2i(590,30);
	glVertex2i(570,90);
	glVertex2i(570,60);
	glVertex2i(500,40);
	glVertex2i(430,60);
	glVertex2i(430,90);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(255,183,11);
	glVertex2i(430,90);
	glVertex2i(430,60);
	glVertex2i(500,40);
	glVertex2i(570,60);
	glVertex2i(570,90);
	glEnd();
}
void rocket1()
{
	int g;
	if(y<900)
	{	
		y=y+0.8;
		glutPostRedisplay();
	}
	//glutPostRedisplay();
	glClearColor(0.5,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
	glScalef(0.5,0.5,0.0);
	//glTranslatef(300,150,0);
	glMatrixMode(GL_MODELVIEW);
glPushMatrix();
	glTranslatef(500,20+y,0.0);
	glBegin(GL_POLYGON);
	glColor3f(1,0.5,0);
	glVertex2f(500,800);
	glVertex2f(450,650);
	glVertex2f(550,650);
	glEnd();	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(450,650);
	glVertex2i(550,650);
	glVertex2i(550,470);
	glVertex2i(450,470);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.2);
	glVertex2i(450,470);
	glVertex2i(550,470);
	glVertex2i(550,120);
	glVertex2i(450,120);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.1,0.1);
	glVertex2i(519,400);
	glVertex2i(490,400);
	glVertex2i(490,120);
	glVertex2i(519,120);
	glEnd();
	glBegin(GL_POLYGON);	
	glColor3f(1.0,0.0,0.0);
	glVertex2i(519,400);
	glVertex2i(490,400);
	glVertex2i(505,450);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.1,0.1);
	glVertex2i(550,400);
	glVertex2i(550,120);
	glVertex2i(578,120);
	glVertex2i(578,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2i(550,450);
	glVertex2i(578,400);
	glVertex2i(550,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.1,0.1);
	glVertex2i(450,400);
	glVertex2i(450,120);
	glVertex2i(422,120);
	glVertex2i(422,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2i(450,450);
	glVertex2i(422,400);
	glVertex2i(450,400);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex2i(450,120);
	glVertex2i(550,120);
	glVertex2i(570,90);
	glVertex2i(430,90);
	glEnd();
	fire();
glPopMatrix();
	glFlush();
}
void watch()
{
	glClearColor(0.0,0.0,0.0,0.0);
 	glClear(GL_COLOR_BUFFER_BIT);
  	glMatrixMode(GL_PROJECTION);
  	glLoadIdentity();
  	gluOrtho2D(0,1000,0,1000);
  	glScalef(1.2,1.2,0);
	int t=0;
	char s1='5';
	char s2='4';
	char s3='3';
	char s4='2';
	char s5='1';
	char s6='0';
	glColor3f(1,0,0);
	glPushMatrix();
	glTranslatef(350,350,0);
	glutStrokeCharacter(GLUT_STROKE_ROMAN,s1);
	glPopMatrix();
	glFlush();
	for(t=0;t<=8000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(350,350,0);
	glutStrokeCharacter(GLUT_STROKE_ROMAN,s2);
	glPopMatrix();
	glFlush();
	for(t=0;t<=8000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(350,350,0);
	glutStrokeCharacter(GLUT_STROKE_ROMAN,s3);
	glPopMatrix();
	glFlush();
	for(t=0;t<=8000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(350,350,0);
	glutStrokeCharacter(GLUT_STROKE_ROMAN,s4);
	glPopMatrix();
	glFlush();
	for(t=0;t<=8000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(350,350,0);
	glutStrokeCharacter(GLUT_STROKE_ROMAN,s5);
	glPopMatrix();
	glFlush();
	for(t=0;t<=8000;t++)
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(350,350,0);
	glutStrokeCharacter(GLUT_STROKE_ROMAN,s6);
	glPopMatrix();
	glFlush();
	//glutTimerFunc(1000,rocket1,0);
}
//void timer0(int v)
//{	v=3;
//	if(y<900)
//	{
//		y=y+100;
//	}
 //   glutTimerFunc(10 ,timer0,0);
//	glutPostRedisplay();
//}
void keys(unsigned char key,int x,int y)
{
	if(key==13)
	{
		s=1;
		glutPostRedisplay();
		
	}
	else if(key=='L'|| key=='l')
	{
		s=2;
		glutPostRedisplay();
	}
		//for(k=0;k<=10000;k++)
		//{
		//	s=3;
		//}
		//glutTimerFunc(1000,rocket1,3);
	//else if(key=='y')
	//{
	//	s=3;
	//	glutPostRedisplay();
	//}
	
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	if(s==0)
	{
		slide1();
		//glutPostRedisplay();
		
	}else if(s==1)
	{
		rocket();
		//glutPostRedisplay();
	}
	else if(s==2)
	{
		watch();
		for(k=0;k<=100000000;k++)
		{
			s=3;
			glutPostRedisplay();	
		}
		//glutPostRedisplay();
	}
		//glutTimerFunc(1000,rocket1,0);
		//if(v==3)
		//{
		//	glutTimerFunc(10,timer0,0);
	//	}
		//timer0(3);
		//glutTimerFunc(10,timer0,0);
		//glutPostRedisplay();
	//}
	if(s==3)
	{
		glutTimerFunc(15,rocket1,0);
		//glutPostRedisplay();
	}////else if(v==3)
	////{
		//glutTimerFunc(10,timer0,0);
//	}
	//else if()
	//{
	//	r();
	//}
	
}
int main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(55,0);
	glutInitWindowSize(1300,1300);
	glutCreateWindow("Rocket Launch");
	glutDisplayFunc(display);
	glutKeyboardFunc(keys);
	glutMainLoop();
	
}			
