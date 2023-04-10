#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 0, 0);
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(150, 50);
glColor3ub (0, 255, 0);
glVertex2i(110, 130);
glColor3ub (0, 0, 255);
glVertex2i(250, 130);
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
