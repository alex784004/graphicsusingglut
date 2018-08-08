#include<GL/glut.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
#include<math.h>
using namespace std;
void display()
{
	float x1,y1,x2,y2,dx,dy,x,y,m,absm;
	x1=100;
	y1=100;
	x2=140;
	y2=330;
	x=x1;
	y=y1;
	dx=x2-x1;
	dy=y2-y1;
	m=dy/dx;
	absm=fabs(m);
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glBegin(GL_POINTS);
	
	
	printf("%f",absm);
	printf("%f",m);
	if(absm>=1 && dx>0 && dy>0)
	{
		while(y<y2)
		{
			glVertex2f(round(x),round(y));
		y=y+1;
		x=x+(1/m);
		}
	}
	
	
	glEnd();
	glFlush();
}


int main()
{
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGBA);
	glutInitWindowSize(640,640);
	glutCreateWindow("OpenGL");
    glutDisplayFunc(display);
    gluOrtho2D(0,640,0,640);
    glClearColor(0.7,0.5,0.5,0);
    glutMainLoop();
}
