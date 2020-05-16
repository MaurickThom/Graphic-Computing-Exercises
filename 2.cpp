#include <GL/glut.h>
void init (void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}
/*
void triangulo(){
	glBegin (GL_TRIANGLES);
	glVertex3f(0.25,0.25,0.0);
	glVertex3f(0.25,0.00,0.25);
	glVertex3f(-0.25,0.25,0.0);
	glEnd();
}*/

void display(void)
{
	


	glClear (GL_COLOR_BUFFER_BIT);
	//head
	glColor3f (1.0, 1.0, 1.0);
	glLineWidth(5.0f);
	glBegin(GL_LINES);
	
	glVertex2f (-0.3, -0.3);
	glVertex2f (0.0, 0.1);
	
	glVertex2f (0.3, -0.3);
	glVertex2f (0.0, 0.1);
	
	glVertex2f (-0.3, -0.3);
	glVertex2f (0.3, -0.3);
	
	
	glVertex2f (-0.2, -0.3);
	glVertex2f (-0.2, -0.7);
	
	glVertex2f (0.2, -0.3);
	glVertex2f (0.2, -.7);
	
	glVertex2f (-0.2, -0.7);
	glVertex2f (0.2, -.7);
	
	glVertex2f (0.2, -.6);
	glVertex2f (0.5, -.6);
	
	glVertex2f (-0.2, -.6);
	glVertex2f (-.5, -.6);
	
	glVertex2f (.08, -.7);
	glVertex2f (.08, -.45);

	glVertex2f (-.08, -.7);
	glVertex2f (-.08, -.45);
	
	glVertex2f (.08, -.45);
	glVertex2f (-.08, -.45);
	
	glEnd();
	
	glBegin (GL_POINTS);
	glVertex3f(5,5,5);
	glEnd();

	glFlush ();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize (600, 500);
	glutInitWindowPosition (200, 100);
	glutCreateWindow ("My House");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

// g++ -m32 -Wall -o 2.out 2.cpp -L"C:\MinGW\lib" -lglu32 -lglut32 -lopengl32 -lstdc++
// ./2..out