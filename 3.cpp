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
void ReProyectar(int w, int h)
{
    GLfloat formato;

    if (h == 0)
        h = 1;

    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    formato = (GLfloat)w / (GLfloat)h;
    if (w <= h)
        glOrtho(-10.0f, 10.0f, -10.0f / formato, 10.0f / formato, -1.0f, 1.0f);
    else
        glOrtho(-10.0f * formato, 10.0f * formato, -10.0f, 10.0f, -1.0f, 1.0f);
}
void drawScene()
{
    glMatrixMode(GL_MODELVIEW);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(0.431, 0.141, 0.706);
    glColor3f(1, 1, 1);
   glBegin(GL_LINE_LOOP);
    //glBegin(GL_LINE_STRIP);
    glVertex3i(1-10, 2-10, 0);
    glVertex3i(5-10, 2-10, 0);
    
    glVertex3i(5-10, 4-10, 0);
    glVertex3i(3-10, 4-10, 0);
    glVertex3i(3-10, 5-10, 0);
    glVertex3i(4-10, 6-10, 0);
    glVertex3i(6-10, 6-10, 0);
    glVertex3i(6-10, 2-10, 0);
    glVertex3i(9-10, 2-10, 0);
    glVertex3i(9-10, 4-10, 0);
    glVertex3i(8-10, 4-10, 0);
    glVertex3i(8-10, 7-10, 0);
    glVertex3i(9-10, 6-10, 0);
    glVertex3i(11-10, 5-10, 0);
    glVertex3i(13-10, 5-10, 0);
    glVertex3i(15-10, 6-10, 0);
    glVertex3i(16-10, 7-10, 0);
    glVertex3i(16-10, 13-10, 0);
    glVertex3i(14-10, 11-10, 0);
    glVertex3i(10-10, 11-10, 0);
    glVertex3i(8-10, 13-10, 0);
    glVertex3i(8-10, 9-10, 0);
    glVertex3i(6-10, 11-10, 0);
    glVertex3i(4-10, 11-10, 0);
    glVertex3i(2-10, 9-10, 0);
    glVertex3i(2-10, 12-10, 0);
    glVertex3i(3-10, 12-10, 0);
	glVertex3i(5-10, 14-10, 0);
	glVertex3i(5-10, 15-10, 0);
    glVertex3i(3-10, 15-10, 0);
    glVertex3i(0-10, 12-10, 0);
	glVertex3i(0-10, 8-10, 0);
	//glVertex3i(1-10, 2-10, 0);//GL_LINE_STRIP
	
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    glVertex3i(9-10, 8-10, 0);
	glVertex3i(11-10, 8-10, 0);
	glVertex3i(11-10, 10-10, 0);
	glVertex3i(9-10, 10-10, 0);
	glVertex3i(9-10, 8-10, 0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glVertex3i(13-10, 8-10, 0);
	glVertex3i(15-10, 8-10, 0);
	glVertex3i(15-10, 10-10, 0);
	glVertex3i(13-10, 10-10, 0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glVertex3i(11-10, 7-10, 0);
	glVertex3i(13-10, 7-10, 0);
	glVertex3i(12-10, 8-10, 0);
    glEnd();
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
    glutReshapeFunc(ReProyectar);
    glutDisplayFunc(drawScene);
    // glutIdleFunc(drawScene);
    glutMainLoop();
    return 0;
}
// g++ -m32 -Wall -o 3.out 3.cpp -L"C:\MinGW\lib" -lglu32 -lglut32 -lopengl32 -lstdc++
// ./3.out