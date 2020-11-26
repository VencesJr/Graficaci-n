#include <GL/glut.h>

typedef int dim3[3];

//////////////////////////////
dim3 patas[32] = {{-2,0,-2},{2,0,-2},{2,0,2},{-2,0,2},
{-1,1,-1},{1,1,-1},{1,1,1},{-1,1,1},

{6,0,-2},{10,0,-2},{10,0,2},{6,0,2},
{7,1,-1},{9,1,-1},{9,1,1},{7,1,1},
	
{-2,0,-14},{2,0,-14},{2,0,-10},{-2,0,-10},
{-1,1,-13},{1,1,-13},{1,1,-11},{-1,1,-11},
	
{6,0,-14},{10,0,-14},{10,0,-10},{6,0,-10},
{7,1,-13},{9,1,-13},{9,1,-11},{7,1,-11}};
//////////////////////////////

////////////////////////////
dim3 patas2[32] = {{7,1,-13},{9,1,-13},{9,1,-11},{7,1,-11},
{7,4,-15},{9,4,-15},{9,4,-13},{7,4,-13},
	
{-1,1,-13},{1,1,-13},{1,1,-11},{-1,1,-11},
{-1,4,-15},{1,4,-15},{1,4,-13},{-1,4,-13},
	
{-1,1,-1},{1,1,-1},{1,1,1},{-1,1,1},
{-1,4,-1},{1,4,-1},{1,4,1},{-1,4,1},
	
{7,1,-1},{9,1,-1},{9,1,1},{7,1,1},
{7,4,-1},{9,4,-1},{9,4,1},{7,4,1}};
///////////////////////////

//////////////////////////
dim3 patas3[32] = {{7,4,-15},{9,4,-15},{9,4,-13},{7,4,-13},
{7,7,-13},{9,7,-13},{9,7,-11},{7,7,-11},

{-1,4,-15},{1,4,-15},{1,4,-13},{-1,4,-13},
{-1,7,-13},{1,7,-13},{1,7,-11},{-1,7,-11},

{-1,4,-1},{1,4,-1},{1,4,1},{-1,4,1},
{-2,10,-2},{2,10,-2},{2,10,2},{-2,10,2},

{7,4,-1},{9,4,-1},{9,4,1},{7,4,1},
{6,10,-2},{10,10,-2},{10,10,2},{6,10,2}};
//////////////////////////

/////////////////////////
dim3 patas4[16] = {{-1,7,-13},{1,7,-13},{1,7,-11},{-1,7,-11},
{-2,10,-14},{2,10,-14},{2,10,-10},{-2,10,-10},

{7,7,-13},{9,7,-13},{9,7,-11},{7,7,-11},
{6,10,-14},{10,10,-14},{10,10,-10},{6,10,-10}};
////////////////////////////

dim3 joroba[8] = {{10,12,-14},{10,12,2},{-2,12,2},{-2,12,-14},
{7,15,-9},{7,15,-3},{1,15,-3},{1,15,-9}};
//////////////////////////

dim3 cuello[10] = {{-2,12,2},{10,12,2},{10,9,2},{4,7,2},{-2,9,2},
{2,11,4},{6,11,4},{6,9,4},{4,9,4},{2,9,4}};
//////////////////////////

dim3 cola[10] = {{-2,12,-14},{10,12,-14},{10,9,-14},{4,7,-14},{-2,9,-14},
{2,11,-16},{6,11,-16},{6,9,-16},{4,9,-16},{2,9,-16}};

dim3 cola2[8] = {{2,11,-16},{6,11,-16},{6,9,-16},{2,9,-16},
{3,6,-18},{5,6,-18},{5,5,-18},{3,5,-18}};
/////////////////////

dim3 cuelloo[8] = {{6,9,6},{6,11,4},{2,11,4},{2,9,6},
{5,16,8},{5,16,6},{3,16,6},{3,16,8}};
//////////////

dim3 cabeza[8] = {{5,16,11},{5,16,6},{3,16,6},{3,16,11},
{5,18,11},{5,18,6},{3,18,6},{3,18,11}};

void init(void) {
	
	glClearColor(0.4,0.69,1.0,0.0);	
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(5,1.3,1,0,0,0,0,1,0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-20,25,-10,25,-50,60);
	//gluPerspective(60, 2, 1, 12);
}

void dibujaCabeza(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
		glColor3f(0.482,0.341,0.121);
		glVertex3iv(cabeza[a]);
		glColor3f(0.827,0.556,0.011);//
		glVertex3iv(cabeza[b]);		
		glVertex3iv(cabeza[c]);
		glColor3f(0.482,0.341,0.121);
		glVertex3iv(cabeza[d]);
	glEnd();
	
}

void dibujaPatas(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.372,0.266,0.101);
	glVertex3iv(patas[a]);
	glVertex3iv(patas[b]);
	glColor3f(0.482,0.341,0.121);
	glVertex3iv(patas[c]);
	glVertex3iv(patas[d]);
	glEnd();
	
}

void dibujaPatas2(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.482,0.341,0.121);
	glVertex3iv(patas2[a]);
	glVertex3iv(patas2[b]);
	glColor3f(0.827,0.556,0.011);
	glVertex3iv(patas2[c]);
	glVertex3iv(patas2[d]);
	glEnd();
	
}

void dibujaPatas3(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
	
	glColor3f(0.827,0.556,0.011);
	glVertex3iv(patas3[a]);
	glVertex3iv(patas3[b]);	
	glColor3f(0.482,0.341,0.121);
	glVertex3iv(patas3[c]);
	glVertex3iv(patas3[d]);
	glEnd();
	
}

void dibujaPatas4(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.482,0.341,0.121);
	glVertex3iv(patas4[a]);
	glVertex3iv(patas4[b]);	
	glColor3f(0.827,0.556,0.011);
	glVertex3iv(patas4[c]);
	glVertex3iv(patas4[d]);
	glEnd();
	
}

void dibujaJoroba(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);	
	glVertex3iv(joroba[a]);
	glVertex3iv(joroba[b]);
	glColor3f(0.372,0.266,0.101);
	glVertex3iv(joroba[c]);
	glVertex3iv(joroba[d]);
	glEnd();
}

void dibujaCuello(int a, int b, int c, int d, int e) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
		glVertex3iv(cuello[a]);
		glVertex3iv(cuello[b]);
		glVertex3iv(cuello[c]);
		glColor3f(0.372,0.266,0.101);
		glVertex3iv(cuello[d]);
		glVertex3iv(cuello[e]);
	glEnd();
}

void dibujaCuello2(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3iv(cuello[a]);
	glColor3f(0.372,0.266,0.101);
	glVertex3iv(cuello[b]);	
	glVertex3iv(cuello[c]);
	glColor3f(0.372,0.266,0.101);
	glVertex3iv(cuello[d]);	
	glEnd();
}

void dibujaCola(int a, int b, int c, int d, int e) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3iv(cola[a]);
	glVertex3iv(cola[b]);
	glVertex3iv(cola[c]);
	glColor3f(0.372,0.266,0.101);
	glVertex3iv(cola[d]);
	glVertex3iv(cola[e]);
	glEnd();
}

void dibujaCola2(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3iv(cola[a]);
	glColor3f(0.372,0.266,0.101);
	glVertex3iv(cola[b]);	
	glVertex3iv(cola[c]);
	glColor3f(0.372,0.266,0.101);
	glVertex3iv(cola[d]);	
	glEnd();
}

void dibujaCola3(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
		glColor3f(0.827,0.556,0.011);		
		glVertex3iv(cola2[a]);
		glVertex3iv(cola2[b]);
		glColor3f(0.372,0.266,0.101);
		glVertex3iv(cola2[c]);
		glVertex3iv(cola2[d]);
	glEnd();
}

void dibujaCuelloo(int a, int b, int c, int d) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.482,0.341,0.121);
	glVertex3iv(cuelloo[a]);
	glVertex3iv(cuelloo[b]);	
	glColor3f(0.827,0.556,0.011);
	glVertex3iv(cuelloo[c]);
	glVertex3iv(cuelloo[d]);
	glEnd();
	
}

void Cubo3DQUADS(void) {
	double j = -1;
	int b = 0;
	glMatrixMode(GL_MODELVIEW);
	
	glutInitDisplayMode(GL_DEPTH);
	
	for (double i = 0; i <= 360; i+=1) {
		if (j >= 1) {
			b = 1;
		}
		if (j <= -1) {
			b = 0;
		}
		
		if (b == 0) {
			j+=0.2;
		} else {
			j-=0.2;
		}
		glRotated(i,0,1,0);
		glTranslated(1,-1,1);  
		
		glClear(GL_DEPTH_BUFFER_BIT);
		
		glEnable(GL_DEPTH_TEST);
		
		glClear(GL_COLOR_BUFFER_BIT);
		
		glTranslated(0,0,j);
		//// Pata enfrente izq ~~~~~~~~~~		
		dibujaPatas(0,1,2,3); //abajo
		dibujaPatas(0,1,5,4); //atras
		dibujaPatas(0,3,7,4); //Izquierda
		dibujaPatas(1,2,6,5); //Derecha
		dibujaPatas(4,5,6,7); //Arriba		
		dibujaPatas(3,2,6,7); //frente
		
		/////// delante izq ~~~~~~~~~~
		dibujaPatas2(16,17,18,19); //abajo
		dibujaPatas2(16,17,21,20); //atras
		dibujaPatas2(16,19,23,20); //Izquierda
		dibujaPatas2(17,18,22,21); //Derecha
		dibujaPatas2(20,21,22,23); //Arriba
		dibujaPatas2(19,18,22,23); //frente
		
		/////// delante izq ~~~~~~~~~~		
		dibujaPatas3(16,17,18,19); //abajo				
		dibujaPatas3(16,17,21,20); //atras
		dibujaPatas3(16,19,23,20); //Izquierda
		dibujaPatas3(17,18,22,21); //Derecha
		dibujaPatas3(20,21,22,23); //Arriba				
		dibujaPatas3(19,18,22,23); //frente
		
		glTranslated(00,0,-j);
		
		glTranslated(00,0,-j);
		/////// Pata enfente der ~~~~~~~~~~		
		dibujaPatas(8,9,10,11); //abajo
		dibujaPatas(8,9,13,12); //atras	
		dibujaPatas(8,11,14,12); //Izquierda
		dibujaPatas(9,10,14,13); //Derecha
		dibujaPatas(12,13,14,15); //Arriba
		dibujaPatas(11,10,14,15); //frente
		
		/////// delante der ~~~~~~~~~~		
		dibujaPatas2(24,25,26,27); //abajo
		dibujaPatas2(24,25,29,28); //atras
		dibujaPatas2(24,27,31,28); //Izquierda
		dibujaPatas2(25,26,30,29); //Derecha
		dibujaPatas2(28,29,30,31); //Arriba
		dibujaPatas2(27,26,30,31); //frente
		
		/////// delante der ~~~~~~~~~~		
		dibujaPatas3(24,25,26,27); //abajo
		dibujaPatas3(24,25,29,28); //atras
		dibujaPatas3(24,27,31,28); //Izquierda
		dibujaPatas3(25,26,30,29); //Derecha
		dibujaPatas3(28,29,30,31); //Arriba
		dibujaPatas3(27,26,30,31); //frente
		
		glTranslated(00,0,j);
		
		glTranslated(00,0,-j);
		/////// Pata atrás izq ~~~~~~~~~~		
		dibujaPatas(16,17,18,19); //abajo				
		dibujaPatas(16,17,21,20); //atras
		dibujaPatas(16,19,23,20); //Izquierda
		dibujaPatas(17,18,22,21); //Derecha
		dibujaPatas(20,21,22,23); //Arriba				
		dibujaPatas(19,18,22,23); //frente
		
		/////// atrás izq ~~~~~~~~~~		
		dibujaPatas2(8,9,10,11); //abajo
		dibujaPatas2(8,9,13,12); //atras
		dibujaPatas2(8,11,14,12); //Izquierda
		dibujaPatas2(9,10,14,13); //Derecha
		dibujaPatas2(12,13,14,15); //Arriba
		dibujaPatas2(11,10,14,15); //frente
		
		/////// atrás izq ~~~~~~~~~~		
		dibujaPatas3(8,9,10,11); //abajo
		dibujaPatas3(8,9,13,12); //atras	
		dibujaPatas3(8,11,14,12); //Izquierda
		dibujaPatas3(9,10,14,13); //Derecha
		dibujaPatas3(12,13,14,15); //Arriba
		dibujaPatas3(11,10,14,15); //frente
		
		//// Atrás izq arriba ~~~~~~~~~~		
		dibujaPatas4(0,1,2,3); //abajo
		dibujaPatas4(0,1,5,4); //atras
		dibujaPatas4(0,3,7,4); //Izquierda
		dibujaPatas4(1,2,6,5); //Derecha
		dibujaPatas4(4,5,6,7); //Arriba		
		dibujaPatas4(3,2,6,7); //frente
		
		glTranslated(00,0,j);
		
		glTranslated(00,0,j);
		/////// Pata atrás der ~~~~~~~~~~		
		dibujaPatas(24,25,26,27); //abajo
		dibujaPatas(24,25,29,28); //atras
		dibujaPatas(24,27,31,28); //Izquierda
		dibujaPatas(25,26,30,29); //Derecha
		dibujaPatas(28,29,30,31); //Arriba
		dibujaPatas(27,26,30,31); //frente
		////////////////
		
		////////// Patas, parte superior
		//// atras der ~~~~~~~~~~		
		dibujaPatas2(0,1,2,3); //abajo
		dibujaPatas2(0,1,5,4); //atras
		dibujaPatas2(0,3,7,4); //Izquierda
		dibujaPatas2(1,2,6,5); //Derecha
		dibujaPatas2(4,5,6,7); //Arriba
		dibujaPatas2(3,2,6,7); //frente
		////////////////
		
		////////// Parte superior patas
		//// atrás der ~~~~~~~~~~
		dibujaPatas3(0,1,2,3); //abajo
		dibujaPatas3(0,1,5,4); //atras
		dibujaPatas3(0,3,7,4); //Izquierda
		dibujaPatas3(1,2,6,5); //Derecha
		dibujaPatas3(4,5,6,7); //Arriba
		dibujaPatas3(3,2,6,7); //frente
		
		/////// Atrás der arriba ~~~~~~~~~~		
		dibujaPatas4(8,9,10,11); //abajo
		dibujaPatas4(8,9,13,12); //atras	
		dibujaPatas4(8,11,14,12); //Izquierda
		dibujaPatas4(9,10,14,13); //Derecha
		dibujaPatas4(12,13,14,15); //Arriba
		dibujaPatas4(11,10,14,15); //frente
		glTranslated(00,0,-j);
		
		//////// cuerpo ~~~~~~~~		
		glColor3f(0.827,0.556,0.011);
		glBegin(GL_POLYGON);
			glVertex3i(10,12,2);
			glVertex3i(10,12,-14);
			glColor3f(0.482,0.341,0.121);
			glVertex3i(10,9,-14);
			glVertex3i(10,9,2);
		glEnd();
		
		glColor3f(0.827,0.556,0.011);
		glBegin(GL_POLYGON);
			glVertex3i(-2,12,-14);
			glVertex3i(-2,12,2);
			glColor3f(0.482,0.341,0.121);
			glVertex3i(-2,9,2);
			glVertex3i(-2,9,-14);
		glEnd();
		
		glBegin(GL_POLYGON);
			glColor3f(0.482,0.341,0.121);
			glVertex3i(4,7,-14);
			glColor3f(0.827,0.556,0.011);
			glVertex3i(10,9,-14);
			glVertex3i(10,9,2);
			glColor3f(0.482,0.341,0.121);
			glVertex3i(4,7,2);
		glEnd();
		
		glBegin(GL_POLYGON);
			glColor3f(0.482,0.341,0.121);
			glVertex3i(4,7,-14);
			glColor3f(0.827,0.556,0.011);
			glVertex3i(-2,9,-14);
			glVertex3i(-2,9,2);
			glColor3f(0.482,0.341,0.121);
			glVertex3i(4,7,2);
		glEnd();
		
		//// joroba ~~~~~~~~~~		
		dibujaJoroba(0,1,2,3); //abajo
		dibujaJoroba(0,1,5,4); //atras
		dibujaJoroba(0,3,7,4); //Izquierda
		dibujaJoroba(1,2,6,5); //Derecha
		dibujaJoroba(4,5,6,7); //Arriba		
		dibujaJoroba(3,2,6,7); //frente
		
		glTranslated(4,13.5,-6);
		glutSolidSphere(4,40,40);
		glTranslated(-4,-13.5,6);
		
		////// cuello ~~~~~~~~~~		
		dibujaCuello(0,1,2,3,4);		
		dibujaCuello2(0,1,6,5);
		dibujaCuello2(1,2,7,6);
		dibujaCuello2(0,5,9,4);
		dibujaCuello2(4,9,8,3);
		dibujaCuello2(2,7,8,3);
		dibujaCuello(5,6,7,8,9);
		
		///////// Cola ~~~~~
		dibujaCola(0,1,2,3,4);		
		dibujaCola2(0,1,6,5);
		dibujaCola2(1,2,7,6);
		dibujaCola2(0,5,9,4);
		dibujaCola2(4,9,8,3);
		dibujaCola2(2,7,8,3);
		dibujaCola(5,6,7,8,9);
		
		dibujaCola3(0,1,2,3); //abajo
		dibujaCola3(0,1,5,4); //atras
		dibujaCola3(0,3,7,4); //Izquierda
		dibujaCola3(1,2,6,5); //Derecha
		dibujaCola3(4,5,6,7); //Arriba		
		dibujaCola3(3,2,6,7); //frente
		
		////// cuello arriba ~~~~~
		glBegin(GL_POLYGON);
		glColor3f(0.827,0.556,0.011);
			glVertex3i(6,9,6);
			glVertex3i(6,9,4);
			glVertex3i(2,9,4);
			glVertex3i(2,9,6);
		glEnd();
		
		dibujaCuelloo(0,1,2,3); //abajo
		dibujaCuelloo(0,1,5,4); //atras
		dibujaCuelloo(0,3,7,4); //Izquierda
		dibujaCuelloo(1,2,6,5); //Derecha
		dibujaCuelloo(4,5,6,7); //Arriba		
		dibujaCuelloo(3,2,6,7); //frente
				
		glBegin(GL_POLYGON);
		glColor3f(0.482,0.341,0.121);
			glVertex3i(2,9,6);
			glVertex3i(2,9,4);
			glVertex3i(2,11,4);
		glEnd();
		
		glBegin(GL_POLYGON);
			glColor3f(0.482,0.341,0.121);
			glVertex3i(6,9,6);
			glVertex3i(6,9,4);
			glVertex3i(6,11,4);
		glEnd();
		
		///////// Cabeza ~~~~~+
		dibujaCabeza(0,1,2,3); //abajo
		dibujaCabeza(0,1,5,4); //atras
		dibujaCabeza(0,3,7,4); //Izquierda
		dibujaCabeza(1,2,6,5); //Derecha
		dibujaCabeza(4,5,6,7); //Arriba		
		dibujaCabeza(3,2,6,7); //frente
		
		///// Piso
		glBegin(GL_POLYGON);
		glColor3f(0.87,0.78,0.24);
			glVertex3i(-4,0,4);
			glVertex3i(12,0,4);
			glVertex3i(12,0,-16);
			glVertex3i(-4,0,-16);
		glEnd();
		
		
		glFlush();
		
		glTranslated(-1,1,-1);
		glRotated(-i,0,1,0);
		
		Sleep(20);
		
		glDisable(GL_DEPTH_TEST);
	}
}

int main(int argc, char** argv){
	
	glutInitWindowSize(600,600);
	glutInit(&argc, argv);
	glutCreateWindow("3D");
	init();
	glutDisplayFunc(Cubo3DQUADS);
	glutMainLoop();
	
	return 0;
	
}
	
