#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <iostream>

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5, 5, -5, 5);
    glClearColor(0.0, 0.0, 0.0, 0.0);
}

void drawScene()
{
    // glMatrixMode(GL_MODELVIEW);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.431, 0.141, 0.706);
    glColor3f(1, 1, 1);
    glBegin(GL_LINE_STRIP);
    glVertex3i(1, 2, 0);
    glVertex3i(5, 2, 0);
    glVertex3i(5, 4, 0);
    glVertex3i(3, 4, 0);
    glVertex3i(3, 5, 0);
    glVertex3i(4, 6, 0);
    glVertex3i(6, 6, 0);
    glVertex3i(6, 2, 0);
    glVertex3i(9, 2, 0);
    glVertex3i(9, 4, 0);
    glVertex3i(8, 4, 0);
    glVertex3i(8, 7, 0);
    glVertex3i(9, 6, 0);
    glVertex3i(11, 5, 0);
    glVertex3i(13, 5, 0);
    glVertex3i(15, 6, 0);
    glVertex3i(16, 7, 0);
    glVertex3i(16, 13, 0);
    glVertex3i(14, 11, 0);
    glVertex3i(10, 11, 0);
    glVertex3i(8, 13, 0);
    glVertex3i(8, 9, 0);
    glVertex3i(3, 11, 0);
    glVertex3i(4, 11, 0);
    glVertex3i(2, 9, 0);
    glVertex3i(2, 12, 0);
    glVertex3i(3, 12, 0);
    glVertex3i(5, 14, 0);
    glVertex3i(5, 15, 0);
    glVertex3i(3, 15, 0);
    glVertex3i(0, 12, 0);
    glVertex3i(0, 8, 0);
    glVertex3i(1, 2, 0);
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
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(800, 800);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    init();
    // glutReshapeFunc(ReProyectar);
    glutDisplayFunc(drawScene);
    // glutIdleFunc(drawScene);
    glutMainLoop();
    return 0;
}
// g++ -m32 -Wall -o 3.out 3.cpp -L"C:\MinGW\lib" -lglu32 -lglut32 -lopengl32 -lstdc++
// ./3.out