#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 0, 0);
glPointSize(5.0);

//1
glBegin(GL_QUADS);

glVertex2i (80,10);
glVertex2i (90,10);
glVertex2i (90,20);
glVertex2i (80,20);

glVertex2i (90,10);
glVertex2i (100,10);
glVertex2i (100,20);
glVertex2i (90,20);

glVertex2i (100,10);
glVertex2i (110,10);
glVertex2i (110,20);
glVertex2i (100,20);

glVertex2i (110,10);
glVertex2i (120,10);
glVertex2i (120,20);
glVertex2i (100,20);

glVertex2i (120,10);
glVertex2i (130,10);
glVertex2i (130,20);
glVertex2i (120,20);

glVertex2i (130,10);
glVertex2i (140,10);
glVertex2i (140,20);
glVertex2i (130,20);

glVertex2i (140,10);
glVertex2i (150,10);
glVertex2i (150,20);
glVertex2i (140,20);

glVertex2i (150,10);
glVertex2i (160,10);
glVertex2i (160,20);
glVertex2i (150,20);

glVertex2i (160,10);
glVertex2i (170,10);
glVertex2i (170,20);
glVertex2i (160,20);

glVertex2i (170,10);
glVertex2i (180,10);
glVertex2i (180,20);
glVertex2i (170,20);

glVertex2i (180,10);
glVertex2i (190,10);
glVertex2i (190,20);
glVertex2i (180,20);

glVertex2i (190,10);
glVertex2i (200,10);
glVertex2i (200,20);
glVertex2i (190,20);

glVertex2i (200,10);
glVertex2i (210,10);
glVertex2i (210,20);
glVertex2i (200,20);

glVertex2i (210,10);
glVertex2i (220,10);
glVertex2i (220,20);
glVertex2i (210,20);

glVertex2i (220,10);
glVertex2i (230,10);
glVertex2i (230,20);
glVertex2i (220,20);

glVertex2i (230,10);
glVertex2i (240,10);
glVertex2i (240,20);
glVertex2i (230,20);

glVertex2i (240,10);
glVertex2i (250,10);
glVertex2i (250,20);
glVertex2i (240,20);

glEnd();


//2
glBegin(GL_QUADS);

glVertex2i (70,20);
glVertex2i (80,20);
glVertex2i (80,30);
glVertex2i (70,30);

glColor3ub (255, 255, 0);

glVertex2i (80,20);
glVertex2i (90,20);
glVertex2i (90,30);
glVertex2i (80,30);

glVertex2i (90,20);
glVertex2i (100,20);
glVertex2i (100,30);
glVertex2i (90,30);

glVertex2i (100,20);
glVertex2i (110,20);
glVertex2i (110,30);
glVertex2i (100,30);

glVertex2i (110,20);
glVertex2i (120,20);
glVertex2i (120,30);
glVertex2i (110,30);

glVertex2i (120,20);
glVertex2i (130,20);
glVertex2i (130,30);
glVertex2i (120,30);

glVertex2i (130,20);
glVertex2i (140,20);
glVertex2i (140,30);
glVertex2i (130,30);

glVertex2i (140,20);
glVertex2i (150,20);
glVertex2i (150,30);
glVertex2i (140,30);

glVertex2i (150,20);
glVertex2i (160,20);
glVertex2i (160,30);
glVertex2i (150,30);

glVertex2i (160,20);
glVertex2i (170,20);
glVertex2i (170,30);
glVertex2i (160,30);

glVertex2i (170,20);
glVertex2i (180,20);
glVertex2i (180,30);
glVertex2i (170,30);

glVertex2i (180,20);
glVertex2i (190,20);
glVertex2i (190,30);
glVertex2i (180,30);

glVertex2i (190,20);
glVertex2i (200,20);
glVertex2i (200,30);
glVertex2i (190,30);

glVertex2i (200,20);
glVertex2i (210,20);
glVertex2i (210,30);
glVertex2i (200,30);

glVertex2i (210,20);
glVertex2i (220,20);
glVertex2i (220,30);
glVertex2i (210,30);

glVertex2i (220,20);
glVertex2i (230,20);
glVertex2i (230,30);
glVertex2i (220,30);

glVertex2i (230,20);
glVertex2i (240,20);
glVertex2i (240,30);
glVertex2i (230,30);

glVertex2i (240,20);
glVertex2i (250,20);
glVertex2i (250,30);
glVertex2i (240,30);

glColor3ub (0, 0, 0);

glVertex2i (250,20);
glVertex2i (260,20);
glVertex2i (260,30);
glVertex2i (250,30);

glEnd();

//3
glBegin(GL_QUADS);

glVertex2i (60,30);
glVertex2i (70,30);
glVertex2i (70,40);
glVertex2i (60,40);

glColor3ub (255, 255, 0);

glVertex2i (70,30);
glVertex2i (80,30);
glVertex2i (80,40);
glVertex2i (70,40);

glVertex2i (80,30);
glVertex2i (90,30);
glVertex2i (90,40);
glVertex2i (80,40);

glVertex2i (90,30);
glVertex2i (100,30);
glVertex2i (100,40);
glVertex2i (90,40);

glColor3ub (0, 0, 0);

glVertex2i (100,30);
glVertex2i (110,30);
glVertex2i (110,40);
glVertex2i (100,40);

glColor3ub (255, 255, 0);

glVertex2i (110,30);
glVertex2i (120,30);
glVertex2i (120,40);
glVertex2i (110,40);

glVertex2i (120,30);
glVertex2i (130,30);
glVertex2i (130,40);
glVertex2i (120,40);

glVertex2i (130,30);
glVertex2i (140,30);
glVertex2i (140,40);
glVertex2i (130,40);

glVertex2i (140,30);
glVertex2i (150,30);
glVertex2i (150,40);
glVertex2i (140,40);

glVertex2i (150,30);
glVertex2i (160,30);
glVertex2i (160,40);
glVertex2i (150,40);

glColor3ub (0, 0, 0);

glVertex2i (160,30);
glVertex2i (170,30);
glVertex2i (170,40);
glVertex2i (160,40);

glColor3ub (255, 255, 0);

glVertex2i (170,30);
glVertex2i (180,30);
glVertex2i (180,40);
glVertex2i (170,40);

glVertex2i (180,30);
glVertex2i (190,30);
glVertex2i (190,40);
glVertex2i (180,40);

glVertex2i (190,30);
glVertex2i (200,30);
glVertex2i (200,40);
glVertex2i (190,40);

glVertex2i (200,30);
glVertex2i (210,30);
glVertex2i (210,40);
glVertex2i (200,40);

glColor3ub (255, 255, 0);

glVertex2i (210,30);
glVertex2i (220,30);
glVertex2i (220,40);
glVertex2i (210,40);

glColor3ub (0, 0, 0);

glVertex2i (220,30);
glVertex2i (230,30);
glVertex2i (230,40);
glVertex2i (220,40);

glColor3ub (255, 255, 0);

glVertex2i (230,30);
glVertex2i (240,30);
glVertex2i (240,40);
glVertex2i (230,40);

glVertex2i (240,30);
glVertex2i (250,30);
glVertex2i (250,40);
glVertex2i (240,40);

glVertex2i (250,30);
glVertex2i (260,30);
glVertex2i (260,40);
glVertex2i (250,40);

glColor3ub (0, 0, 0);

glVertex2i (260,30);
glVertex2i (270,30);
glVertex2i (270,40);
glVertex2i (260,40);

glEnd();


//4
glBegin(GL_QUADS);

glVertex2i (50,40);
glVertex2i (60,40);
glVertex2i (60,50);
glVertex2i (50,50);

glColor3ub (255, 255, 0);

glVertex2i (60,40);
glVertex2i (70,40);
glVertex2i (70,50);
glVertex2i (60,50);

glVertex2i (70,40);
glVertex2i (80,40);
glVertex2i (80,50);
glVertex2i (70,50);

glColor3ub (0, 0, 0);

glVertex2i (80,40);
glVertex2i (90,40);
glVertex2i (90,50);
glVertex2i (80,50);

glVertex2i (90,40);
glVertex2i (100,40);
glVertex2i (100,50);
glVertex2i (90,50);

glVertex2i (100,40);
glVertex2i (110,40);
glVertex2i (110,50);
glVertex2i (100,50);

glColor3ub (255, 255, 0);

glVertex2i (110,40);
glVertex2i (120,40);
glVertex2i (120,50);
glVertex2i (110,50);

glVertex2i (120,40);
glVertex2i (130,40);
glVertex2i (130,50);
glVertex2i (120,50);

glVertex2i (130,40);
glVertex2i (140,40);
glVertex2i (140,50);
glVertex2i (130,50);

glVertex2i (140,40);
glVertex2i (150,40);
glVertex2i (150,50);
glVertex2i (140,50);

glColor3ub (0, 0, 0);

glVertex2i (150,40);
glVertex2i (160,40);
glVertex2i (160,50);
glVertex2i (150,50);

glVertex2i (160,40);
glVertex2i (170,40);
glVertex2i (170,50);
glVertex2i (160,50);

glVertex2i (170,40);
glVertex2i (180,40);
glVertex2i (180,50);
glVertex2i (170,50);

glColor3ub (255, 255, 0);

glVertex2i (180,40);
glVertex2i (190,40);
glVertex2i (190,50);
glVertex2i (180,50);

glVertex2i (190,40);
glVertex2i (200,40);
glVertex2i (200,50);
glVertex2i (190,50);

glVertex2i (200,40);
glVertex2i (210,40);
glVertex2i (210,50);
glVertex2i (200,50);

glColor3ub (255, 255, 0);

glVertex2i (210,40);
glVertex2i (220,40);
glVertex2i (220,50);
glVertex2i (210,50);

glColor3ub (0, 0, 0);

glVertex2i (220,40);
glVertex2i (230,40);
glVertex2i (230,50);
glVertex2i (220,50);

glVertex2i (230,40);
glVertex2i (240,40);
glVertex2i (240,50);
glVertex2i (230,50);

glVertex2i (240,40);
glVertex2i (250,40);
glVertex2i (250,50);
glVertex2i (240,50);

glColor3ub (255, 255, 0);

glVertex2i (250,40);
glVertex2i (260,40);
glVertex2i (260,50);
glVertex2i (250,50);

glVertex2i (260,40);
glVertex2i (270,40);
glVertex2i (270,50);
glVertex2i (260,50);

glColor3ub (0, 0, 0);

glVertex2i (270,40);
glVertex2i (280,40);
glVertex2i (280,50);
glVertex2i (270,50);

glEnd();



//5
glBegin(GL_QUADS);

glVertex2i (40,50);
glVertex2i (50,50);
glVertex2i (50,60);
glVertex2i (40,60);

glColor3ub (255, 255, 0);

glVertex2i (50,50);
glVertex2i (60,50);
glVertex2i (60,60);
glVertex2i (50,60);

glVertex2i (60,50);
glVertex2i (70,50);
glVertex2i (70,60);
glVertex2i (60,60);

glColor3ub (0, 0, 0);

glVertex2i (70,50);
glVertex2i (80,50);
glVertex2i (80,60);
glVertex2i (70,60);

glVertex2i (80,50);
glVertex2i (90,50);
glVertex2i (90,60);
glVertex2i (80,60);

glVertex2i (90,50);
glVertex2i (100,50);
glVertex2i (100,60);
glVertex2i (90,60);

glVertex2i (100,50);
glVertex2i (110,50);
glVertex2i (110,60);
glVertex2i (100,60);

glVertex2i (110,50);
glVertex2i (120,50);
glVertex2i (120,60);
glVertex2i (110,60);

glColor3ub (255, 255, 0);

glVertex2i (120,50);
glVertex2i (130,50);
glVertex2i (130,60);
glVertex2i (120,60);

glVertex2i (130,50);
glVertex2i (140,50);
glVertex2i (140,60);
glVertex2i (130,60);

glVertex2i (140,50);
glVertex2i (150,50);
glVertex2i (150,60);
glVertex2i (140,60);

glColor3ub (0, 0, 0);

glVertex2i (150,50);
glVertex2i (160,50);
glVertex2i (160,60);
glVertex2i (150,60);

glVertex2i (160,50);
glVertex2i (170,50);
glVertex2i (170,60);
glVertex2i (160,60);

glVertex2i (170,50);
glVertex2i (180,50);
glVertex2i (180,60);
glVertex2i (170,60);

glColor3ub (255, 255, 0);

glVertex2i (180,50);
glVertex2i (190,50);
glVertex2i (190,60);
glVertex2i (180,60);

glColor3ub (255, 255, 0);

glVertex2i (190,50);
glVertex2i (200,50);
glVertex2i (200,60);
glVertex2i (190,60);

glColor3ub (255, 255, 0);

glVertex2i (200,50);
glVertex2i (210,50);
glVertex2i (210,60);
glVertex2i (200,60);

glColor3ub (0, 0, 0);

glVertex2i (210,50);
glVertex2i (220,50);
glVertex2i (220,60);
glVertex2i (210,60);

glVertex2i (220,50);
glVertex2i (230,50);
glVertex2i (230,60);
glVertex2i (220,60);

glVertex2i (230,50);
glVertex2i (240,50);
glVertex2i (240,60);
glVertex2i (230,60);

glVertex2i (240,50);
glVertex2i (250,50);
glVertex2i (250,60);
glVertex2i (240,60);

glVertex2i (250,50);
glVertex2i (260,50);
glVertex2i (260,60);
glVertex2i (250,60);

glColor3ub (255, 255, 0);

glVertex2i (260,50);
glVertex2i (270,50);
glVertex2i (270,60);
glVertex2i (260,60);

glVertex2i (270,50);
glVertex2i (280,50);
glVertex2i (280,60);
glVertex2i (270,60);

glColor3ub (0, 0, 0);

glVertex2i (280,50);
glVertex2i (290,50);
glVertex2i (290,60);
glVertex2i (280,60);

glEnd();



//6
glBegin(GL_QUADS);

glVertex2i (30,60);
glVertex2i (40,60);
glVertex2i (40,70);
glVertex2i (30,70);

glColor3ub (255, 255, 0);

glVertex2i (40,60);
glVertex2i (50,60);
glVertex2i (50,70);
glVertex2i (40,70);

glVertex2i (50,60);
glVertex2i (60,60);
glVertex2i (60,70);
glVertex2i (50,70);

glColor3ub (0, 0, 0);

glVertex2i (60,60);
glVertex2i (70,60);
glVertex2i (70,70);
glVertex2i (60,70);

glVertex2i (70,60);
glVertex2i (80,60);
glVertex2i (80,70);
glVertex2i (70,70);

glVertex2i (80,60);
glVertex2i (90,60);
glVertex2i (90,70);
glVertex2i (80,70);

glVertex2i (90,60);
glVertex2i (100,60);
glVertex2i (100,70);
glVertex2i (90,70);

glVertex2i (100,60);
glVertex2i (110,60);
glVertex2i (110,70);
glVertex2i (100,70);

glVertex2i (110,60);
glVertex2i (120,60);
glVertex2i (120,70);
glVertex2i (110,70);

glVertex2i (120,60);
glVertex2i (130,60);
glVertex2i (130,70);
glVertex2i (120,70);

glColor3ub (255, 255, 0);

glVertex2i (130,60);
glVertex2i (140,60);
glVertex2i (140,70);
glVertex2i (130,70);

glColor3ub (0, 0, 0);

glVertex2i (140,60);
glVertex2i (150,60);
glVertex2i (150,70);
glVertex2i (140,70);

glVertex2i (150,60);
glVertex2i (160,60);
glVertex2i (160,70);
glVertex2i (150,70);

glVertex2i (160,60);
glVertex2i (170,60);
glVertex2i (170,70);
glVertex2i (160,70);

glVertex2i (170,60);
glVertex2i (180,60);
glVertex2i (180,70);
glVertex2i (170,70);

glVertex2i (180,60);
glVertex2i (190,60);
glVertex2i (190,70);
glVertex2i (180,70);

glColor3ub (255, 255, 0);

glVertex2i (190,60);
glVertex2i (200,60);
glVertex2i (200,70);
glVertex2i (190,70);

glColor3ub (0, 0, 0);


glVertex2i (200,60);
glVertex2i (210,60);
glVertex2i (210,70);
glVertex2i (200,70);

glVertex2i (210,60);
glVertex2i (220,60);
glVertex2i (220,70);
glVertex2i (210,70);

glVertex2i (220,60);
glVertex2i (230,60);
glVertex2i (230,70);
glVertex2i (220,70);

glVertex2i (230,60);
glVertex2i (240,60);
glVertex2i (240,70);
glVertex2i (230,70);

glVertex2i (240,60);
glVertex2i (250,60);
glVertex2i (250,70);
glVertex2i (240,70);

glVertex2i (250,60);
glVertex2i (260,60);
glVertex2i (260,70);
glVertex2i (250,70);

glVertex2i (260,60);
glVertex2i (270,60);
glVertex2i (270,70);
glVertex2i (260,70);

glColor3ub (255, 255, 0);

glVertex2i (270,60);
glVertex2i (280,60);
glVertex2i (280,70);
glVertex2i (270,70);

glVertex2i (280,60);
glVertex2i (290,60);
glVertex2i (290,70);
glVertex2i (280,70);

glColor3ub (0, 0, 0);

glVertex2i (290,60);
glVertex2i (300,60);
glVertex2i (300,70);
glVertex2i (290,70);

glEnd();


//7
glBegin(GL_QUADS);

glVertex2i (20,70);
glVertex2i (30,70);
glVertex2i (30,80);
glVertex2i (20,80);

glColor3ub (255, 255, 0);

glVertex2i (30,70);
glVertex2i (40,70);
glVertex2i (40,80);
glVertex2i (30,80);

glVertex2i (40,70);
glVertex2i (50,70);
glVertex2i (50,80);
glVertex2i (40,80);

glColor3ub (0, 0, 0);

glVertex2i (50,70);
glVertex2i (60,70);
glVertex2i (60,80);
glVertex2i (50,80);

glVertex2i (60,70);
glVertex2i (70,70);
glVertex2i (70,80);
glVertex2i (60,80);

glVertex2i (70,70);
glVertex2i (80,70);
glVertex2i (80,80);
glVertex2i (70,80);

glVertex2i (80,70);
glVertex2i (90,70);
glVertex2i (90,80);
glVertex2i (80,80);

glVertex2i (90,70);
glVertex2i (100,70);
glVertex2i (100,80);
glVertex2i (90,80);

glVertex2i (100,70);
glVertex2i (110,70);
glVertex2i (110,80);
glVertex2i (100,80);

glVertex2i (110,70);
glVertex2i (120,70);
glVertex2i (120,80);
glVertex2i (110,80);

glVertex2i (120,70);
glVertex2i (130,70);
glVertex2i (130,80);
glVertex2i (120,80);

glVertex2i (130,70);
glVertex2i (140,70);
glVertex2i (140,80);
glVertex2i (130,80);

glVertex2i (140,70);
glVertex2i (150,70);
glVertex2i (150,80);
glVertex2i (140,80);

glVertex2i (150,70);
glVertex2i (160,70);
glVertex2i (160,80);
glVertex2i (150,80);

glVertex2i (160,70);
glVertex2i (170,70);
glVertex2i (170,80);
glVertex2i (160,80);

glColor3ub (0, 0, 0);

glVertex2i (170,70);
glVertex2i (180,70);
glVertex2i (180,80);
glVertex2i (170,80);

glVertex2i (180,70);
glVertex2i (190,70);
glVertex2i (190,80);
glVertex2i (180,80);

glVertex2i (190,70);
glVertex2i (200,70);
glVertex2i (200,80);
glVertex2i (190,80);

glVertex2i (200,70);
glVertex2i (210,70);
glVertex2i (210,80);
glVertex2i (200,80);

glVertex2i (210,70);
glVertex2i (220,70);
glVertex2i (220,80);
glVertex2i (210,80);

glVertex2i (220,70);
glVertex2i (230,70);
glVertex2i (230,80);
glVertex2i (220,80);

glVertex2i (230,70);
glVertex2i (240,70);
glVertex2i (240,80);
glVertex2i (230,80);

glVertex2i (240,70);
glVertex2i (250,70);
glVertex2i (250,80);
glVertex2i (240,80);

glVertex2i (250,70);
glVertex2i (260,70);
glVertex2i (260,80);
glVertex2i (250,80);

glVertex2i (260,70);
glVertex2i (270,70);
glVertex2i (270,80);
glVertex2i (260,80);

glVertex2i (270,70);
glVertex2i (280,70);
glVertex2i (280,80);
glVertex2i (270,80);

glColor3ub (255, 255, 0);

glVertex2i (280,70);
glVertex2i (290,70);
glVertex2i (290,80);
glVertex2i (280,80);

glVertex2i (290,70);
glVertex2i (300,70);
glVertex2i (300,80);
glVertex2i (290,80);

glColor3ub (0, 0, 0);

glVertex2i (300,70);
glVertex2i (310,70);
glVertex2i (310,80);
glVertex2i (300,80);

glEnd();



//8
glBegin(GL_QUADS);

glVertex2i (10,80);
glVertex2i (20,80);
glVertex2i (20,90);
glVertex2i (10,90);

glColor3ub (255, 255, 0);

glVertex2i (20,80);
glVertex2i (30,80);
glVertex2i (30,90);
glVertex2i (20,90);

glVertex2i (30,80);
glVertex2i (40,80);
glVertex2i (40,90);
glVertex2i (30,90);

glColor3ub (0, 0, 0);

glVertex2i (40,80);
glVertex2i (50,80);
glVertex2i (50,90);
glVertex2i (40,90);

glVertex2i (50,80);
glVertex2i (60,80);
glVertex2i (60,90);
glVertex2i (50,90);

glVertex2i (60,80);
glVertex2i (70,80);
glVertex2i (70,90);
glVertex2i (60,90);

glVertex2i (70,80);
glVertex2i (80,80);
glVertex2i (80,90);
glVertex2i (70,90);

glVertex2i (80,80);
glVertex2i (90,80);
glVertex2i (90,90);
glVertex2i (80,90);

glVertex2i (90,80);
glVertex2i (100,80);
glVertex2i (100,90);
glVertex2i (90,90);

glVertex2i (100,80);
glVertex2i (110,80);
glVertex2i (110,90);
glVertex2i (100,90);

glVertex2i (110,80);
glVertex2i (120,80);
glVertex2i (120,90);
glVertex2i (110,90);

glVertex2i (120,80);
glVertex2i (130,80);
glVertex2i (130,90);
glVertex2i (120,90);

glVertex2i (130,80);
glVertex2i (140,80);
glVertex2i (140,90);
glVertex2i (130,90);

glVertex2i (140,80);
glVertex2i (150,80);
glVertex2i (150,90);
glVertex2i (140,90);

glVertex2i (150,80);
glVertex2i (160,80);
glVertex2i (160,90);
glVertex2i (150,90);

glVertex2i (160,80);
glVertex2i (170,80);
glVertex2i (170,90);
glVertex2i (160,90);

glVertex2i (170,80);
glVertex2i (180,80);
glVertex2i (180,90);
glVertex2i (170,90);

glVertex2i (180,80);
glVertex2i (190,80);
glVertex2i (190,90);
glVertex2i (180,90);

glVertex2i (190,80);
glVertex2i (200,80);
glVertex2i (200,90);
glVertex2i (190,90);

glVertex2i (200,80);
glVertex2i (210,80);
glVertex2i (210,90);
glVertex2i (200,90);

glVertex2i (210,80);
glVertex2i (220,80);
glVertex2i (220,90);
glVertex2i (210,90);

glVertex2i (220,80);
glVertex2i (230,80);
glVertex2i (230,90);
glVertex2i (220,90);

glVertex2i (230,80);
glVertex2i (240,80);
glVertex2i (240,90);
glVertex2i (230,90);

glVertex2i (240,80);
glVertex2i (250,80);
glVertex2i (250,90);
glVertex2i (240,90);

glVertex2i (250,80);
glVertex2i (260,80);
glVertex2i (260,90);
glVertex2i (250,90);

glVertex2i (260,80);
glVertex2i (270,80);
glVertex2i (270,90);
glVertex2i (260,90);

glVertex2i (270,80);
glVertex2i (280,80);
glVertex2i (280,90);
glVertex2i (270,90);

glVertex2i (280,80);
glVertex2i (290,80);
glVertex2i (290,90);
glVertex2i (280,90);

glColor3ub (255, 255, 0);

glVertex2i (290,80);
glVertex2i (300,80);
glVertex2i (300,90);
glVertex2i (290,90);

glVertex2i (300,80);
glVertex2i (310,80);
glVertex2i (310,90);
glVertex2i (300,90);

glColor3ub (0, 0, 0);

glVertex2i (310,80);
glVertex2i (320,80);
glVertex2i (320,90);
glVertex2i (310,90);

glEnd();



//9
glBegin(GL_QUADS);

glVertex2i (10,90);
glVertex2i (20,90);
glVertex2i (20,100);
glVertex2i (10,100);

glColor3ub (255, 255, 0);

glVertex2i (20,90);
glVertex2i (30,90);
glVertex2i (30,100);
glVertex2i (20,100);

glColor3ub (0, 0, 0);

glVertex2i (30,90);
glVertex2i (40,90);
glVertex2i (40,100);
glVertex2i (30,100);

glVertex2i (40,90);
glVertex2i (50,90);
glVertex2i (50,100);
glVertex2i (40,100);

glVertex2i (50,90);
glVertex2i (60,90);
glVertex2i (60,100);
glVertex2i (50,100);

glVertex2i (60,90);
glVertex2i (70,90);
glVertex2i (70,100);
glVertex2i (60,100);

glVertex2i (70,90);
glVertex2i (80,90);
glVertex2i (80,100);
glVertex2i (70,100);

glVertex2i (80,90);
glVertex2i (90,90);
glVertex2i (90,100);
glVertex2i (80,100);

glVertex2i (90,90);
glVertex2i (100,90);
glVertex2i (100,100);
glVertex2i (90,100);

glVertex2i (100,90);
glVertex2i (110,90);
glVertex2i (110,100);
glVertex2i (100,100);

glVertex2i (110,90);
glVertex2i (120,90);
glVertex2i (120,100);
glVertex2i (110,100);

glVertex2i (120,90);
glVertex2i (130,90);
glVertex2i (130,100);
glVertex2i (120,100);

glVertex2i (130,90);
glVertex2i (140,90);
glVertex2i (140,100);
glVertex2i (130,100);

glVertex2i (140,90);
glVertex2i (150,90);
glVertex2i (150,100);
glVertex2i (140,100);

glVertex2i (150,90);
glVertex2i (160,90);
glVertex2i (160,100);
glVertex2i (150,100);

glVertex2i (160,90);
glVertex2i (170,90);
glVertex2i (170,100);
glVertex2i (160,100);

glVertex2i (170,90);
glVertex2i (180,90);
glVertex2i (180,100);
glVertex2i (170,100);

glVertex2i (180,90);
glVertex2i (190,90);
glVertex2i (190,100);
glVertex2i (180,100);

glVertex2i (190,90);
glVertex2i (200,90);
glVertex2i (200,100);
glVertex2i (190,100);

glVertex2i (200,90);
glVertex2i (210,90);
glVertex2i (210,100);
glVertex2i (200,100);

glVertex2i (210,90);
glVertex2i (220,90);
glVertex2i (220,100);
glVertex2i (210,100);

glVertex2i (220,90);
glVertex2i (230,90);
glVertex2i (230,100);
glVertex2i (220,100);

glVertex2i (230,90);
glVertex2i (240,90);
glVertex2i (240,100);
glVertex2i (230,100);

glVertex2i (240,90);
glVertex2i (250,90);
glVertex2i (250,100);
glVertex2i (240,100);

glVertex2i (250,90);
glVertex2i (260,90);
glVertex2i (260,100);
glVertex2i (250,100);

glVertex2i (260,90);
glVertex2i (270,90);
glVertex2i (270,100);
glVertex2i (260,100);

glVertex2i (270,90);
glVertex2i (280,90);
glVertex2i (280,100);
glVertex2i (270,100);

glVertex2i (280,90);
glVertex2i (290,90);
glVertex2i (290,100);
glVertex2i (280,100);

glVertex2i (290,90);
glVertex2i (300,90);
glVertex2i (300,100);
glVertex2i (290,100);

glColor3ub (255, 255, 0);

glVertex2i (300,90);
glVertex2i (310,90);
glVertex2i (310,100);
glVertex2i (300,100);

glColor3ub (0, 0, 0);

glVertex2i (310,90);
glVertex2i (320,90);
glVertex2i (320,100);
glVertex2i (310,100);

glEnd();


//10
glBegin(GL_QUADS);

glVertex2i (10,100);
glVertex2i (20,100);
glVertex2i (20,110);
glVertex2i (10,110);

glColor3ub (255, 255, 0);

glVertex2i (20,100);
glVertex2i (30,100);
glVertex2i (30,110);
glVertex2i (20,110);

glColor3ub (0, 0, 0);

glVertex2i (30,100);
glVertex2i (40,100);
glVertex2i (40,110);
glVertex2i (30,110);

glVertex2i (40,100);
glVertex2i (50,100);
glVertex2i (50,110);
glVertex2i (40,110);

glVertex2i (50,100);
glVertex2i (60,100);
glVertex2i (60,110);
glVertex2i (50,110);

glVertex2i (60,100);
glVertex2i (70,100);
glVertex2i (70,110);
glVertex2i (60,110);

glVertex2i (70,100);
glVertex2i (80,100);
glVertex2i (80,110);
glVertex2i (70,110);

glVertex2i (80,100);
glVertex2i (90,100);
glVertex2i (90,110);
glVertex2i (80,110);

glVertex2i (90,100);
glVertex2i (100,100);
glVertex2i (100,110);
glVertex2i (90,110);

glVertex2i (100,100);
glVertex2i (110,100);
glVertex2i (110,110);
glVertex2i (100,110);

glVertex2i (110,100);
glVertex2i (120,100);
glVertex2i (120,110);
glVertex2i (110,110);

glVertex2i (120,100);
glVertex2i (130,100);
glVertex2i (130,110);
glVertex2i (120,110);

glVertex2i (130,100);
glVertex2i (140,100);
glVertex2i (140,110);
glVertex2i (130,110);

glVertex2i (140,100);
glVertex2i (150,100);
glVertex2i (150,110);
glVertex2i (140,110);

glVertex2i (150,100);
glVertex2i (160,100);
glVertex2i (160,110);
glVertex2i (150,110);

glVertex2i (160,100);
glVertex2i (170,100);
glVertex2i (170,110);
glVertex2i (160,110);

glVertex2i (170,100);
glVertex2i (180,100);
glVertex2i (180,110);
glVertex2i (170,110);

glVertex2i (180,100);
glVertex2i (190,100);
glVertex2i (190,110);
glVertex2i (180,110);

glVertex2i (190,100);
glVertex2i (200,100);
glVertex2i (200,110);
glVertex2i (190,110);

glVertex2i (200,100);
glVertex2i (210,100);
glVertex2i (210,110);
glVertex2i (200,110);

glVertex2i (210,100);
glVertex2i (220,100);
glVertex2i (220,110);
glVertex2i (210,110);

glVertex2i (220,100);
glVertex2i (230,100);
glVertex2i (230,110);
glVertex2i (220,110);

glVertex2i (230,100);
glVertex2i (240,100);
glVertex2i (240,110);
glVertex2i (230,110);

glVertex2i (240,100);
glVertex2i (250,100);
glVertex2i (250,110);
glVertex2i (240,110);

glVertex2i (250,100);
glVertex2i (260,100);
glVertex2i (260,110);
glVertex2i (250,110);

glVertex2i (260,100);
glVertex2i (270,100);
glVertex2i (270,110);
glVertex2i (260,110);

glVertex2i (270,100);
glVertex2i (280,100);
glVertex2i (280,110);
glVertex2i (270,110);

glVertex2i (280,100);
glVertex2i (290,100);
glVertex2i (290,110);
glVertex2i (280,110);

glVertex2i (290,100);
glVertex2i (300,100);
glVertex2i (300,110);
glVertex2i (290,110);

glColor3ub (255, 255, 0);

glVertex2i (300,100);
glVertex2i (310,100);
glVertex2i (310,110);
glVertex2i (300,110);

glColor3ub (0, 0, 0);

glVertex2i (310,100);
glVertex2i (320,100);
glVertex2i (320,110);
glVertex2i (310,110);

glEnd();

//11
glBegin(GL_QUADS);

glVertex2i (10,110);
glVertex2i (20,110);
glVertex2i (20,120);
glVertex2i (10,120);

glColor3ub (255, 255, 0);

glVertex2i (20,110);
glVertex2i (30,110);
glVertex2i (30,120);
glVertex2i (20,120);

glColor3ub (0, 0, 0);

glVertex2i (30,110);
glVertex2i (40,110);
glVertex2i (40,120);
glVertex2i (30,120);

glVertex2i (40,110);
glVertex2i (50,110);
glVertex2i (50,120);
glVertex2i (40,120);

glVertex2i (50,110);
glVertex2i (60,110);
glVertex2i (60,120);
glVertex2i (50,120);

glVertex2i (60,110);
glVertex2i (70,110);
glVertex2i (70,120);
glVertex2i (60,120);

glVertex2i (70,110);
glVertex2i (80,110);
glVertex2i (80,120);
glVertex2i (70,120);

glVertex2i (80,110);
glVertex2i (90,110);
glVertex2i (90,120);
glVertex2i (80,120);

glVertex2i (90,110);
glVertex2i (100,110);
glVertex2i (100,120);
glVertex2i (90,120);

glVertex2i (100,110);
glVertex2i (110,110);
glVertex2i (110,120);
glVertex2i (100,120);

glVertex2i (110,110);
glVertex2i (120,110);
glVertex2i (120,120);
glVertex2i (110,120);

glVertex2i (120,110);
glVertex2i (130,110);
glVertex2i (130,120);
glVertex2i (120,120);

glVertex2i (130,110);
glVertex2i (140,110);
glVertex2i (140,120);
glVertex2i (130,120);

glVertex2i (140,110);
glVertex2i (150,110);
glVertex2i (150,120);
glVertex2i (140,120);

glVertex2i (150,110);
glVertex2i (160,110);
glVertex2i (160,120);
glVertex2i (150,120);

glVertex2i (160,110);
glVertex2i (170,110);
glVertex2i (170,120);
glVertex2i (160,120);

glVertex2i (170,110);
glVertex2i (180,110);
glVertex2i (180,120);
glVertex2i (170,120);

glVertex2i (180,110);
glVertex2i (190,110);
glVertex2i (190,120);
glVertex2i (180,120);

glVertex2i (190,110);
glVertex2i (200,110);
glVertex2i (200,120);
glVertex2i (190,120);

glVertex2i (200,110);
glVertex2i (210,110);
glVertex2i (210,120);
glVertex2i (200,120);

glVertex2i (210,110);
glVertex2i (220,110);
glVertex2i (220,120);
glVertex2i (210,120);

glVertex2i (220,110);
glVertex2i (230,110);
glVertex2i (230,120);
glVertex2i (220,120);

glVertex2i (230,110);
glVertex2i (240,110);
glVertex2i (240,120);
glVertex2i (230,120);

glVertex2i (240,110);
glVertex2i (250,110);
glVertex2i (250,120);
glVertex2i (240,120);

glVertex2i (250,110);
glVertex2i (260,110);
glVertex2i (260,120);
glVertex2i (250,120);

glVertex2i (260,110);
glVertex2i (270,110);
glVertex2i (270,120);
glVertex2i (260,120);

glVertex2i (270,110);
glVertex2i (280,110);
glVertex2i (280,120);
glVertex2i (270,120);

glVertex2i (280,110);
glVertex2i (290,110);
glVertex2i (290,120);
glVertex2i (280,120);

glVertex2i (290,110);
glVertex2i (300,110);
glVertex2i (300,120);
glVertex2i (290,120);

glColor3ub (255, 255, 0);

glVertex2i (300,110);
glVertex2i (310,110);
glVertex2i (310,120);
glVertex2i (300,120);

glColor3ub (0, 0, 0);

glVertex2i (310,110);
glVertex2i (320,110);
glVertex2i (320,120);
glVertex2i (310,120);

glEnd();


//12

glBegin(GL_QUADS);

glVertex2i (10,120);
glVertex2i (20,120);
glVertex2i (20,130);
glVertex2i (10,130);

glColor3ub (255, 255, 0);

glVertex2i (20,120);
glVertex2i (30,120);
glVertex2i (30,130);
glVertex2i (20,130);

glColor3ub (0, 0, 0);

glVertex2i (30,120);
glVertex2i (40,120);
glVertex2i (40,130);
glVertex2i (30,130);

glVertex2i (40,120);
glVertex2i (50,120);
glVertex2i (50,130);
glVertex2i (40,130);

glVertex2i (50,120);
glVertex2i (60,120);
glVertex2i (60,130);
glVertex2i (50,130);

glVertex2i (60,120);
glVertex2i (70,120);
glVertex2i (70,130);
glVertex2i (60,130);

glVertex2i (70,120);
glVertex2i (80,120);
glVertex2i (80,130);
glVertex2i (70,130);

glVertex2i (80,120);
glVertex2i (90,120);
glVertex2i (90,130);
glVertex2i (80,130);

glVertex2i (90,120);
glVertex2i (100,120);
glVertex2i (100,130);
glVertex2i (90,130);

glVertex2i (100,120);
glVertex2i (110,120);
glVertex2i (110,130);
glVertex2i (100,130);

glVertex2i (110,120);
glVertex2i (120,120);
glVertex2i (120,130);
glVertex2i (110,130);

glVertex2i (120,120);
glVertex2i (130,120);
glVertex2i (130,130);
glVertex2i (120,130);

glVertex2i (130,120);
glVertex2i (140,120);
glVertex2i (140,130);
glVertex2i (130,130);

glVertex2i (140,120);
glVertex2i (150,120);
glVertex2i (150,130);
glVertex2i (140,130);

glVertex2i (150,120);
glVertex2i (160,120);
glVertex2i (160,130);
glVertex2i (150,130);

glVertex2i (160,120);
glVertex2i (170,120);
glVertex2i (170,130);
glVertex2i (160,130);

glVertex2i (170,120);
glVertex2i (180,120);
glVertex2i (180,130);
glVertex2i (170,130);

glVertex2i (180,120);
glVertex2i (190,120);
glVertex2i (190,130);
glVertex2i (180,130);

glVertex2i (190,120);
glVertex2i (200,120);
glVertex2i (200,130);
glVertex2i (190,130);

glVertex2i (200,120);
glVertex2i (210,120);
glVertex2i (210,130);
glVertex2i (200,130);

glVertex2i (210,120);
glVertex2i (220,120);
glVertex2i (220,130);
glVertex2i (210,130);

glVertex2i (220,120);
glVertex2i (230,120);
glVertex2i (230,130);
glVertex2i (220,130);

glVertex2i (230,120);
glVertex2i (240,120);
glVertex2i (240,130);
glVertex2i (230,130);

glVertex2i (240,120);
glVertex2i (250,120);
glVertex2i (250,130);
glVertex2i (240,130);

glVertex2i (250,120);
glVertex2i (260,120);
glVertex2i (260,130);
glVertex2i (250,130);

glVertex2i (260,120);
glVertex2i (270,120);
glVertex2i (270,130);
glVertex2i (260,130);

glVertex2i (270,120);
glVertex2i (280,120);
glVertex2i (280,130);
glVertex2i (270,130);

glVertex2i (280,120);
glVertex2i (290,120);
glVertex2i (290,130);
glVertex2i (280,130);

glVertex2i (290,120);
glVertex2i (300,120);
glVertex2i (300,130);
glVertex2i (290,130);

glColor3ub (255, 255, 0);

glVertex2i (300,120);
glVertex2i (310,120);
glVertex2i (310,130);
glVertex2i (300,130);

glColor3ub (0, 0, 0);

glVertex2i (310,120);
glVertex2i (320,120);
glVertex2i (320,130);
glVertex2i (310,130);
glEnd();

//13
glBegin(GL_QUADS);

glVertex2i (10,130);
glVertex2i (20,130);
glVertex2i (20,140);
glVertex2i (10,140);

glColor3ub (255, 255, 0);

glVertex2i (20,130);
glVertex2i (30,130);
glVertex2i (30,140);
glVertex2i (20,140);

glColor3ub (0, 0, 0);

glVertex2i (30,130);
glVertex2i (40,130);
glVertex2i (40,140);
glVertex2i (30,140);

glVertex2i (40,130);
glVertex2i (50,130);
glVertex2i (50,140);
glVertex2i (40,140);

glVertex2i (50,130);
glVertex2i (60,130);
glVertex2i (60,140);
glVertex2i (50,140);

glVertex2i (60,130);
glVertex2i (70,130);
glVertex2i (70,140);
glVertex2i (60,140);

glVertex2i (70,130);
glVertex2i (80,130);
glVertex2i (80,140);
glVertex2i (70,140);

glVertex2i (80,130);
glVertex2i (90,130);
glVertex2i (90,140);
glVertex2i (80,140);

glVertex2i (90,130);
glVertex2i (100,130);
glVertex2i (100,140);
glVertex2i (90,140);

glVertex2i (100,130);
glVertex2i (110,130);
glVertex2i (110,140);
glVertex2i (100,140);

glVertex2i (110,130);
glVertex2i (120,130);
glVertex2i (120,140);
glVertex2i (110,140);

glVertex2i (120,130);
glVertex2i (130,130);
glVertex2i (130,140);
glVertex2i (120,140);

glVertex2i (130,130);
glVertex2i (140,130);
glVertex2i (140,140);
glVertex2i (130,140);

glVertex2i (140,130);
glVertex2i (150,130);
glVertex2i (150,140);
glVertex2i (140,140);

glVertex2i (150,130);
glVertex2i (160,130);
glVertex2i (160,140);
glVertex2i (150,140);

glVertex2i (160,130);
glVertex2i (170,130);
glVertex2i (170,140);
glVertex2i (160,140);

glVertex2i (170,130);
glVertex2i (180,130);
glVertex2i (180,140);
glVertex2i (170,140);

glVertex2i (180,130);
glVertex2i (190,130);
glVertex2i (190,140);
glVertex2i (180,140);

glVertex2i (190,130);
glVertex2i (200,130);
glVertex2i (200,140);
glVertex2i (190,140);

glVertex2i (200,130);
glVertex2i (210,130);
glVertex2i (210,140);
glVertex2i (200,140);

glVertex2i (210,130);
glVertex2i (220,130);
glVertex2i (220,140);
glVertex2i (210,140);

glVertex2i (220,130);
glVertex2i (230,130);
glVertex2i (230,140);
glVertex2i (220,140);

glVertex2i (230,130);
glVertex2i (240,130);
glVertex2i (240,140);
glVertex2i (230,140);

glVertex2i (240,130);
glVertex2i (250,130);
glVertex2i (250,140);
glVertex2i (240,140);

glVertex2i (250,130);
glVertex2i (260,130);
glVertex2i (260,140);
glVertex2i (250,140);

glVertex2i (260,130);
glVertex2i (270,130);
glVertex2i (270,140);
glVertex2i (260,140);

glVertex2i (270,130);
glVertex2i (280,130);
glVertex2i (280,140);
glVertex2i (270,140);

glVertex2i (280,130);
glVertex2i (290,130);
glVertex2i (290,140);
glVertex2i (280,140);

glVertex2i (290,130);
glVertex2i (300,130);
glVertex2i (300,140);
glVertex2i (290,140);

glColor3ub (255, 255, 0);

glVertex2i (300,130);
glVertex2i (310,130);
glVertex2i (310,140);
glVertex2i (300,140);

glColor3ub (0, 0, 0);

glVertex2i (310,130);
glVertex2i (320,130);
glVertex2i (320,140);
glVertex2i (310,140);
glEnd();


//14
glBegin(GL_QUADS);

glVertex2i (10,140);
glVertex2i (20,140);
glVertex2i (20,150);
glVertex2i (10,150);

glColor3ub (255, 255, 0);

glVertex2i (20,140);
glVertex2i (30,140);
glVertex2i (30,150);
glVertex2i (20,150);

glVertex2i (30,140);
glVertex2i (40,140);
glVertex2i (40,150);
glVertex2i (30,150);

glColor3ub (0, 0, 0);

glVertex2i (40,140);
glVertex2i (50,140);
glVertex2i (50,150);
glVertex2i (40,150);

glVertex2i (50,140);
glVertex2i (60,140);
glVertex2i (60,150);
glVertex2i (50,150);

glVertex2i (60,140);
glVertex2i (70,140);
glVertex2i (70,150);
glVertex2i (60,150);

glVertex2i (70,140);
glVertex2i (80,140);
glVertex2i (80,150);
glVertex2i (70,150);

glVertex2i (80,140);
glVertex2i (90,140);
glVertex2i (90,150);
glVertex2i (80,150);

glVertex2i (90,140);
glVertex2i (100,140);
glVertex2i (100,150);
glVertex2i (90,150);

glVertex2i (100,140);
glVertex2i (110,140);
glVertex2i (110,150);
glVertex2i (100,150);

glColor3ub (255, 255, 0);

glVertex2i (110,140);
glVertex2i (120,140);
glVertex2i (120,150);
glVertex2i (110,150);

glVertex2i (120,140);
glVertex2i (130,140);
glVertex2i (130,150);
glVertex2i (120,150);

glColor3ub (0, 0, 0);

glVertex2i (130,140);
glVertex2i (140,140);
glVertex2i (140,150);
glVertex2i (130,150);

glVertex2i (140,140);
glVertex2i (150,140);
glVertex2i (150,150);
glVertex2i (140,150);

glVertex2i (150,140);
glVertex2i (160,140);
glVertex2i (160,150);
glVertex2i (150,150);

glVertex2i (160,140);
glVertex2i (170,140);
glVertex2i (170,150);
glVertex2i (160,150);

glVertex2i (170,140);
glVertex2i (180,140);
glVertex2i (180,150);
glVertex2i (170,150);

glVertex2i (180,140);
glVertex2i (190,140);
glVertex2i (190,150);
glVertex2i (180,150);

glVertex2i (190,140);
glVertex2i (200,140);
glVertex2i (200,150);
glVertex2i (190,150);

glColor3ub (255, 255, 0);

glVertex2i (200,140);
glVertex2i (210,140);
glVertex2i (210,150);
glVertex2i (200,150);

glVertex2i (210,140);
glVertex2i (220,140);
glVertex2i (220,150);
glVertex2i (210,150);

glColor3ub (0, 0, 0);

glVertex2i (220,140);
glVertex2i (230,140);
glVertex2i (230,150);
glVertex2i (220,150);

glVertex2i (230,140);
glVertex2i (240,140);
glVertex2i (240,150);
glVertex2i (230,150);

glVertex2i (240,140);
glVertex2i (250,140);
glVertex2i (250,150);
glVertex2i (240,150);

glVertex2i (250,140);
glVertex2i (260,140);
glVertex2i (260,150);
glVertex2i (250,150);

glVertex2i (260,140);
glVertex2i (270,140);
glVertex2i (270,150);
glVertex2i (260,150);

glVertex2i (270,140);
glVertex2i (280,140);
glVertex2i (280,150);
glVertex2i (270,150);

glVertex2i (280,140);
glVertex2i (290,140);
glVertex2i (290,150);
glVertex2i (280,150);

glColor3ub (255, 255, 0);

glVertex2i (290,140);
glVertex2i (300,140);
glVertex2i (300,150);
glVertex2i (290,150);

glVertex2i (300,140);
glVertex2i (310,140);
glVertex2i (310,150);
glVertex2i (300,150);

glColor3ub (0, 0, 0);

glVertex2i (310,140);
glVertex2i (320,140);
glVertex2i (320,150);
glVertex2i (310,150);
glEnd();

//15

glBegin(GL_QUADS);

glVertex2i (20,150);
glVertex2i (30,150);
glVertex2i (30,160);
glVertex2i (20,160);

glColor3ub (255, 255, 0);

glVertex2i (30,150);
glVertex2i (40,150);
glVertex2i (40,160);
glVertex2i (30,160);

glVertex2i (40,150);
glVertex2i (50,150);
glVertex2i (50,160);
glVertex2i (40,160);

glColor3ub (0, 0, 0);

glVertex2i (50,150);
glVertex2i (60,150);
glVertex2i (60,160);
glVertex2i (50,160);

glVertex2i (60,150);
glVertex2i (70,150);
glVertex2i (70,160);
glVertex2i (60,160);

glVertex2i (70,150);
glVertex2i (80,150);
glVertex2i (80,160);
glVertex2i (70,160);

glVertex2i (80,150);
glVertex2i (90,150);
glVertex2i (90,160);
glVertex2i (80,160);

glVertex2i (90,150);
glVertex2i (100,150);
glVertex2i (100,160);
glVertex2i (90,160);

glColor3ub (255, 255, 0);

glVertex2i (100,150);
glVertex2i (110,150);
glVertex2i (110,160);
glVertex2i (100,160);

glVertex2i (110,150);
glVertex2i (120,150);
glVertex2i (120,160);
glVertex2i (110,160);

glVertex2i (120,150);
glVertex2i (130,150);
glVertex2i (130,160);
glVertex2i (120,160);

glVertex2i (130,150);
glVertex2i (140,150);
glVertex2i (140,160);
glVertex2i (130,160);

glColor3ub (0, 0, 0);

glVertex2i (140,150);
glVertex2i (150,150);
glVertex2i (150,160);
glVertex2i (140,160);

glVertex2i (150,150);
glVertex2i (160,150);
glVertex2i (160,160);
glVertex2i (150,160);

glVertex2i (160,150);
glVertex2i (170,150);
glVertex2i (170,160);
glVertex2i (160,160);

glVertex2i (170,150);
glVertex2i (180,150);
glVertex2i (180,160);
glVertex2i (170,160);

glVertex2i (180,150);
glVertex2i (190,150);
glVertex2i (190,160);
glVertex2i (180,160);

glColor3ub (255, 255, 0);

glVertex2i (190,150);
glVertex2i (200,150);
glVertex2i (200,160);
glVertex2i (190,160);

glVertex2i (200,150);
glVertex2i (210,150);
glVertex2i (210,160);
glVertex2i (200,160);

glVertex2i (210,150);
glVertex2i (220,150);
glVertex2i (220,160);
glVertex2i (210,160);

glVertex2i (220,150);
glVertex2i (230,150);
glVertex2i (230,160);
glVertex2i (220,160);

glColor3ub (0, 0, 0);

glVertex2i (230,150);
glVertex2i (240,150);
glVertex2i (240,160);
glVertex2i (230,160);

glVertex2i (240,150);
glVertex2i (250,150);
glVertex2i (250,160);
glVertex2i (240,160);

glVertex2i (250,150);
glVertex2i (260,150);
glVertex2i (260,160);
glVertex2i (250,160);

glVertex2i (260,150);
glVertex2i (270,150);
glVertex2i (270,160);
glVertex2i (260,160);

glVertex2i (270,150);
glVertex2i (280,150);
glVertex2i (280,160);
glVertex2i (270,160);

glColor3ub (255, 255, 0);

glVertex2i (280,150);
glVertex2i (290,150);
glVertex2i (290,160);
glVertex2i (280,160);

glVertex2i (290,150);
glVertex2i (300,150);
glVertex2i (300,160);
glVertex2i (290,160);

glColor3ub (0, 0, 0);

glVertex2i (300,150);
glVertex2i (310,150);
glVertex2i (310,160);
glVertex2i (300,160);

glEnd();



//16

glBegin(GL_QUADS);

glVertex2i (30,160);
glVertex2i (40,160);
glVertex2i (40,170);
glVertex2i (30,170);

glColor3ub (255, 255, 0);

glVertex2i (40,160);
glVertex2i (50,160);
glVertex2i (50,170);
glVertex2i (40,170);

glVertex2i (50,160);
glVertex2i (60,160);
glVertex2i (60,170);
glVertex2i (50,170);

glColor3ub (0, 0, 0);

glVertex2i (60,160);
glVertex2i (70,160);
glVertex2i (70,170);
glVertex2i (60,170);

glVertex2i (70,160);
glVertex2i (80,160);
glVertex2i (80,170);
glVertex2i (70,170);

glVertex2i (80,160);
glVertex2i (90,160);
glVertex2i (90,170);
glVertex2i (80,170);

glVertex2i (90,160);
glVertex2i (100,160);
glVertex2i (100,170);
glVertex2i (90,170);

glColor3ub (255, 255, 0);

glVertex2i (100,160);
glVertex2i (110,160);
glVertex2i (110,170);
glVertex2i (100,170);

glVertex2i (110,160);
glVertex2i (120,160);
glVertex2i (120,170);
glVertex2i (110,170);

glVertex2i (120,160);
glVertex2i (130,160);
glVertex2i (130,170);
glVertex2i (120,170);

glVertex2i (130,160);
glVertex2i (140,160);
glVertex2i (140,170);
glVertex2i (130,170);

glColor3ub (0, 0, 0);

glVertex2i (140,160);
glVertex2i (150,160);
glVertex2i (150,170);
glVertex2i (140,170);


glVertex2i (150,160);
glVertex2i (160,160);
glVertex2i (160,170);
glVertex2i (150,170);

glVertex2i (160,160);
glVertex2i (170,160);
glVertex2i (170,170);
glVertex2i (160,170);

glVertex2i (170,160);
glVertex2i (180,160);
glVertex2i (180,170);
glVertex2i (170,170);

glVertex2i (180,160);
glVertex2i (190,160);
glVertex2i (190,170);
glVertex2i (180,170);

glColor3ub (255, 255, 0);

glVertex2i (190,160);
glVertex2i (200,160);
glVertex2i (200,170);
glVertex2i (190,170);

glVertex2i (200,160);
glVertex2i (210,160);
glVertex2i (210,170);
glVertex2i (200,170);

glVertex2i (210,160);
glVertex2i (220,160);
glVertex2i (220,170);
glVertex2i (210,170);

glVertex2i (220,160);
glVertex2i (230,160);
glVertex2i (230,170);
glVertex2i (220,170);

glColor3ub (0, 0, 0);

glVertex2i (230,160);
glVertex2i (240,160);
glVertex2i (240,170);
glVertex2i (230,170);

glVertex2i (240,160);
glVertex2i (250,160);
glVertex2i (250,170);
glVertex2i (240,170);

glVertex2i (250,160);
glVertex2i (260,160);
glVertex2i (260,170);
glVertex2i (250,170);

glVertex2i (260,160);
glVertex2i (270,160);
glVertex2i (270,170);
glVertex2i (260,170);

glColor3ub (255, 255, 0);

glVertex2i (270,160);
glVertex2i (280,160);
glVertex2i (280,170);
glVertex2i (270,170);

glVertex2i (280,160);
glVertex2i (290,160);
glVertex2i (290,170);
glVertex2i (280,170);

glColor3ub (0, 0, 0);

glVertex2i (290,160);
glVertex2i (300,160);
glVertex2i (300,170);
glVertex2i (290,170);

glEnd();



//17

glBegin(GL_QUADS);

glVertex2i (40,170);
glVertex2i (50,170);
glVertex2i (50,180);
glVertex2i (40,180);

glColor3ub (255, 255, 0);

glVertex2i (50,170);
glVertex2i (60,170);
glVertex2i (60,180);
glVertex2i (50,180);

glVertex2i (60,170);
glVertex2i (70,170);
glVertex2i (70,180);
glVertex2i (60,180);

glColor3ub (0, 0, 0);

glVertex2i (70,170);
glVertex2i (80,170);
glVertex2i (80,180);
glVertex2i (70,180);

glVertex2i (80,170);
glVertex2i (90,170);
glVertex2i (90,180);
glVertex2i (80,180);

glVertex2i (90,170);
glVertex2i (100,170);
glVertex2i (100,180);
glVertex2i (90,180);

glColor3ub (255, 255, 0);

glVertex2i (100,170);
glVertex2i (110,170);
glVertex2i (110,180);
glVertex2i (100,180);

glVertex2i (110,170);
glVertex2i (120,170);
glVertex2i (120,180);
glVertex2i (110,180);

glVertex2i (120,170);
glVertex2i (130,170);
glVertex2i (130,180);
glVertex2i (120,180);

glVertex2i (130,170);
glVertex2i (140,170);
glVertex2i (140,180);
glVertex2i (130,180);

glColor3ub (0, 0, 0);

glVertex2i (140,170);
glVertex2i (150,170);
glVertex2i (150,180);
glVertex2i (140,180);

glVertex2i (150,170);
glVertex2i (160,170);
glVertex2i (160,180);
glVertex2i (150,180);

glVertex2i (160,170);
glVertex2i (170,170);
glVertex2i (170,180);
glVertex2i (160,180);

glVertex2i (170,170);
glVertex2i (180,170);
glVertex2i (180,180);
glVertex2i (170,180);

glVertex2i (180,170);
glVertex2i (190,170);
glVertex2i (190,180);
glVertex2i (180,180);

glColor3ub (255, 255, 0);

glVertex2i (190,170);
glVertex2i (200,170);
glVertex2i (200,180);
glVertex2i (190,180);

glVertex2i (200,170);
glVertex2i (210,170);
glVertex2i (210,180);
glVertex2i (200,180);

glVertex2i (210,170);
glVertex2i (220,170);
glVertex2i (220,180);
glVertex2i (210,180);

glVertex2i (220,170);
glVertex2i (230,170);
glVertex2i (230,180);
glVertex2i (220,180);

glColor3ub (0, 0, 0);

glVertex2i (230,170);
glVertex2i (240,170);
glVertex2i (240,180);
glVertex2i (230,180);

glVertex2i (240,170);
glVertex2i (250,170);
glVertex2i (250,180);
glVertex2i (240,180);

glVertex2i (250,170);
glVertex2i (260,170);
glVertex2i (260,180);
glVertex2i (250,180);

glColor3ub (255, 255, 0);

glVertex2i (260,170);
glVertex2i (270,170);
glVertex2i (270,180);
glVertex2i (260,180);

glVertex2i (270,170);
glVertex2i (280,170);
glVertex2i (280,180);
glVertex2i (270,180);

glColor3ub (0, 0, 0);

glVertex2i (280,170);
glVertex2i (290,170);
glVertex2i (290,180);
glVertex2i (280,180);

glEnd();


//18

glBegin(GL_QUADS);

glVertex2i (50,180);
glVertex2i (60,180);
glVertex2i (60,190);
glVertex2i (50,190);

glColor3ub (255, 255, 0);

glVertex2i (60,180);
glVertex2i (70,180);
glVertex2i (70,190);
glVertex2i (60,190);

glVertex2i (70,180);
glVertex2i (80,180);
glVertex2i (80,190);
glVertex2i (70,190);

glColor3ub (0, 0, 0);

glVertex2i (80,180);
glVertex2i (90,180);
glVertex2i (90,190);
glVertex2i (80,190);

glVertex2i (90,180);
glVertex2i (100,180);
glVertex2i (100,190);
glVertex2i (90,190);

glVertex2i (100,180);
glVertex2i (110,180);
glVertex2i (110,190);
glVertex2i (100,190);

glColor3ub (255, 255, 0);

glVertex2i (110,180);
glVertex2i (120,180);
glVertex2i (120,190);
glVertex2i (110,190);

glVertex2i (120,180);
glVertex2i (130,180);
glVertex2i (130,190);
glVertex2i (120,190);

glVertex2i (130,180);
glVertex2i (140,180);
glVertex2i (140,190);
glVertex2i (130,190);

glColor3ub (0, 0, 0);

glVertex2i (140,180);
glVertex2i (150,180);
glVertex2i (150,190);
glVertex2i (140,190);

glVertex2i (150,180);
glVertex2i (160,180);
glVertex2i (160,190);
glVertex2i (150,190);

glVertex2i (160,180);
glVertex2i (170,180);
glVertex2i (170,190);
glVertex2i (160,190);

glVertex2i (170,180);
glVertex2i (180,180);
glVertex2i (180,190);
glVertex2i (170,190);

glVertex2i (180,180);
glVertex2i (190,180);
glVertex2i (190,190);
glVertex2i (180,190);

glColor3ub (255, 255, 0);

glVertex2i (190,180);
glVertex2i (200,180);
glVertex2i (200,190);
glVertex2i (190,190);

glColor3ub (255, 255, 0);

glVertex2i (200,180);
glVertex2i (210,180);
glVertex2i (210,190);
glVertex2i (200,190);

glColor3ub (255, 255, 0);

glVertex2i (210,180);
glVertex2i (220,180);
glVertex2i (220,190);
glVertex2i (210,190);


glColor3ub (0, 0, 0);

glVertex2i (220,180);
glVertex2i (230,180);
glVertex2i (230,190);
glVertex2i (220,190);

glVertex2i (230,180);
glVertex2i (240,180);
glVertex2i (240,190);
glVertex2i (230,190);

glVertex2i (240,180);
glVertex2i (250,180);
glVertex2i (250,190);
glVertex2i (240,190);

glColor3ub (255, 255, 0);

glVertex2i (250,180);
glVertex2i (260,180);
glVertex2i (260,190);
glVertex2i (250,190);

glVertex2i (260,180);
glVertex2i (270,180);
glVertex2i (270,190);
glVertex2i (260,190);

glColor3ub (0, 0, 0);

glVertex2i (270,180);
glVertex2i (280,180);
glVertex2i (280,190);
glVertex2i (270,190);

glEnd();


//19

glBegin(GL_QUADS);

glVertex2i (60,190);
glVertex2i (70,190);
glVertex2i (70,200);
glVertex2i (60,200);

glColor3ub (255, 255, 0);

glVertex2i (70,190);
glVertex2i (80,190);
glVertex2i (80,200);
glVertex2i (70,200);

glVertex2i (80,190);
glVertex2i (90,190);
glVertex2i (90,200);
glVertex2i (80,200);

glVertex2i (90,190);
glVertex2i (100,190);
glVertex2i (100,200);
glVertex2i (90,200);

glVertex2i (100,190);
glVertex2i (110,190);
glVertex2i (110,200);
glVertex2i (100,200);

glVertex2i (110,190);
glVertex2i (120,190);
glVertex2i (120,200);
glVertex2i (110,200);

glVertex2i (120,190);
glVertex2i (130,190);
glVertex2i (130,200);
glVertex2i (120,200);

glVertex2i (130,190);
glVertex2i (140,190);
glVertex2i (140,200);
glVertex2i (130,200);

glColor3ub (0, 0, 0);

glVertex2i (140,190);
glVertex2i (150,190);
glVertex2i (150,200);
glVertex2i (140,200);

glColor3ub (255, 255, 0);

glVertex2i (150,190);
glVertex2i (160,190);
glVertex2i (160,200);
glVertex2i (150,200);

glVertex2i (160,190);
glVertex2i (170,190);
glVertex2i (170,200);
glVertex2i (160,200);

glVertex2i (170,190);
glVertex2i (180,190);
glVertex2i (180,200);
glVertex2i (170,200);

glColor3ub (0, 0, 0);

glVertex2i (180,190);
glVertex2i (190,190);
glVertex2i (190,200);
glVertex2i (180,200);

glColor3ub (255, 255, 0);

glVertex2i (190,190);
glVertex2i (200,190);
glVertex2i (200,200);
glVertex2i (190,200);

glVertex2i (200,190);
glVertex2i (210,190);
glVertex2i (210,200);
glVertex2i (200,200);

glVertex2i (210,190);
glVertex2i (220,190);
glVertex2i (220,200);
glVertex2i (210,200);

glVertex2i (220,190);
glVertex2i (230,190);
glVertex2i (230,200);
glVertex2i (220,200);

glVertex2i (230,190);
glVertex2i (240,190);
glVertex2i (240,200);
glVertex2i (230,200);

glVertex2i (240,190);
glVertex2i (250,190);
glVertex2i (250,200);
glVertex2i (240,200);

glVertex2i (250,190);
glVertex2i (260,190);
glVertex2i (260,200);
glVertex2i (250,200);

glColor3ub (0, 0, 0);

glVertex2i (260,190);
glVertex2i (270,190);
glVertex2i (270,200);
glVertex2i (260,200);

glEnd();


//20
glBegin(GL_QUADS);

glVertex2i (70,200);
glVertex2i (80,200);
glVertex2i (80,210);
glVertex2i (70,210);

glColor3ub (255, 255, 0);

glVertex2i (80,200);
glVertex2i (90,200);
glVertex2i (90,210);
glVertex2i (80,210);

glVertex2i (90,200);
glVertex2i (100,200);
glVertex2i (100,210);
glVertex2i (90,210);

glVertex2i (100,200);
glVertex2i (110,200);
glVertex2i (110,210);
glVertex2i (100,210);

glVertex2i (110,200);
glVertex2i (120,200);
glVertex2i (120,210);
glVertex2i (110,210);

glVertex2i (120,200);
glVertex2i (130,200);
glVertex2i (130,210);
glVertex2i (120,210);

glVertex2i (130,200);
glVertex2i (140,200);
glVertex2i (140,210);
glVertex2i (130,210);

glVertex2i (140,200);
glVertex2i (150,200);
glVertex2i (150,210);
glVertex2i (140,210);

glVertex2i (150,200);
glVertex2i (160,200);
glVertex2i (160,210);
glVertex2i (150,210);

glVertex2i (160,200);
glVertex2i (170,200);
glVertex2i (170,210);
glVertex2i (160,210);

glVertex2i (170,200);
glVertex2i (180,200);
glVertex2i (180,210);
glVertex2i (170,210);

glVertex2i (180,200);
glVertex2i (190,200);
glVertex2i (190,210);
glVertex2i (180,210);

glVertex2i (190,200);
glVertex2i (200,200);
glVertex2i (200,210);
glVertex2i (190,210);

glVertex2i (200,200);
glVertex2i (210,200);
glVertex2i (210,210);
glVertex2i (200,210);

glVertex2i (210,200);
glVertex2i (220,200);
glVertex2i (220,210);
glVertex2i (210,210);

glVertex2i (220,200);
glVertex2i (230,200);
glVertex2i (230,210);
glVertex2i (220,210);

glVertex2i (230,200);
glVertex2i (240,200);
glVertex2i (240,210);
glVertex2i (230,210);

glVertex2i (240,200);
glVertex2i (250,200);
glVertex2i (250,210);
glVertex2i (240,210);

glColor3ub (0, 0, 0);

glVertex2i (250,200);
glVertex2i (260,200);
glVertex2i (260,210);
glVertex2i (250,210);

glEnd();



//21
glBegin(GL_QUADS);

glVertex2i (80,210);
glVertex2i (90,210);
glVertex2i (90,220);
glVertex2i (80,220);

glVertex2i (90,210);
glVertex2i (100,210);
glVertex2i (100,220);
glVertex2i (90,220);

glVertex2i (100,210);
glVertex2i (110,210);
glVertex2i (110,220);
glVertex2i (100,220);

glVertex2i (110,210);
glVertex2i (120,210);
glVertex2i (120,220);
glVertex2i (110,220);

glVertex2i (120,210);
glVertex2i (130,210);
glVertex2i (130,220);
glVertex2i (120,220);

glVertex2i (130,210);
glVertex2i (140,210);
glVertex2i (140,220);
glVertex2i (130,220);

glVertex2i (140,210);
glVertex2i (150,210);
glVertex2i (150,220);
glVertex2i (140,220);

glVertex2i (150,210);
glVertex2i (160,210);
glVertex2i (160,220);
glVertex2i (150,220);

glVertex2i (160,210);
glVertex2i (170,210);
glVertex2i (170,220);
glVertex2i (160,220);

glVertex2i (170,210);
glVertex2i (180,210);
glVertex2i (180,220);
glVertex2i (170,220);

glVertex2i (180,210);
glVertex2i (190,210);
glVertex2i (190,220);
glVertex2i (180,220);

glVertex2i (190,210);
glVertex2i (200,210);
glVertex2i (200,220);
glVertex2i (190,220);

glVertex2i (200,210);
glVertex2i (210,210);
glVertex2i (210,220);
glVertex2i (200,220);

glVertex2i (210,210);
glVertex2i (220,210);
glVertex2i (220,220);
glVertex2i (210,220);

glVertex2i (220,210);
glVertex2i (230,210);
glVertex2i (230,220);
glVertex2i (220,220);

glVertex2i (230,210);
glVertex2i (240,210);
glVertex2i (240,220);
glVertex2i (230,220);

glVertex2i (240,210);
glVertex2i (250,210);
glVertex2i (250,220);
glVertex2i (240,220);

glEnd();


glFlush ();


}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 330.0, 0.0, 230.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (150, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
