/******** wrote by yangyi March 11, 2015 ************/

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <GL/glext.h>
#include <sys/time.h>
#include "config.h"


  void init();


  void display();

int main(int argc, char* argv[])
{

        glutInit(&argc, argv);

        glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);


        glutInitWindowPosition(0, 0);

        glutInitWindowSize(300, 300);


        glutCreateWindow("OpenGL 3D View");

        init(); glutDisplayFunc(display);


        glutMainLoop();


        return 0;


}


void init()

{


            glClearColor(0.0, 0.0, 0.0, 0.0);

            glMatrixMode(GL_PROJECTION);


            glOrtho(-5, 5, -5, 5, 5, 15);

}
