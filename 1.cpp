#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <iostream>

void init()
{
   glMatrixMode(GL_PROJECTION);
   gluOrtho2D(-5, 5, -5, 5);
   glClearColor(0.0, 0.0, 0.0, 0.0);
}
void triangle()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.431, 0.141, 0.706);
   glBegin(GL_TRIANGLES);
   glVertex3f(1, 1, 0.0);
   glVertex3f(1, 0.00, 0.0);
   glVertex3f(-1, 1, 0.0);
   glEnd();
   glFlush();
}
void point()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.431, 0.141, 0.706);
   glPointSize(10.0);
   glBegin(GL_POINTS);
   glVertex3f(0, 0, 0);
   glEnd();
   glFlush();
}
void line()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.431, 0.141, 0.706);
   glLineWidth(10.0f);
   glBegin(GL_LINES);
   glVertex3f(1, 1, 0.0);
   glVertex3f(4, 4, 0.0);
   glEnd();
   glFlush();
}

void menu()
{
   int option = 0;
   while (true)
   {
      std::cout << "1. Line" << std::endl;
      std::cout << "2. Triangle" << std::endl;
      std::cout << "3. Point" << std::endl;
      std::cout << "4. Salir" << std::endl;
      std::cout << "Option : ";
      std::cin >> option;
      if (option == 4)
         return;
      switch (option)
      {
      case 1:
         glutDisplayFunc(line);
         glutMainLoop();
         break;
      case 2:
         glutDisplayFunc(triangle);
         glutMainLoop();
         break;
      case 3:
         glutDisplayFunc(point);
         glutMainLoop();
         // glutDestroyWindow(1);
         break;
      }
   }
}

int main(int argc, char **argv)
{
   glutInit(&argc, argv);
   glutCreateWindow("Menu");
   glutInitWindowSize(600, 450);
   glutInitWindowPosition(50, 50);
   glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
   init();
   menu();
   return 0;
}
// g++ -m32 -Wall -o 1.out 1.cpp -L"C:\MinGW\lib" -lglu32 -lglut32 -lopengl32 -lstdc++
// ./1.out