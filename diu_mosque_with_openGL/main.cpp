#include<windows.h>
#include <GL/glut.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}


void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    glColor3f(0.9411, 0.6784, 0.1058);

    // Main Floor Design
    glBegin(GL_POLYGON);

    glVertex2i(10, 0); //a->b
    glVertex2i(90, 0);

    glVertex2i(90, 0);
    glVertex2i(90, 3);//b->c

    glVertex2i(90, 3);
    glVertex2i(10, 3);//c->d

    glVertex2i(10, 3);
    glVertex2i(10, 0);//a->a

    glEnd();


    glColor3f(0.6705, 0.6862, 0.6313);
    // Main Body of Mosque
    glBegin(GL_POLYGON);

    glVertex2i(25, 3);
    glVertex2i(75, 3);

    glVertex2i(75, 3);
    glVertex2i(95, 75);

    glVertex2i(95, 75);
    glVertex2i(5, 75);

    glVertex2i(5, 75);
    glVertex2i(25, 3);
    glEnd();

//Column Bar Design for main body
    float j;
    for(j=0;j<90;j+=5){

            glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);

            glVertex2f(5+j, 3);
            glVertex2f(5+j+0.1, 3);
            glVertex2f(5+j+0.1, 75);
            glVertex2f(5+j, 75);
            glEnd();
    }

//Row Bar Design for main body
float k;
for(k=0;k<90;k+=7){

        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_POLYGON);

        glVertex2f(5, 3+k);
        glVertex2f(120,3+k+0.1);
        glVertex2f(5, 3+k+0.1);
        glVertex2f(5, 3+k);
        glEnd();
}

    // Second Celling Design
    glColor3f(54.0 / 255.0, 182.0 / 255.0, 73.0 / 255.0);
    glBegin(GL_POLYGON);

    glVertex2i(2, 75);
    glVertex2i(98, 75);

    glVertex2i(98, 75);
    glVertex2i(98, 82);

    glVertex2i(98, 82);
    glVertex2i(2, 82);

    glVertex2i(2, 82);
    glVertex2i(2, 75);
    glEnd();


    // Front Side Windows with glass design

    int i;
    for(i=0;i<44;i+=2){

            glColor3f(119.0 / 255.0, 35.0 / 255.0, 1.0 / 255.0);
            glBegin(GL_POLYGON);

            glVertex2f(28+i, 3);
            glVertex2f(29+i, 3);

            glVertex2f(29+i, 3);
            glVertex2f(29+i, 50);

            glVertex2f(29+i, 50);
            glVertex2i(28+i,50);

            glVertex2f(28+i,50);
            glVertex2f(28+i, 3);
            glEnd();

            glColor3f(23.0 / 255.0, 33.0 / 255.0, 35.0 / 255.0);
                // Main Floor Design
                glBegin(GL_POLYGON);

                glVertex2f(29+i, 3);
                glVertex2f(30+i, 3);

                glVertex2f(30+i, 3);
                glVertex2f(30+i,50);

                glVertex2f(30+i, 50);
                glVertex2i(29+i,50);

                glVertex2f(29+i,50);
                glVertex2f(29+i, 3);
                glEnd();
    }

    //border 1 member body

    glColor3f(119.0 / 255.0, 35.0 / 255.0, 1.0 / 255.0);
    glBegin(GL_POLYGON);

    glVertex2f(28, 42);
    glVertex2f(72,42);

    glVertex2f(72, 42);
    glVertex2f(72, 42.5);

    glVertex2f(72, 42.5);
    glVertex2f(28, 42.5);

    glVertex2f(28, 42.5);
    glVertex2f(28, 42);

    glEnd();
    //border 2 member body

    glColor3f(119.0 / 255.0, 35.0 / 255.0, 1.0 / 255.0);
    glBegin(GL_POLYGON);

    glVertex2f(28, 28);
    glVertex2f(72, 28);

    glVertex2f(72, 28);
    glVertex2f(72, 28.5);

    glVertex2f(72, 28.5);
    glVertex2f(28, 28.5);

    glVertex2f(28, 28.5);
    glVertex2f(28, 28);

    glEnd();
    //border 2 member body

    glColor3f(119.0 / 255.0, 35.0 / 255.0, 1.0 / 255.0);
    glBegin(GL_POLYGON);

    glVertex2f(28, 14);
    glVertex2f(72, 14);

    glVertex2f(72, 14);
    glVertex2f(72, 14.5);

    glVertex2f(72, 14.5);
    glVertex2f(28, 14.5);

    glVertex2f(28, 14.5);
    glVertex2f(28, 14);

    glEnd();


    // Mosque Member White Border
    glColor3f(175.0 / 255.0, 182.0 / 255.0, 197.0 / 255.0);
    glBegin(GL_POLYGON);

    glVertex2i(43, 3);
    glVertex2i(57, 3);

    glVertex2i(57, 3);
    glVertex2i(57, 25);

    glVertex2i(57, 25);
    glVertex2i(43, 25);

    glVertex2i(43, 25);
    glVertex2i(43, 3);
    glEnd();

    // Mosque Top Glass Green Color
    glColor3f(5.0 / 255.0, 1.0 / 255.0, 74.0 / 255.0);
    glBegin(GL_POLYGON);
    glVertex2f(28,59);
    glVertex2f(72,59);

    glVertex2f(72,59);
    glVertex2f(72,68);

    glVertex2f(72,68);
    glVertex2f(28,68);

    glVertex2f(28,68);
    glVertex2f(28,59);
    glEnd();


//Most Top Of Celling Blud Color
    glColor3f(9.0 / 255.0, 80.0 / 255.0, 158.0 / 255.0);
    // Mosque Top Lig Ton
    glBegin(GL_POLYGON);
    glVertex2f(25,82);
    glVertex2f(75,82);

    glVertex2f(75,82);
    glVertex2f(72,85);

    glVertex2f(72,85);
    glVertex2f(28,85);

    glVertex2f(28,85);
    glVertex2f(25,82);

    glEnd();



//HEHRAB Design
    glColor3f(9.0 / 255.0, 80.0 / 255.0, 158.0 / 255.0);
    glBegin(GL_POLYGON);

    glVertex2i(46, 3);
    glVertex2i(54, 3);
    glVertex2i(54, 15);
    glVertex2i(46, 15);
    glEnd();


    // Mehrab Top Design (Triangle)
    glColor3f(9.0 / 255.0, 80.0 / 255.0, 158.0 / 255.0);
    glBegin(GL_TRIANGLES);

    glVertex2i(46, 15);
    glVertex2i(54, 15);
    glVertex2i(50, 20);

    glEnd();


    glFlush();	// Process all OpenGL routines
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	// Set display mode

    glutInitWindowPosition(300, 50);				// Set window position
    glutInitWindowSize(1000, 600);					// Set window size
    glutCreateWindow("DIU Central Mosque - Team Apoolio");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(drawShapes);		// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
