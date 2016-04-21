#include <GL/gl.h>//directorio de glut
#include <GL/glut.h>//directorio de glut
#include <math.h>//libreri par operaciones matematicas

float px=0.1 , py=0.1 , rad=0.5, calx, caly;//varias tipo flotantes

void display(void)//clase en la que creamos la figura
{
    glColor3f(1.0,1.0,1.0);// color de los puntos de la figura
   // glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(3);//tamano de los puntos de la figura
    glBegin(GL_POINTS);//iniciamos la creacion de las figuras
    for(double i=0;i<=3.1;i+=0.159)//bucle de interaciones necesarias para la creacion de la figra
   { 
	calx=rad*cos(i)+px;//calculo de coordenadas en x
	caly=rad*sin(i)+py;//calculo de coordenadas en y

	glVertex2f(calx,caly);//intruccion que imprime la figura 
   }
    glEnd();//termina la creacion de los puntos
    glFlush ();

}
void init (void)//tipo de visualizacion de la ventan
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0,1.0,-1.0,1.0);// coordenadas  para ver los 4 cuadrantes
}

int main(int argc, char** argv)//estructura principal del programa
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (400, 400);//tamano de la ventana
    glutInitWindowPosition (100, 100);//posicion de la ventana de la pantalla
    glutCreateWindow ("Circunferencia");// nombre que se le asigna a la ventana 
    init ();
    glutDisplayFunc(display);//llamamos la clase que dibuja la figura 
    glutMainLoop();
    return 0;
}

// este es un comentario nuevo
