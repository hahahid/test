#include<windows.h>
#include<gl/glut.h>

void init(void);
void tampil (void);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;

int main (int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Hana L. Walingkas - 672018358");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void){
    glClearColor(70/255.0, 130/255.0, 180/255.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    //glDepthFunc(GL_LEQUAL);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);

}

void depan(void){
    ///depan
        ///1
    glBegin(GL_QUADS);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(-40.0, -25.0, 10.0);
    glVertex3f(-40.0, 30.0, 10.0);
    glVertex3f(0.0, 30.0, 10.0);
    glVertex3f(0.0, -25.0, 10.0);
    glEnd();
        ///2
    glBegin(GL_QUADS);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(0.0, -25.0, 20.0);
    glVertex3f(0.0, 30.0, 20.0);
    glVertex3f(30.0, 30.0, 20.0);
    glVertex3f(30.0, -25.0, 20.0);
    glEnd();
        ///segitiga
    glBegin(GL_POLYGON);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(-40.0, 30.0, 20.0);
    glVertex3f(-5.0, 65.0, 20.0);
    glVertex3f(30.0, 30.0, 20.0);
    glEnd();
    ///tiang
    glLineWidth(15.0);
    glBegin(GL_LINES);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(-39.0, -25.0, 59.0);
    glVertex3f(-39.0, 20.0, 59.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(29.0, -25.0, 59.0);
    glVertex3f(29.0, 20.0, 59.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(29.0, -25.0, 59.0);
    glVertex3f(29.0, -5.0, 59.0);
    glVertex3f(-39.0, -5.0, 59.0);
    glVertex3f(-39.0, -25.0, 59.0);
    glEnd();
}

void belakang (void){
    ///belakang
    glBegin(GL_QUADS);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(-40.0, -25.0, -60.0);
    glVertex3f(-40.0, 30.0, -60.0);
    glVertex3f(30.0, 30.0, -60.0);
    glVertex3f(30.0, -25.0, -60.0);
    glEnd();
    ///segitiga
    glBegin(GL_POLYGON);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(-40.0, 30.0, -60.0);
    glVertex3f(-5.0, 65.0, -60.0);
    glVertex3f(30.0, 30.0, -60.0);
    glEnd();
}

void kiri(void){
    //kiri
        ///1
    glBegin(GL_QUADS);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(-40.0, 30.0, 10.0);
    glVertex3f(-40.0, -25.0, 10.0);
    glVertex3f(-40.0, -25.0, -60.0);
    glVertex3f(-40.0, 30.0, -60.0);
    glEnd();
    ///2
    glBegin(GL_QUADS);
    glColor3f(238/255.0, 232/255.0, 170/255.0);
    glVertex3f(0.0, 30.0, 10.0);
    glVertex3f(0.0, -25.0, 10.0);
    glVertex3f(0.0, -25.0, 20.0);
    glVertex3f(0.0, 30.0, 20.0);
    glEnd();
}

void kanan(void){
    //kanan
    glBegin(GL_QUADS);
    glColor3f(255/255.0, 250/255.0, 205/255.0);
    glVertex3f(30.0, 30.0, 20.0);
    glVertex3f(30.0, -25.0, 20.0);
    glVertex3f(30.0, -25.0, -60.0);
    glVertex3f(30.0, 30.0, -60.0);
    glEnd();
}

void bawah(void){
    ///bawah
        ///1
    glBegin(GL_QUADS);
    glColor3f(238/255.0, 232/255.0, 170/255.0);
    glVertex3f(-40.0, -25.0, 10.0);
    glVertex3f(30.0, -25.0, 10.0);
    glVertex3f(30.0, -25.0, -60.0);
    glVertex3f(-40.0, -25.0, -60.0);
    glEnd();
        ///2
    glBegin(GL_QUADS);
    glColor3f(238/255.0, 232/255.0, 170/255.0);
    glVertex3f(0.0, -25.0, 20.0);
    glVertex3f(30.0, -25.0, 20.0);
    glVertex3f(30.0, -25.0, 10.0);
    glVertex3f(0.0, -25.0, 10.0);
    glEnd();
        ///3
    glBegin(GL_QUADS);
    glColor3f(238/255.0, 232/255.0, 170/255.0);
    glVertex3f(-40.0, 30.0, 20.0);
    glVertex3f(0.0, 30.0, 20.0);
    glVertex3f(0.0, 30.0, 10.0);
    glVertex3f(-40.0, 30.0, 10.0);
    glEnd();
        ///teras
    glBegin(GL_QUADS);
    glColor3f(238/255.0, 232/255.0, 170/255.0);
    glVertex3f(-40.0, -25.0, 20.0);
    glVertex3f(0.0, -25.0, 20.0);
    glVertex3f(0.0, -25.0, 10.0);
    glVertex3f(-40.0, -25.0, 10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(238/255.0, 232/255.0, 170/255.0);
    glVertex3f(-40.0, -25.0, 20.0);
    glVertex3f(30.0, -25.0, 20.0);
    glVertex3f(30.0, -25.0, 60.0);
    glVertex3f(-40.0, -25.0, 60.0);
    glEnd();
}

void atap(void){
    ///besar
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-50.0, 20.0, -70.0);
    glVertex3f(-5.0, 65.0, -70.0);
    glVertex3f(-5.0, 65.0, 30.0);
    glVertex3f(-50.0, 20.0, 30.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(40.0, 20.0, -70.0);
    glVertex3f(-5.0, 65.0, -70.0);
    glVertex3f(-5.0, 65.0, 30.0);
    glVertex3f(40.0, 20.0, 30.0);
    glEnd();
    ///kecil
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-40.0, 20.0, 20.0);
    glVertex3f(-5.0, 55.0, 20.0);
    glVertex3f(-5.0, 55.0, 60.0);
    glVertex3f(-40.0, 20.0, 60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(30.0, 20.0, 20.0);
    glVertex3f(-5.0, 55.0, 20.0);
    glVertex3f(-5.0, 55.0, 60.0);
    glVertex3f(30.0, 20.0, 60.0);
    glEnd();
}

void pintu(void){
    ///pintu
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(-2.0, -25.0, 10.0);
    glVertex3f(-2.0, 15.0, 10.0);
    glVertex3f(-13.0, 15.0, 10.0);
    glVertex3f(-13.0, -25.0, 10.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0/255.0, 0/255.0, 0/255.0);
    glVertex3f(-12.0, -8.0, 10.0);
    glVertex3f(-10.0, -8.0, 10.0);
    glEnd();
}

void jendela(void){
    ///jendela kecil
        ///garis horizontal
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(13.0, -10.0, 20.0);
    glVertex3f(13.0, 10.0, 20.0);
    glVertex3f(14.0, 10.0, 20.0);
    glVertex3f(14.0, -10.0, 20.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(17.0, -10.0, 20.0);
    glVertex3f(17.0, 10.0, 20.0);
    glVertex3f(16.0, 10.0, 20.0);
    glVertex3f(16.0, -10.0, 20.0);
    glEnd();
        ///vertikal
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(10, -3.0,20.0);
    glVertex3f(10, -4.0,20.0);
    glVertex3f(20, -3.0,20.0);
    glVertex3f(20, -4.0,20.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(10, 3.0,20.0);
    glVertex3f(10, 4.0,20.0);
    glVertex3f(20, 3.0,20.0);
    glVertex3f(20, 4.0,20.0);
    glEnd();
        ///kaca
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(11.0, -9.0, 20.0);
    glVertex3f(11.0, 9.0, 20.0);
    glVertex3f(19.0, 9.0, 20.0);
    glVertex3f(19.0, -9.0, 20.0);
    glEnd();
        ///frame
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(10.0, -10.0, 20.0);
    glVertex3f(10.0, 10.0, 20.0);
    glVertex3f(20.0, 10.0, 20.0);
    glVertex3f(20.0, -10.0, 20.0);
    glEnd();

    ///jendela besar
        ///garis horizontal
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(-14.0, 10.0,10.0);
    glVertex3f(-35.0, 10.0,10.0);
    glVertex3f(-35.0, 9.0,10.0);
    glVertex3f(-14.0, 9.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(-14.0, -10.0,10.0);
    glVertex3f(-35.0, -10.0,10.0);
    glVertex3f(-35.0, -9.0,10.0);
    glVertex3f(-14.0, -9.0,10.0);
    glEnd();
        ///vertikal
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(-17.0, 15.0,10.0);
    glVertex3f(-17.5, 15.0,10.0);
    glVertex3f(-17.5, -15.0,10.0);
    glVertex3f(-17.0, -15.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(-22.0, 15.0,10.0);
    glVertex3f(-21.5, 15.0,10.0);
    glVertex3f(-21.5, -15.0,10.0);
    glVertex3f(-22.0, -15.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(-27.0, 15.0,10.0);
    glVertex3f(-27.5, 15.0,10.0);
    glVertex3f(-27.5, -15.0,10.0);
    glVertex3f(-27.0, -15.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(-32.0, 15.0,10.0);
    glVertex3f(-31.5, 15.0,10.0);
    glVertex3f(-31.5,-15.0,10.0);
    glVertex3f(-32.0,-15.0,10.0);
    glEnd();
        ///kaca
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-15.0, -14.0, 10.0);
    glVertex3f(-15.0, 14.0, 10.0);
    glVertex3f(-24.0, 14.0, 10.0);
    glVertex3f(-24.0, -14.0, 10.0);
    glEnd();
        ///frame
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(-14.0, -15.0, 10.0);
    glVertex3f(-14.0, 15.0, 10.0);
    glVertex3f(-25.0, 15.0, 10.0);
    glVertex3f(-25.0, -15.0, 10.0);
    glEnd();
        ///kaca
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-24.0, -14.0, 10.0);
    glVertex3f(-24.0, 14.0, 10.0);
    glVertex3f(-34.0, 14.0, 10.0);
    glVertex3f(-34.0, -14.0, 10.0);
    glEnd();
        ///frame
    glBegin(GL_QUADS);
    glColor3f(184/255.0, 134/255.0, 11/255.0);
    glVertex3f(-25.0, -15.0, 10.0);
    glVertex3f(-25.0, 15.0, 10.0);
    glVertex3f(-35.0, 15.0, 10.0);
    glVertex3f(-35.0, -15.0, 10.0);
    glEnd();
}

void furniture(void){
    ///karpet
    glBegin(GL_QUADS);
    glColor3f(255/255.0, 160/255.0, 122/255.0);
    glVertex3f(-30.0, -25.0, 0.0);
    glVertex3f(-10.0, -25.0, 0.0);
    glVertex3f(-10.0, -25.0, -50.0);
    glVertex3f(-30.0, -25.0, -50.0);
    glEnd();

    ///lukisan
    glBegin(GL_QUADS);
    glColor3f(176/255.0, 196/255.0, 222/255.0);
    glVertex3f(-20.0, 15.0, -60.0);
    glVertex3f(0.0, 15.0, -60.0);
    glVertex3f(0.0, 0.0, -60.0);
    glVertex3f(-20.0, 0.0, -60.0);
    glEnd();
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glColor3f(0/255.0, 0/255.0, 0/255.0);
    glVertex3f(-20.0, 15.0, -60.0);
    glVertex3f(0.0, 15.0, -60.0);
    glVertex3f(0.0, 0.0, -60.0);
    glVertex3f(-20.0, 0.0, -60.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(34/255.0, 139/255.0, 34/255.0);
    glVertex3f(-20.0, 0.0, -60.0);
    glVertex3f(-15.0, 10.0, -60.0);
    glVertex3f(-10.0, 0.0, -60.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(34/255.0, 139/255.0, 34/255.0);
    glVertex3f(-10.0, 0.0, -60.0);
    glVertex3f(-5.0, 10.0, -60.0);
    glVertex3f(0.0, 0.0, -60.0);
    glEnd();

    ///rak
    glBegin(GL_POLYGON);
    glColor3f(218/255.0, 165/255.0, 32/255.0);
    glVertex3f(20.0, -15.0, -45.0);
    glVertex3f(30.0, -15.0, -45.0);
    glVertex3f(30.0, -15.0, -15.0);
    glVertex3f(20.0, -15.0, -15.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(218/255.0, 165/255.0, 32/255.0);
    glVertex3f(20.0, -15.0, -45.0);
    glVertex3f(20.0, -25.0, -45.0);
    glVertex3f(20.0, -25.0, -15.0);
    glVertex3f(20.0, -15.0, -15.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(218/255.0, 165/255.0, 32/255.0);
    glVertex3f(20.0, -25.0, -45.0);
    glVertex3f(30.0, -25.0, -45.0);
    glVertex3f(30.0, -25.0, -15.0);
    glVertex3f(20.0, -25.0, -15.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(218/255.0, 165/255.0, 32/255.0);
    glVertex3f(20.0, -15.0, -45.0);
    glVertex3f(30.0, -15.0, -45.0);
    glVertex3f(30.0, -25.0, -45.0);
    glVertex3f(20.0, -25.0, -45.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(218/255.0, 165/255.0, 32/255.0);
    glVertex3f(20.0, -15.0, -15.0);
    glVertex3f(30.0, -15.0, -15.0);
    glVertex3f(30.0, -25.0, -15.0);
    glVertex3f(20.0, -25.0, -15.0);
    glEnd();

    ///televisi
    glBegin(GL_POLYGON);
    glColor3f(192/255.0, 192/255.0, 192/255.0);
    glVertex3f(25.0, 5.0, -40.0);
    glVertex3f(25.0, -15.0, -40.0);
    glVertex3f(25.0, -15.0, -20.0);
    glVertex3f(25.0, 5.0, -20.0);
    glEnd();

    ///meja
    glBegin(GL_POLYGON);
    glColor3f(240/255.0, 230/255.0, 140/255.0);
    glVertex3f(-27.0, -18.0, -45.0);
    glVertex3f(-13.0, -18.0, -45.0);
    glVertex3f(-13.0, -18.0, -15.0);
    glVertex3f(-27.0, -18.0, -15.0);
    glEnd();
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(240/255.0, 230/255.0, 140/255.0);
    glVertex3f(-27.0, -18.0, -45.0);
    glVertex3f(-27.0, -25.0, -45.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(240/255.0, 230/255.0, 140/255.0);
    glVertex3f(-27.0, -18.0, -15.0);
    glVertex3f(-27.0, -25.0, -15.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(240/255.0, 230/255.0, 140/255.0);
    glVertex3f(-13.0, -18.0, -45.0);
    glVertex3f(-13.0, -25.0, -45.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(240/255.0, 230/255.0, 140/255.0);
    glVertex3f(-13.0, -18.0, -15.0);
    glVertex3f(-13.0, -25.0, -15.0);
    glEnd();

}

void tampil(void){
    if(is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);

    pintu();
    jendela();
    depan();
    belakang();
    kanan();
    kiri();
    bawah();
    atap();

    furniture();

    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y){
    /// > = putar kanan
    /// < = putar kiri
    /// a = rotasi kiri
    /// s = rotasi kanan
    /// + = maju
    /// - = mundur
    /// 2 = geser kanan
    /// 1 = geser kiri
    /// 3 = geser atas
    /// 4 = geser bawah
    /// 5 = putar bawah
    /// 6 = putar atas
    /// 0 = transparan

    switch (key)
    {
    case '+':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case '-':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case '1':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
    case '2':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case '3':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '4':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '5':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '>':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '<':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case 'a':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case 's':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '0':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;

void identity(){
    glLoadIdentity();
       gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
       glRotatef(xrot, 1.0f,0.0f, 0.0f);
       glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}

void idle(){
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y){
    identity();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();
    }

}

void ukuran(int lebar, int tinggi){
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
