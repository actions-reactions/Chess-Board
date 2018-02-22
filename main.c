//
//  main.cpp
//  assignment-2
//
//  Created by Priyo Mukul on 22/2/18.
//  Copyright © 2018 Priyo Mukul. All rights reserved.
//

#include <GL/gl.h>
#include <GL/glut.h>

// #include <GLUT/GLUT.h>
#include <stdio.h>

void display(void);
void sb(int, int, int);
void draw(int);
void init(void);


// Single square block
void sb(int x, int y, int c) {
    glBegin(GL_POLYGON);
    glVertex2d(x + 0, y + 0);
    glVertex2d(x + 100, y + 0);
    glVertex2d(x + 100, y + 100);
    glVertex2d(x + 0, y + 100);
    glEnd();
    
    
    printf("// #Block:\n\n");
    ( c == 1 ) ? printf("glColor3ub(255, 255, 255);\n") : printf("glColor3ub(0, 0, 0);\n");
    printf("glBegin(GL_POLYGON);\n");
    printf("glVertex2d(%d, %d);\n", x, y);
    printf("glVertex2d(%d, %d);\n", x + 100, y);
    printf("glVertex2d(%d, %d);\n", x + 100, y + 100);
    printf("glVertex2d(%d, %d);\n", x, y + 100);
    printf("glEnd();\n\n");
    
}

//Draws 2 lines of blocks starting with white and black
void draw(int z) {
    int i, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    
    for (i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            glColor3ub(255, 255, 255);
            sb(x1, y1 + (z-1) * 100, 1);
        } else {
            glColor3ub(0, 0, 0);
            sb(x1, y1 + (z-1) * 100, 0);
        }
        x1 = x1 + 100;
    }
    
    for (i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            glColor3ub(0, 0, 0);
            sb(x2, y2 + 100 + (z-1) * 100, 0);
        } else {
            glColor3ub(255, 255, 255);
            sb(x2, y2 + 100 + (z-1) * 100, 1);
        }
        x2 = x2 + 100;
    }
}

void display(void) {
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    
    /* draw white polygon (rectangle) with corners at
     * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
     */
    
    
    draw(1);    //For line 1-2
    draw(3);    //For line 3-4
    draw(5);    //For line 5-6
    draw(7);    //For line 7-8
    
    
    
    
    
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
    gluOrtho2D(0, 800, 0, 800);
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
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Chess Board");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}