#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void siddikPCDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 0, 0);
glPointSize(5.0);

glBegin(GL_QUADS);
glColor3ub (0,150,57);
glVertex2i (0,15);
glVertex2i (640,15);
glVertex2i (640,165);
glVertex2i (0,165);
glEnd();

glBegin(GL_QUADS);
glColor3ub (255,209,0);
glVertex2i (0,165);
glVertex2i (640,165);
glVertex2i (640,315);
glVertex2i (0,315);
glEnd();

glBegin(GL_QUADS);
glColor3ub (239,51,64);
glVertex2i (0,315);
glVertex2i (640,315);
glVertex2i (640,465);
glVertex2i (0,465);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,0,0);
glVertex2i(290,240);
glVertex2i(350,240);
glVertex2i(320,315);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,0,0);
glVertex2i(240,255);
glVertex2i(380,165);
glVertex2i(340,255);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,0,0);
glVertex2i(260,165);
glVertex2i(400,255);
glVertex2i(300,255);

glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("ABU BAKAR SIDDIK 13-25399-3 GHANA FLAG");
glutDisplayFunc(siddikPCDisplay);
myInit ();
glutMainLoop();
}
