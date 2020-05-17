#include <GL/glut.h>
#include <Math.h>

void init (void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

void puntos(double x, double y){
	glBegin(GL_POINTS);
	glVertex2f ( x, y);
	glEnd();
}

void circulo(double radio, double a, double b){
	//radio = sqrt( pow(( 0. - a ),2) + pow(( 0.5 - b ),2) ) ;
	double x;
	double y;
	for(double t = 0 ; t < 360; t+=0.01){
		
		x = a + radio * cos(t*3.14159265/180.0);
		y = b + radio * sin(t*3.14159265/180.0);
		
		//x = a + radio * cos(t);
		//y = b + radio * sin(t);
		
		puntos( x, y );
		
	}
}

void line(double x, double y, double x1, double y1){
	glBegin(GL_LINES);
	
	glVertex2f (x, y);
	glVertex2f (x1, y1);
	glEnd();
}

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	//head
	
	glColor3f (1.0, 1.0, 1.0);
	//glLineWidth(3.0f);
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
	
	circulo(0.022, -0.03, -0.55);

	circulo(0.04, -0.1, -0.38);
	circulo(0.04, 0.1, -0.38);
	
	circulo(0.07, -0.3, 0.0);
	glBegin(GL_POINTS);
	glVertex2f ( -.33, .1 );
	glVertex2f ( -.335, .13 );
	glEnd();
	line(-.29, .1,-.27, .17);
	line(-.25, .08, -.24, .1);
	line(-.22, .05, -.15, .1);
	line(-.2, .0, -.15, -.01 );
	line( -.22, -.05, -.17, -.09);
	line(-.25, -.09, -.23, -.13);
	line(-.29, -.1, -.28, -.15);
	line(-.32, -.09, -.34, -.19);
	line(-.36, -.08, -.37, -.1 );
	line(-.39, -.03, -.45, -.05);
	line(-.39, .04, -.42, .07);
	line(-.36, .08, -.4, .13);
	line(-.33, .1, -.335, .13);
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