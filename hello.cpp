#include "./freeglut-3.2.1/include/GL/freeglut.h"
#include <GL/glut.h>
#include <iostream>
using namespace std;
void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
  glLineWidth(25.0);
  glBegin(GL_LINES);
    glVertex2i(50,20);
    glVertex2i(80,20);
  glEnd();
  glFlush();
}

void myInit(void)
{
  glClearColor(1.0,1.0,1.0,0.0);
  glColor3f(1.0,0.0,0.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0,100.0,0.0,200.0);
}

int main(int argc, char **argv) 
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(200,300);
  glutInitWindowPosition(50,100);
  glutCreateWindow("Hello Class");
  glutDisplayFunc(display);
  myInit();
  glutMainLoop();
}
 
