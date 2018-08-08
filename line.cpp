#include<GL/glut.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;
void display()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glBegin(GL_POINTS);
	glVertex2f(100,100);
	glEnd();
	glFlush();
}
int main()
{
/*	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGBA);
	glutInitWindowSize(640,640);
	glutCreateWindow("OpenGL");
    glutDisplayFunc(display);
    gluOrtho2D(0,640,0,640);
    glClearColor(0.7,0.5,0.5,0);
    glutMainLoop();
    */
	int x1,x2,y1,y2;
	cin>>x1>>x2;
	cin>>y1>>y2;
	plot(round(x1),round(y1));
	glBegin(GL_POINTS);
	glVertex2f(100,100);
	glEnd();
	
	
	return 0;
}

