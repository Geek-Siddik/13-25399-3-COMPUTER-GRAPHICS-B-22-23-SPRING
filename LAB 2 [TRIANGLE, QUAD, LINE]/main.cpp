#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 0, 0);
glPointSize(5.0);

glBegin(GL_LINES);
glVertex2i (0,240);
glVertex2i (640,240);
glVertex2i (320,0);
glVertex2i (320,480);
glEnd();

glBegin(GL_QUADS);
glVertex2i (330,280);
glVertex2i (580,280);
glVertex2i (580,470);
glVertex2i (330,470);
glEnd();

glBegin(GL_QUADS);
glVertex2i (370,250);
glColor3ub (0, 255, 0);
glVertex2i (630,250);
glColor3ub (0, 0, 255);
glVertex2i (630,440);
glVertex2i (370,440);
glColor3ub (255, 0, 0);
glEnd();

glBegin(GL_LINES);
glVertex2i (50,450);
glVertex2i (240,450);
glVertex2i (50,310);
glVertex2i (240,310);
glVertex2i (50,380);
glVertex2i (210,380);
glVertex2i (50,450);
glVertex2i (50,310);
glEnd();

glBegin(GL_LINES);
glVertex2i (380,50);
glVertex2i (380,190);
glVertex2i (590,50);
glVertex2i (590,190);
glVertex2i (380,120);
glVertex2i (590,120);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(30, 30);
glColor3ub (0, 255, 0);
glVertex2i(290, 30);
glColor3ub (0, 0, 255);
glVertex2i(160, 210);
glColor3ub (255, 0, 0);
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
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
