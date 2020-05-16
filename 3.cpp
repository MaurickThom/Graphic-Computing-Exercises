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
void ReProyectar(int w, int h) {
   GLfloat formato;

   if(h == 0) h = 1;
      
    glViewport(0, 0, w, h);

   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();

   formato = (GLfloat)w / (GLfloat)h;
    if (w <= h) glOrtho (-10.0f, 10.0f, -10.0f / formato, 10.0f / formato, -1.0f, 1.0f);
    else glOrtho (-10.0f * formato, 10.0f * formato, -10.0f, 10.0f, -1.0f, 1.0f);
}
void drawScene()
{
    glMatrixMode(GL_MODELVIEW);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(0.431, 0.141, 0.706);
    glColor3f(1, 1, 1);
    glBegin(GL_LINE_STRIP);
        glVertex3i(-4, 7, 0);
        glVertex3i(-4, -7, 0);
        glVertex3i(4, -7, 0);
        glVertex3i(4, 4, 0);
        glVertex3i(1, 7, 0);
        glVertex3i(-4, 7, 0);
    glEnd();

    // glBegin(GL_LINE_LOOP);
    //     glVertex3i(-3, 4, 0);
    //     glVertex3i(3, 4, 0);
    //     glVertex3i(3, -6, 0);
    //     glVertex3i(-3, -6, 0);
    // glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("CAT");
    glutInitWindowSize(600, 450);
    glutInitWindowPosition(800, 800);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    init();
    glutReshapeFunc(ReProyectar);
    glutDisplayFunc(drawScene);
    // glutIdleFunc(drawScene);
    glutMainLoop();
    return 0;
}
// g++ -m32 -Wall -o 3.out 3.cpp -L"C:\MinGW\lib" -lglu32 -lglut32 -lopengl32 -lstdc++
// ./3.out