//
//  main.cpp
//  graphicsProj
//
//  Created by Ahmed Abdalaziz on 18.11.22.
//
#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <GLUT/GLUT.h>
#include <OpenGL/gl.h>

void Display(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POINTS);
    glVertex3f(100.0f, 100.0f, 0.0f);
    glVertex3f(200.0f, 100.0f, 0.0f);
    glEnd();
    
    glFlush();

}

int main(int argc, char** argr) {
    glutInit(&argc, argr);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Air Hockey");
    glutDisplayFunc(Display);
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glPointSize(9.0);
    glLineWidth(9.0);
    gluOrtho2D(0.0, 1000.0, 0.0, 600.0);
    glutMainLoop();
    return 0;
}

