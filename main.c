//
//  main.cpp
//  ChessBoard
//
//  Created by Priyo Mukul on 24/2/18.
//  Copyright © 2018 Priyo Mukul. All rights reserved.
//

// for mac os
#include <GLUT/GLUT.h>

// for windows
//#include <GL/gl.h>
//#include <GL/glut.h>

#include <stdio.h>

void display(void);
void init(void);
void boardBlock(int, int, int, int);

void boardBlock(int x, int y, int c, int bn){
    ( c == 1 ) ? glColor3ub(255, 255, 255) : glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(x, y);
    glVertex2d(x + 150, y);
    glVertex2d(x + 150, y - 150);
    glVertex2d(x, y - 150);
    glEnd();
    
    int ax = x + 150;
    int ay = y - 150;
    
    printf("// Block #%d\n\n", bn);
    ( c == 1 ) ? printf("glColor3ub(255, 255, 255);\n") : printf("glColor3ub(0, 0, 0);\n");
    printf("glBegin(GL_POLYGON);\n");
    printf("glVertex2d(%d, %d);\n", x, y);
    printf("glVertex2d(%d, %d);\n", ax, y);
    printf("glVertex2d(%d, %d);\n", ax, ay);
    printf("glVertex2d(%d, %d);\n", x, ay);
    printf("glEnd();\n\n");
}

void display(void) {
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
    int x = 0, y = 1200, c = 1, bn = 1;
    for(int i = 1; i <= 8; i++) {
        for(int j = 1; j <= 8; j++) {
            boardBlock(x, y, c, bn);
            x += 150;
            ( c == 1 ) ? c = 0 : c = 1;
            bn++;
        }
        x = 0;
        ( c == 1 ) ? c = 0 : c = 1;
        y = y - 150;
    }
    
    glFlush ();
}
void init (void) {
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1200, 0, 1200);
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
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1200, 1200);
    glutInitWindowPosition (100, 100);
    glutCreateWindow("Chess Board");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}