#include <stdio.h>
#include <GL/glut.h>

void init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
}

void drawObject ()
{
    glutWireIcosahedron();
}
void reshape (int w, int h)
{
    glViewport(0, 0, w, h);
}
void disp(void){
    glClear(GL_COLOR_BUFFER_BIT);
    drawObject();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(0, 0);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutCreateWindow("Project");

    glutDisplayFunc(disp);
    glutReshapeFunc(reshape);

    int vma = 0;
    printf("Hello, World!\n");
    scanf("%d", vma);
    return 0;
}
