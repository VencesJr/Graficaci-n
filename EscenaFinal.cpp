#include <GL/glut.h>

typedef int dim3[3];

dim3 patas[32] = {{-2,0,-2},{2,0,-2},{2,0,2},{-2,0,2},
{-1,1,-1},{1,1,-1},{1,1,1},{-1,1,1},
	
{6,0,-2},{10,0,-2},{10,0,2},{6,0,2},
{7,1,-1},{9,1,-1},{9,1,1},{7,1,1},
	
{-2,0,-14},{2,0,-14},{2,0,-10},{-2,0,-10},
{-1,1,-13},{1,1,-13},{1,1,-11},{-1,1,-11},
	
{6,0,-14},{10,0,-14},{10,0,-10},{6,0,-10},
{7,1,-13},{9,1,-13},{9,1,-11},{7,1,-11}};

dim3 patas2[32] = {{7,1,-13},{9,1,-13},{9,1,-11},{7,1,-11},
{7,4,-15},{9,4,-15},{9,4,-13},{7,4,-13},
	
{-1,1,-13},{1,1,-13},{1,1,-11},{-1,1,-11},
{-1,4,-15},{1,4,-15},{1,4,-13},{-1,4,-13},
	
{-1,1,-1},{1,1,-1},{1,1,1},{-1,1,1},
{-1,4,-1},{1,4,-1},{1,4,1},{-1,4,1},
	
{7,1,-1},{9,1,-1},{9,1,1},{7,1,1},
{7,4,-1},{9,4,-1},{9,4,1},{7,4,1}};

dim3 patas3[32] = {{7,4,-15},{9,4,-15},{9,4,-13},{7,4,-13},
{7,7,-13},{9,7,-13},{9,7,-11},{7,7,-11},
	
{-1,4,-15},{1,4,-15},{1,4,-13},{-1,4,-13},
{-1,7,-13},{1,7,-13},{1,7,-11},{-1,7,-11},
	
{-1,4,-1},{1,4,-1},{1,4,1},{-1,4,1},
{-2,10,-2},{2,10,-2},{2,10,2},{-2,10,2},
	
{7,4,-1},{9,4,-1},{9,4,1},{7,4,1},
{6,10,-2},{10,10,-2},{10,10,2},{6,10,2}};

dim3 patas4[16] = {{-1,7,-13},{1,7,-13},{1,7,-11},{-1,7,-11},
{-2,10,-14},{2,10,-14},{2,10,-10},{-2,10,-10},
	
{7,7,-13},{9,7,-13},{9,7,-11},{7,7,-11},
{6,10,-14},{10,10,-14},{10,10,-10},{6,10,-10}};

dim3 joroba[8] = {{10,12,-14},{10,12,2},{-2,12,2},{-2,12,-14},
{7,15,-9},{7,15,-3},{1,15,-3},{1,15,-9}};

dim3 cuello[10] = {{-2,12,2},{10,12,2},{10,9,2},{4,7,2},{-2,9,2},
{2,11,4},{6,11,4},{6,9,4},{4,9,4},{2,9,4}};

dim3 cola[10] = {{-2,12,-14},{10,12,-14},{10,9,-14},{4,7,-14},{-2,9,-14},
{2,11,-16},{6,11,-16},{6,9,-16},{4,9,-16},{2,9,-16}};

dim3 cola2[8] = {{2,11,-16},{6,11,-16},{6,9,-16},{2,9,-16},
{3,6,-18},{5,6,-18},{5,5,-18},{3,5,-18}};

dim3 cuelloo[8] = {{6,9,6},{6,11,4},{2,11,4},{2,9,6},
{5,16,8},{5,16,6},{3,16,6},{3,16,8}};

dim3 cabeza[8] = {{5,16,11},{5,16,6},{3,16,6},{3,16,11},
{5,18,11},{5,18,6},{3,18,6},{3,18,11}};

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

void init(void) {
	
	glClearColor(0.5,0.5,0.5,0);
	glMatrixMode(GL_MODELVIEW);
	//gluLookAt(0,1.3,5,0,0,0,0,1,0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-40,160,-50,83,-550,600);
	
}

void base(void) {
	glBegin(GL_POLYGON);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(0,0,0);
	glVertex3f(10.25,0,0.19);
	glVertex3f(33.48,0,-0.67);
	glVertex3f(93.77,0,2.66);
	glVertex3f(115.59,0,16.70);
	glVertex3f(130.11,0,33.51);
	glVertex3f(142.88,0,64.01);
	glVertex3f(137.48,0,109.58);
	glVertex3f(70.08,0,180.86);
	glVertex3f(61.35,0,113.89);
	glVertex3f(13.76,0,96.06);
	glVertex3f(-12.31,0,80.73);
	glVertex3f(-17.33,0,73.16);
	glVertex3f(-23.92,0,44.73);
	glVertex3f(-22.94,0,20.15);
	glEnd();
	glFlush();
}

void Montania(void) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(88.43,31.95,79.9); /////////
	glColor3f(0.87,0.78,0.24);
	glVertex3f(87.33,0,104.14);
	glVertex3f(97.26,0,104.47);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(88.43,31.95,79.9);		
	glColor3f(0.87,0.78,0.24);
	glVertex3f(97.26,0,104.47);
	glVertex3f(110.82,0,81.84);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(88.43,31.95,79.9);				
	glColor3f(0.87,0.78,0.24);
	glVertex3f(110.82,0,81.84);
	glVertex3f(104.52,0,74.64);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(88.43,31.95,79.9);						
	glColor3f(0.87,0.78,0.24);
	glVertex3f(104.52,0,74.64);
	glVertex3f(96.48,31.95,66.11);//////
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(99.16,31.95,61.2);/////
	glVertex3f(99.71,31.95,58.72);///////		
	glColor3f(0.87,0.78,0.24);
	glVertex3f(118.87,0,67.1);
	glVertex3f(114.09,0,69.62);		
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(99.16,31.95,61.2);
	glVertex3f(96.48,31.95,66.11);		
	glColor3f(0.87,0.78,0.24);
	glVertex3f(104.52,0,74.64);
	glVertex3f(114.09,0,69.62);		
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
		glVertex3f(99.71,31.95,58.72);
		glColor3f(0.87,0.78,0.24);
		glVertex3f(118.87,0,67.1);
		glVertex3f(129.72,0,52.14);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(99.71,31.95,58.72);
	glColor3f(0.87,0.78,0.24);	
	glVertex3f(129.72,0,52.14);
	glVertex3f(101.66,31.95,40.71);/////
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(128.85,0,43.21);
	glColor3f(0.87,0.78,0.24);	
	glVertex3f(129.72,0,52.14);
	glVertex3f(101.66,31.95,40.71);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(128.85,0,43.21);
	glColor3f(0.87,0.78,0.24);	
	glVertex3f(101.66,31.95,40.71);
	glVertex3f(118.65,0,28.62 );
	glEnd();
		
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
		glVertex3f(118.65,0,28.62 );
		glVertex3f(101.66,31.95,40.71);
	glColor3f(0.87,0.78,0.24);	
		glVertex3f(90.93,31.95,35.78);/////
		glVertex3f(108.57,0,26.35);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(90.93,31.95,35.78);
	glColor3f(0.87,0.78,0.24);	
	glVertex3f(108.57,0,26.35);
	glVertex3f(98.27,0,12.54);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(90.93,31.95,35.78);
	glColor3f(0.87,0.78,0.24);	
	glVertex3f(86.12,31.95,33.45);///////
	glVertex3f(98.27,0,12.54);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(78.17,31.95,21.61);
	glColor3f(0.87,0.78,0.24);	
	glVertex3f(86.12,31.95,33.45);
	glVertex3f(98.27,0,12.54);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(78.17,31.95,21.61); ////////
	glColor3f(0.87,0.78,0.24);	
	glVertex3f(96.35,0,9.35);
	glVertex3f(98.27,0,12.54);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(78.17,31.95,21.61);
	glColor3f(0.87,0.78,0.24);	
	glVertex3f(96.35,0,9.35);
	glVertex3f(87.96,0,2.25);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(87.96,0,2.25);
	glVertex3f(78.17,31.95,21.61);
	glColor3f(0.87,0.78,0.24);	
	glVertex3f(62.16,31.95,18.4); /////////
	glVertex3f(66.21,0,1.65);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(66.21,0,1.65);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(62.16,31.95,18.4);
	glVertex3f(56.82,31.95,17.33); ////////
	glColor3f(0.827,0.556,0.011);
	glVertex3f(58.08,0,3.6);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(58.08,0,3.6);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(56.82,31.95,17.33);
	glVertex3f(52.42,31.95,14.14);//////
	glEnd();
	

	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(58.08,0,3.6);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(53.15,0,2.73);
	glVertex3f(52.42,31.95,14.14);//////
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(48.02,31.95,10.95);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(53.15,0,2.73);
	glVertex3f(52.42,31.95,14.14);
	glEnd();
	
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(53.15,0,2.73);
	glVertex3f(48.02,31.95,10.95);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(34.92,32.95,11.39);/////
	glVertex3f(33.48,0,-0.67);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(33.48,0,-0.67);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(34.92,32.95,11.39);
	glVertex3f(30.55,0,0.54);
	glEnd();
	
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(30.55,0,0.54);
	glVertex3f(34.92,32.95,11.39);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(22.9,31.95,13.45);
	glVertex3f(15.33,0,0.21);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(15.33,0,0.21);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(22.9,31.95,13.45);///////
	glVertex3f(5.92,0,8.25);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(19.97,31.95,17.24);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(22.9,31.95,13.45);
	glVertex3f(5.92,0,8.25);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(19.97,31.95,17.24);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(10.49,31.95,25.91); /////
	glVertex3f(5.92,0,8.25);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(5.92,0,8.25);
	glVertex3f(10.49,31.95,25.91);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(1.85,31.95,27.56);////
	glVertex3f(-11.59,0,12.98);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(-11.59,0,12.98);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(1.85,31.95,27.56);
	glVertex3f(-11,0,31.2);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(2.78,31.95,35.54);//////
	glColor3f(0.87,0.78,0.24);
	glVertex3f(1.85,31.95,27.56);
	glVertex3f(-11,0,31.2);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(2.78,31.95,35.54);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(1.85,31.95,27.56);
	glVertex3f(-11,0,31.2);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(2.78,31.95,35.54);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(-13.46,0,5.53);
	glVertex3f(4.3,31.95,38.65);/////
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(1.87,31.95,49.55);///////
	glColor3f(0.87,0.78,0.24);
	glVertex3f(-13.46,0,5.53);
	glVertex3f(4.3,31.95,38.65);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(1.87,31.95,49.55);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(-13.46,0,5.53);
	glVertex3f(10.51,0,61.74);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(1.87,31.95,49.55);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(-0.84,31.95,63.09); //////
	glVertex3f(10.51,0,61.74);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(-3.1,0,77.94);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(-0.84,31.95,63.09);
	glVertex3f(10.51,0,61.74);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(-3.1,0,77.94);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(-0.84,31.95,63.09);
	glVertex3f(7.39,31.95,67.93); //////
	glColor3f(0.827,0.556,0.011);
	glVertex3f(0.45,0,78.56);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(0.45,0,78.56);
	glVertex3f(7.39,31.95,67.93);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(12.6,31.95,76.02);//////
	glVertex3f(6.43,0,89.22);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(6.43,0,89.22);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(12.6,31.95,76.02);
	glVertex3f(20.32,31.95,79.74);//////
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(6.43,0,89.22);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(9.28,0,94);
	glVertex3f(20.32,31.95,79.74);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(6.43,0,89.22);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(13.76,0,96.06);
	glVertex3f(20.32,31.95,79.74);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(13.76,0,96.06);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(20.32,31.95,79.74);
	glVertex3f(26.42,31.95,80.53);/////////
	glColor3f(0.827,0.556,0.011);
	glVertex3f(35.77,0,96.27);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(35.77,0,96.27);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(26.42,31.95,80.53);
	glVertex3f(36.17,31.95,75.77);///////
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(35.77,0,96.27);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(46.47,31.95,86.2);/////////
	glVertex3f(36.17,31.95,75.77);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(35.77,0,96.27);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(46.47,31.95,86.2);
	glVertex3f(46.8,0,96.27);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(46.47,31.95,86.2);
	glVertex3f(46.8,0,96.27);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(51.93,0,103.87);
	glVertex3f(56.08,31.95,92.75);/////
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(51.93,0,103.87);
	glVertex3f(56.08,31.95,92.75);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(62.55,31.95,92.94); //////
	glVertex3f(61.35,0,113.89);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(61.35,0,113.89);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(62.55,31.95,92.94);
	glVertex3f(74.18,0,112.59);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.827,0.556,0.011);
	glVertex3f(74.18,0,112.59);
	glVertex3f(62.55,31.95,92.94);
	glColor3f(0.87,0.78,0.24);
	glVertex3f(88.43,31.95,79.9);
	glVertex3f(87.33,0,104.14);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex3f(88.43,31.95,79.9); /////////
	glVertex3f(96.48,31.95,66.11);//////
	glVertex3f(99.16,31.95,61.2);/////
	glVertex3f(99.71,31.95,58.72);///////		
	glVertex3f(101.66,31.95,40.71);/////
	glVertex3f(90.93,31.95,35.78);/////
	glVertex3f(86.12,31.95,33.45);///////
	glVertex3f(78.17,31.95,21.61); ////////
	glVertex3f(62.16,31.95,18.4); /////////
	glVertex3f(56.82,31.95,17.33); ////////
	glVertex3f(52.42,31.95,14.14);//////
	glVertex3f(52.42,31.95,14.14);//////
	glVertex3f(34.92,32.95,11.39);/////
	glVertex3f(22.9,31.95,13.45);///////
	glVertex3f(10.49,31.95,25.91); /////	glVertex3f(1.85,31.95,27.56);////
	glVertex3f(2.78,31.95,35.54);//////
	glVertex3f(4.3,31.95,38.65);/////
	glVertex3f(1.87,31.95,49.55);///////
	glVertex3f(-0.84,31.95,63.09); //////
	glVertex3f(7.39,31.95,67.93); //////
	glVertex3f(12.6,31.95,76.02);//////
	glVertex3f(20.32,31.95,79.74);//////
	glVertex3f(26.42,31.95,80.53);/////////	glVertex3f(36.17,31.95,75.77);///////
	glVertex3f(46.47,31.95,86.2);/////////
	glVertex3f(56.08,31.95,92.75);/////
	glVertex3f(62.55,31.95,92.94); //////
	glEnd();
	
	glFlush();
}

void Camello(double j) {
	
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
	
}

void escena1(void) {
	
	gluLookAt(0,0.8,5,0,0,0,0,1,0);
	
	glMatrixMode(GL_MODELVIEW);
	
	glutInitDisplayMode(GL_DEPTH);
	int b = 0;
	double j=-1;
	double t1 = 0, t2 = 0, s = 1;
	
	
	
	for (double i = 0; i <= 300; i+=1) {
		glScaled(s,s,s);
		
		glRotated(i,0,1,0);
		glTranslated(1,-1,1); 
		
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
	
		glClear(GL_DEPTH_BUFFER_BIT);
		
		glEnable(GL_DEPTH_TEST);
		
		glClear(GL_COLOR_BUFFER_BIT);
		
		glTranslated(t1,t2,-60);
		
		base();
		Montania();
		
		glTranslated(20,31.95,25);
		glScaled(0.6,0.6,0.6);
		Montania();
		glScaled(1/0.6,1/0.6,1/0.6);
		glTranslated(-20,-31.95,-25);
		
		
		glTranslated(120,0,100);
		glScaled(0.5,0.5,0.5);
		Camello(j);
		glScaled(1/0.5,1/0.5,1/0.5);
		glTranslated(-120,0,-100);
		
		glTranslated(-t1,-t2,60);
		
		glTranslated(-1,1,-1);
		glRotated(-i,0,1,0);
		
		glScaled(1/s,1/s,1/s);
		
		t1 += 0.083;
		t2 += 0.033;
		s += 0.0083;
		
		
		Sleep(20);
		
		
		glDisable(GL_DEPTH_TEST);
		
	}
	
}

void escena2(void) {
	
	gluLookAt(0,0.8,5,0,0,0,0,1,0);
	
	glMatrixMode(GL_MODELVIEW);
	
	glutInitDisplayMode(GL_DEPTH);
	int b = 0;
	double j = -1;
	double m = 120, n = 100;
	
	
	
	for (double i = 0; i <= 400; i+=1) {
		glScaled(2.5,2.5,2.5);
		
		glRotated(300,0,1,0);
		glTranslated(1,-1,1); 
		
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
		
		glClear(GL_DEPTH_BUFFER_BIT);
		
		glEnable(GL_DEPTH_TEST);
		
		glClear(GL_COLOR_BUFFER_BIT);
		
		glTranslated(25,35,-60);
		
		base();
		Montania();
		
		glTranslated(20,31.95,25);
		glScaled(0.6,0.6,0.6);
		Montania();
		glScaled(1/0.6,1/0.6,1/0.6);
		glTranslated(-20,-31.95,-25);
		
		glTranslated(m,0,n);
		glScaled(0.5,0.5,0.5);
		Camello(j);
		glScaled(1/0.5,1/0.5,1/0.5);
		glTranslated(-m,0,-n);
		
		glTranslated(-25,-35,60);
		
		glTranslated(-1,1,-1);
		glRotated(-300,0,1,0);
		
		glScaled(1/2.5,1/2.5,1/2.5);
		
		Sleep(20);
		
		glDisable(GL_DEPTH_TEST);
		m-=0.1;
		n+=0.1;
		
	}
	
}

void anima() {
	escena1();
	escena2();
}

int main(int argc, char** argv){
		
	glutInitWindowSize(600,400);
	glutInit(&argc, argv);	
	glutCreateWindow("3D");
	init();
	glutDisplayFunc(anima);	
	glutMainLoop();
	
	return 0;
	
}
	
