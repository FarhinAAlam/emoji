#include <stdio.h>
#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>



void init (void)

{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-15,15,-15,15,10,0);

}

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++){

        float angle = 2.0f * 3.1416f * i/100;

        float x = rx*cosf(angle);
        float y = ry*sinf(angle);
        glVertex2f((x+cx),(y+cy));


    }
    glEnd();


}

void Halfcircle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=50;i++){

        float angle = 2.0f * 3.1416f * i/100;

        float x = rx*cosf(angle);
        float y = ry*sinf(angle);
        glVertex2f((x+cx),(y+cy));


    }
    glEnd();


}

void Display(void)

{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f( 1.0f,1.0f,0.0f);
    circle(12,12,0,0);//Face

    glColor3f(0.0f,0.0f,0.0f);
    Halfcircle(2.2,2.2,-4,4);//left eyebrow
    glColor3f(1.0f,1.0f,0.0f);
    Halfcircle(2.2,1.8,-4,3.5);//left eyebrow
    glColor3f(0.0f,0.5f,0.0f);
    Halfcircle(2.2,2.5,-4,2);//eyesdw

    glColor3f(0.0f,0.0f,0.0f);
    Halfcircle(2.2,2.2,4,4);//right eyebrow
    glColor3f(1.0f,1.0f,0.0f);
    Halfcircle(2.2,1.8,4,3.5);//right eyebrow

    glColor3f(0.0f,0.0f,0.0f);
    circle(2,2.2,-4,2);//left eye upper black part
    glColor3f(1.0f,1.0f,1.0f);
    circle(1,1,-4,1);//left eye white

    glColor3f(0.0f,0.0f,0.0f);
    circle(0.6,0.6,-4,1);//left eye middle white dot

    glColor3f(0.0f,0.5f,0.0f);
    Halfcircle(2.2,2.5,4,2);//eyesdwe

    glColor3f(0.0f,0.0f,0.0f);
    circle(2,2.2,4,2);

   glColor3f(1.0f,1.0f,1.0f);
    circle(1,1,4,1); //rightwte eye

    glColor3f(0.0f,0.0f,0.0f);
    circle(0.6,0.6,4,1);
//right eye middle white dot


    glColor3f(1.0f,0.0f,0.0f);
    Halfcircle(-5,-2,0,-5);//Mouth lower
    glColor3f(0.0f,0.0f,0.0f);
    Halfcircle(-5,-1.5,0,-5);//Mouth middle
        glColor3f(0.0f,0.0f,0.0f);  //nose
        Halfcircle(.5,5,-0,-3);

        glColor3f(0.1f,0.0f,0.0f);  //naakful
        circle(0.5,.6,1,-.6);

        glColor3f(1.0f,0.0f,0.0f);
    Halfcircle(-5,-0.6,0,-5);//Mouth upper
    glFlush ();

}




int main(int argc, char** argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(600,600);
    glutInitWindowPosition (100, 100);

    glutCreateWindow (" Farhina alam 172-15-9705");

    init ();

    glutDisplayFunc(Display);

    glutMainLoop();

    return 0;

}
