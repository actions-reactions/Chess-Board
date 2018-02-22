#include <GL/gl.h>
#include <GL/glut.h>

// #include <GLUT/GLUT.h>
#include <stdio.h>

void display(void);


void display(void) {
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);

    /* draw white polygon (rectangle) with corners at
     * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
     */
// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-400, -400);
glVertex2d(-300, -400);
glVertex2d(-300, -300);
glVertex2d(-400, -300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-300, -400);
glVertex2d(-200, -400);
glVertex2d(-200, -300);
glVertex2d(-300, -300);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-200, -400);
glVertex2d(-100, -400);
glVertex2d(-100, -300);
glVertex2d(-200, -300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-100, -400);
glVertex2d(0, -400);
glVertex2d(0, -300);
glVertex2d(-100, -300);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(0, -400);
glVertex2d(100, -400);
glVertex2d(100, -300);
glVertex2d(0, -300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(100, -400);
glVertex2d(200, -400);
glVertex2d(200, -300);
glVertex2d(100, -300);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(200, -400);
glVertex2d(300, -400);
glVertex2d(300, -300);
glVertex2d(200, -300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(300, -400);
glVertex2d(400, -400);
glVertex2d(400, -300);
glVertex2d(300, -300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-400, -300);
glVertex2d(-300, -300);
glVertex2d(-300, -200);
glVertex2d(-400, -200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-300, -300);
glVertex2d(-200, -300);
glVertex2d(-200, -200);
glVertex2d(-300, -200);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-200, -300);
glVertex2d(-100, -300);
glVertex2d(-100, -200);
glVertex2d(-200, -200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-100, -300);
glVertex2d(0, -300);
glVertex2d(0, -200);
glVertex2d(-100, -200);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(0, -300);
glVertex2d(100, -300);
glVertex2d(100, -200);
glVertex2d(0, -200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(100, -300);
glVertex2d(200, -300);
glVertex2d(200, -200);
glVertex2d(100, -200);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(200, -300);
glVertex2d(300, -300);
glVertex2d(300, -200);
glVertex2d(200, -200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(300, -300);
glVertex2d(400, -300);
glVertex2d(400, -200);
glVertex2d(300, -200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-400, -200);
glVertex2d(-300, -200);
glVertex2d(-300, -100);
glVertex2d(-400, -100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-300, -200);
glVertex2d(-200, -200);
glVertex2d(-200, -100);
glVertex2d(-300, -100);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-200, -200);
glVertex2d(-100, -200);
glVertex2d(-100, -100);
glVertex2d(-200, -100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-100, -200);
glVertex2d(0, -200);
glVertex2d(0, -100);
glVertex2d(-100, -100);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(0, -200);
glVertex2d(100, -200);
glVertex2d(100, -100);
glVertex2d(0, -100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(100, -200);
glVertex2d(200, -200);
glVertex2d(200, -100);
glVertex2d(100, -100);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(200, -200);
glVertex2d(300, -200);
glVertex2d(300, -100);
glVertex2d(200, -100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(300, -200);
glVertex2d(400, -200);
glVertex2d(400, -100);
glVertex2d(300, -100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-400, -100);
glVertex2d(-300, -100);
glVertex2d(-300, 0);
glVertex2d(-400, 0);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-300, -100);
glVertex2d(-200, -100);
glVertex2d(-200, 0);
glVertex2d(-300, 0);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-200, -100);
glVertex2d(-100, -100);
glVertex2d(-100, 0);
glVertex2d(-200, 0);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-100, -100);
glVertex2d(0, -100);
glVertex2d(0, 0);
glVertex2d(-100, 0);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(0, -100);
glVertex2d(100, -100);
glVertex2d(100, 0);
glVertex2d(0, 0);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(100, -100);
glVertex2d(200, -100);
glVertex2d(200, 0);
glVertex2d(100, 0);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(200, -100);
glVertex2d(300, -100);
glVertex2d(300, 0);
glVertex2d(200, 0);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(300, -100);
glVertex2d(400, -100);
glVertex2d(400, 0);
glVertex2d(300, 0);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-400, 0);
glVertex2d(-300, 0);
glVertex2d(-300, 100);
glVertex2d(-400, 100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-300, 0);
glVertex2d(-200, 0);
glVertex2d(-200, 100);
glVertex2d(-300, 100);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-200, 0);
glVertex2d(-100, 0);
glVertex2d(-100, 100);
glVertex2d(-200, 100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-100, 0);
glVertex2d(0, 0);
glVertex2d(0, 100);
glVertex2d(-100, 100);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(0, 0);
glVertex2d(100, 0);
glVertex2d(100, 100);
glVertex2d(0, 100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(100, 0);
glVertex2d(200, 0);
glVertex2d(200, 100);
glVertex2d(100, 100);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(200, 0);
glVertex2d(300, 0);
glVertex2d(300, 100);
glVertex2d(200, 100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(300, 0);
glVertex2d(400, 0);
glVertex2d(400, 100);
glVertex2d(300, 100);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-400, 100);
glVertex2d(-300, 100);
glVertex2d(-300, 200);
glVertex2d(-400, 200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-300, 100);
glVertex2d(-200, 100);
glVertex2d(-200, 200);
glVertex2d(-300, 200);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-200, 100);
glVertex2d(-100, 100);
glVertex2d(-100, 200);
glVertex2d(-200, 200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-100, 100);
glVertex2d(0, 100);
glVertex2d(0, 200);
glVertex2d(-100, 200);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(0, 100);
glVertex2d(100, 100);
glVertex2d(100, 200);
glVertex2d(0, 200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(100, 100);
glVertex2d(200, 100);
glVertex2d(200, 200);
glVertex2d(100, 200);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(200, 100);
glVertex2d(300, 100);
glVertex2d(300, 200);
glVertex2d(200, 200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(300, 100);
glVertex2d(400, 100);
glVertex2d(400, 200);
glVertex2d(300, 200);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-400, 200);
glVertex2d(-300, 200);
glVertex2d(-300, 300);
glVertex2d(-400, 300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-300, 200);
glVertex2d(-200, 200);
glVertex2d(-200, 300);
glVertex2d(-300, 300);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-200, 200);
glVertex2d(-100, 200);
glVertex2d(-100, 300);
glVertex2d(-200, 300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-100, 200);
glVertex2d(0, 200);
glVertex2d(0, 300);
glVertex2d(-100, 300);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(0, 200);
glVertex2d(100, 200);
glVertex2d(100, 300);
glVertex2d(0, 300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(100, 200);
glVertex2d(200, 200);
glVertex2d(200, 300);
glVertex2d(100, 300);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(200, 200);
glVertex2d(300, 200);
glVertex2d(300, 300);
glVertex2d(200, 300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(300, 200);
glVertex2d(400, 200);
glVertex2d(400, 300);
glVertex2d(300, 300);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-400, 300);
glVertex2d(-300, 300);
glVertex2d(-300, 400);
glVertex2d(-400, 400);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-300, 300);
glVertex2d(-200, 300);
glVertex2d(-200, 400);
glVertex2d(-300, 400);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(-200, 300);
glVertex2d(-100, 300);
glVertex2d(-100, 400);
glVertex2d(-200, 400);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(-100, 300);
glVertex2d(0, 300);
glVertex2d(0, 400);
glVertex2d(-100, 400);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(0, 300);
glVertex2d(100, 300);
glVertex2d(100, 400);
glVertex2d(0, 400);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(100, 300);
glVertex2d(200, 300);
glVertex2d(200, 400);
glVertex2d(100, 400);
glEnd();

// #Block:

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(200, 300);
glVertex2d(300, 300);
glVertex2d(300, 400);
glVertex2d(200, 400);
glEnd();

// #Block:

glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(300, 300);
glVertex2d(400, 300);
glVertex2d(400, 400);
glVertex2d(300, 400);
glEnd();



    /* don't wait!
     * start processing buffered OpenGL routines
     */
    glFlush();
}

void init(void) {
    /* select clearing (background) color */
    glClearColor(0.25, 0.15, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-400, 400, -400, 400);
}

/*
 * Declare initial window size, position, and display mode
 * (single buffer and RGBA). Open window with "hello"
 * in its title bar. Call initialization routines.
 * Register callback function to display graphics.
 * Enter main loop and process events.
 */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(-400, -400);
    glutCreateWindow("Chess Board");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
