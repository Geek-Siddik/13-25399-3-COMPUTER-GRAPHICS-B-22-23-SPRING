#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>
#include <cmath>

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);//Clear Window Function
    glColor3f(1.0, 1.0, 1.0); // Setting color to white
    //glPointSize(5.0);//Size of the point

    //Taking Values of start point and end point from the user
    float x1, y1, x2, y2;
    std::cout << "Enter the starting coordinates of the line (x1, y1)\n";
    std::cout << "Write a value for 'x1' and press enter button: ";
    std::cin >> x1;
    std::cout << "Write a value for 'y1' and press enter button: ";
    std::cin >> y1;
    std::cout << "Enter the ending coordinates of the line (x2, y2)\n";
    std::cout << "Write a value for 'x2' and press enter button: ";
    std::cin >> x2;
    std::cout << "Write a value for 'y2' and press enter button: ";
    std::cin >> y2;


    // Calculating the direction and slope
    float dx = x2 - x1;
    float dy = y2 - y1;
    float steps = std::max(std::abs(dx), std::abs(dy));// How many steps to take = max number of |dx| and max number of |dy|
    float x_inc = dx / steps; // Increment of x
    float y_inc = dy / steps; // Increment of y

    // Plotting the line
    float x = x1;
    float y = y1;

    glBegin(GL_POINTS);
    for (int i = 0; i < steps; i++)
        {
            glVertex2i(round(x), round(y));
            x += x_inc;
            y += y_inc;
        }
        glEnd();
        glFlush();//Force all operations to complete
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);//Configure and open window (Pass command-line flags on to GLUT)
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//Specify the display Mode – RGB or color Index, single or double Buffer
  glutInitWindowSize(700, 540);//Create a window with resolution a*b
  glutCreateWindow("ABU BAKAR SIDDIK 13-25399-3 LINE DRAW");//Create a window Named "..."
  glClearColor(0.0, 0.0, 0.0, 0.0);
  gluOrtho2D(0, 640, 0, 480);//The coordinates are in units of “fractions of window size” (regardless of actual window size)
  glutDisplayFunc(myDisplay);//Call Back Function
  glutMainLoop();//The program goes into a infinite loop waiting for events
  return 0;
}
