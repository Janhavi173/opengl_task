// header files
#include<GL/freeglut.h>

// global variable declarations
BOOL bFullScreen = FALSE;

// Entry-point function
int main(int argc, char* argv[])
{
	// local function declarations
	int intialize(void);
	void resize(int, int);
	void display(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);
	void unintialize(void);

	// code
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Janhavi Silaskar");


	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(unintialize);

	glutMainLoop();


}

int initialize(void)
{
	// code
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

	return(0);
}

void resize(int width, int height)
{
	// code
	glViewport(0, 0, width, height);
}


	void display(void)
	{
		// Clear the color buffer with the background color
		glClear(GL_COLOR_BUFFER_BIT);

		glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
		glClear(GL_COLOR_BUFFER_BIT);

		glColor3f(1.0f, 0.5f, 0.0f); // Orange color

		glBegin(GL_TRIANGLES);//triangle 1
		glVertex3f(0.25f, 0.25f, 0.0f);  
		glVertex3f(-0.25f, 0.5f, 0.0f); 
		glVertex3f(-0.25f, 0.0f, 0.0f); 
		glEnd();
		
		glBegin(GL_TRIANGLES);//traingle 2
		glVertex3f(0.25f, -0.25f, 0.0f); 
		glVertex3f(-0.25f, 0.0f, 0.0f); 
		glVertex3f(-0.25f, -0.5f, 0.0f); 
		glEnd();

		glColor3f(0.6f, 0.3f, 0.1f); // Brown color

		glBegin(GL_TRIANGLES);
		glVertex3f(-0.25f, -0.5f, 0.0f);   
		glVertex3f(-0.28f, -0.9f, 0.0f);   
		glVertex3f(-0.22f, -0.9f, 0.0f);   
		glEnd();


		glutSwapBuffers();
	}



void keyboard(unsigned char key, int x, int y)
{
	// code
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':
		if (bFullScreen == FALSE)
		{
			glutFullScreen();
			bFullScreen = TRUE;
		}
		else
		{
			glutLeaveFullScreen();
			bFullScreen = FALSE;
		}
		break;
	default:
		break;
	}
}

void mouse(int button, int state, int x, int y)
{
	// code
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		glutLeaveMainLoop();
		break;
	default:
		break;
	}
}

void unintialize(void)
{
	//code
}
