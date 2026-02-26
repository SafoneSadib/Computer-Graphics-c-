#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Black part
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(0,200);
    glVertex2f(600,200);
    glVertex2f(600,300);
    glVertex2f(0,300);
    glEnd();

    // Red part
    glColor3f(1,0,0);
    glBegin(GL_QUADS);
    glVertex2f(0,100);
    glVertex2f(600,100);
    glVertex2f(600,200);
    glVertex2f(0,200);
    glEnd();

    // Yellow part
    glColor3f(1,1,0);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(600,0);
    glVertex2f(600,100);
    glVertex2f(0,100);
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(1,1,1,1);
    gluOrtho2D(0,600,0,300);
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,300);
    glutCreateWindow("Germany Flag");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
