#include <GL/glut.h>					//Libreria
#include <math.h>
#include <windows.h>

//Rutina de inicialización
void inicializa (void) {
	glClearColor(0.4,0.69,1.0,0.0);		
	glMatrixMode(GL_PROJECTION);		
	gluOrtho2D(0,800,0,600);
}


void escena2() {

	//Tierra
	glColor3f(0.87,0.78,0.24);
	glBegin(GL_POLYGON);				
		glVertex2i(0,0);
		glVertex2i(800,0);
		glVertex2i(800,224);
		glVertex2i(0,224);
	glEnd();
	
	//Montañas
	glLineWidth(1);
	glColor3f(0.611,0.513,0.058);
	glBegin(GL_POLYGON);
		glVertex2i(800,200);
		glVertex2i(0,200);		
		glVertex2i(0,378);
		glVertex2i(163,405);
		glVertex2i(325,341);
		glVertex2i(500,373);
		glVertex2i(668,340);
		glVertex2i(787,382);
		glVertex2i(800,382);
	glEnd();
	
	glColor3f(0.752,0.588,0.113);
	glBegin(GL_POLYGON);
		glVertex2i(800,200);
		glVertex2i(0,200);		
		glVertex2i(0,294);
		glVertex2i(98,305);
		glVertex2i(150,288);
		glVertex2i(193,285);
		glVertex2i(252,300);
		glVertex2i(294,298);
		glVertex2i(316,293);
		glVertex2i(332,298);
		glVertex2i(370,294);
		glVertex2i(398,286);
		glVertex2i(442,288);
		glVertex2i(473,296);
		glVertex2i(550,294);
		glVertex2i(600,270);
		glVertex2i(632,275);
		glVertex2i(680,293);
		glVertex2i(708,297);
		glVertex2i(753,288);
		glVertex2i(800,297);
	glEnd();
	
	glColor3f(0.811,0.709,0.086);
	glBegin(GL_POLYGON);
		glVertex2i(800,200);
		glVertex2i(0,200);		
		glVertex2i(0,250);
		glVertex2i(24,260);
		glVertex2i(72,242);
		glVertex2i(100,252);
		glVertex2i(110,248);
		glVertex2i(125,255);
		glVertex2i(154,251);
		glVertex2i(163,260);
		glVertex2i(186,252);
		glVertex2i(304,242);
		glVertex2i(333,260);
		glVertex2i(368,254);
		glVertex2i(413,261);
		glVertex2i(428,248);
		glVertex2i(468,267);
		glVertex2i(502,261);
		glVertex2i(522,251);
		glVertex2i(571,257);
		glVertex2i(601,249);
		glVertex2i(618,252);
		glVertex2i(682,256);
		glVertex2i(695,246);
		glVertex2i(710,253);
		glVertex2i(739,251);
		glVertex2i(765,260);
		glVertex2i(780,270);
		glVertex2i(800,272);
	glEnd();
	
	//piedras
	glColor3f(0.670,0.592,0.294);
	glLineWidth(1);
	glBegin(GL_POLYGON);
		glVertex2i(296,126);
		glVertex2i(310,126);
		glVertex2i(310,133);
		glVertex2i(304,140);
		glVertex2i(296,136);
		glVertex2i(293,131);		
	glEnd();
	
	glColor3f(0.450,0.317,0.113);
	glBegin(GL_POLYGON);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(305,130);
	glVertex2i(296,126);
	glEnd();
	
	
	
	//piedras
	
	glTranslated(100,50,0);	
	
	glColor3f(0.670,0.592,0.294);
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(296,126);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(296,136);
	glVertex2i(293,131);		
	glEnd();
	
	glColor3f(0.450,0.317,0.113);
	glBegin(GL_POLYGON);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(305,130);
	glVertex2i(296,126);
	glEnd();
	
	glTranslated(-100,-50,0);
	
	
	//piedras
	
	glTranslated(100,-50,0);	
	
	glColor3f(0.670,0.592,0.294);
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(296,126);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(296,136);
	glVertex2i(293,131);		
	glEnd();
	
	glColor3f(0.450,0.317,0.113);
	glBegin(GL_POLYGON);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(305,130);
	glVertex2i(296,126);
	glEnd();
	
	glTranslated(-100,50,0);
	
	
	
	
	//Sol			
	glBegin(GL_TRIANGLE_FAN);
		glColor3f(1,1,1);
		glVertex2i(36,557);
	
		glColor3f(0.88,0.87,0.04);
		glVertex2i(0,506);
		glVertex2i(14,498);
		glVertex2i(29,495);
		glVertex2i(50,498);
		glVertex2i(72,504);
		glVertex2i(91,527);
		glVertex2i(99,557);
		glVertex2i(93,585);
		glVertex2i(81,600);
		glVertex2i(0,600);
		glVertex2i(0,506); 
		
	glEnd();
	
	//Nopal//////////////////////
	glColor3f(0.482,0.611,0.023); //Base
	
	glBegin(GL_POLYGON);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(36,205);
	glVertex2i(35,193);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(48,196);
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(36,205);
	glVertex2i(35,193);
	glVertex2i(44,182);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(55,218);
	glVertex2i(50,207);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(57,210);		
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(55,218);
	glVertex2i(50,207);		
	glVertex2i(55,204);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);
	glVertex2i(67,219);
	glVertex2i(62,216);
	glVertex2i(63,212);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);	
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);
	glVertex2i(67,219);
	glVertex2i(62,216);
	glVertex2i(63,212);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);
	glVertex2i(26,207);
	glVertex2i(32,204);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);			
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);
	glVertex2i(26,207);
	glVertex2i(32,204);		
	glVertex2i(36,206);
	glEnd();
	
	glColor3f(0.564,0.709,0.023);  //Puntos
	glPointSize(2);
	glBegin(GL_POINTS);
	glVertex2i(46,189);
	glVertex2i(48,192);
	glVertex2i(49,198);
	glVertex2i(53,203);
	glVertex2i(42,191);
	glVertex2i(38,197);
	glVertex2i(45,202);
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(45,182);
	glVertex2i(47,175);
	glVertex2i(59,174);
	glVertex2i(58,183);
	glVertex2i(50,185);
	glEnd();
	///////////
	
	//Arbusto
	glColor3f(0.517,0.827,0.082); //Base
	glBegin(GL_POLYGON);
	glVertex2i(217,178);
	glVertex2i(257,180);
	glVertex2i(250,202);
	glVertex2i(246,220);
	glVertex2i(236,214);
	glVertex2i(228,206);
	glVertex2i(222,207);
	glVertex2i(218,203);
	glVertex2i(218,194);
	glVertex2i(212,189);
	glEnd();
	
	glColor3f(0.505,0.572,0.054); //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(257,180);
	glVertex2i(217,178);
	glVertex2i(226,182);
	glVertex2i(232,188);
	glVertex2i(242,187);
	glVertex2i(246,211);
	
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(217,178);
	glVertex2i(236,175);
	glVertex2i(242,172);
	glVertex2i(248,176);
	glVertex2i(261,176);
	glVertex2i(257,180);
	glEnd();
	
	
	//////////
	glTranslated(350,-200,0);
	glScaled(1.7,1.7,0);
	
	//Arbusto
	glColor3f(0.517,0.827,0.082); //Base
	glBegin(GL_POLYGON);
	glVertex2i(217,178);
	glVertex2i(257,180);
	glVertex2i(250,202);
	glVertex2i(246,220);
	glVertex2i(236,214);
	glVertex2i(228,206);
	glVertex2i(222,207);
	glVertex2i(218,203);
	glVertex2i(218,194);
	glVertex2i(212,189);
	glEnd();
	
	glColor3f(0.505,0.572,0.054); //Sombra	
	glBegin(GL_POLYGON);
	glVertex2i(257,180);
	glVertex2i(217,178);
	glVertex2i(226,182);
	glVertex2i(232,188);
	glVertex2i(242,187);
	glVertex2i(246,211);	
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(217,178);
	glVertex2i(236,175);
	glVertex2i(242,172);
	glVertex2i(248,176);
	glVertex2i(261,176);
	glVertex2i(257,180);
	glEnd();
	
	glScaled(1/1.7, 1/1.7, 0);
	glTranslated(-350,200,0);
	////////
	
	
	glTranslated(550,-300,0);	
	glScaled(2.0,2.0,0);
	
	//Nopal//////////////////////
	glColor3f(0.482,0.611,0.023); //Base
	
	glBegin(GL_POLYGON);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(36,205);
	glVertex2i(35,193);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(48,196);
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(36,205);
	glVertex2i(35,193);
	glVertex2i(44,182);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(55,218);
	glVertex2i(50,207);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(57,210);		
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(55,218);
	glVertex2i(50,207);		
	glVertex2i(55,204);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);
	glVertex2i(67,219);
	glVertex2i(62,216);
	glVertex2i(63,212);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);	
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);
	glVertex2i(67,219);
	glVertex2i(62,216);
	glVertex2i(63,212);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);
	glVertex2i(26,207);
	glVertex2i(32,204);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);			
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);
	glVertex2i(26,207);
	glVertex2i(32,204);		
	glVertex2i(36,206);
	glEnd();
	
	glColor3f(0.564,0.709,0.023);  //Puntos
	glPointSize(2);
	glBegin(GL_POINTS);
	glVertex2i(46,189);
	glVertex2i(48,192);
	glVertex2i(49,198);
	glVertex2i(53,203);
	glVertex2i(42,191);
	glVertex2i(38,197);
	glVertex2i(45,202);
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(45,182);
	glVertex2i(47,175);
	glVertex2i(59,174);
	glVertex2i(58,183);
	glVertex2i(50,185);
	glEnd();
	
	
	glScaled(1/2.0,1/2.0,0);
	glTranslated(-550,300,0);
	///////////
	
	
	
	
	
	//Nopal
	glColor3f(0.482,0.611,0.023); //Base
	glBegin(GL_POLYGON);
	glVertex2i(346,170);
	glVertex2i(358,185);
	glVertex2i(358,195);
	glVertex2i(356,201);
	glVertex2i(349,205);
	glVertex2i(337,204);
	glVertex2i(331,198);
	glVertex2i(331,187);
	glVertex2i(334,177);
	glVertex2i(341,170);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(341,170);
	glVertex2i(346,170);
	glVertex2i(358,185);
	glVertex2i(358,195);
	glVertex2i(356,201);
	glVertex2i(349,205);
	glVertex2i(348,185);
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(346,170);
	glVertex2i(358,185);
	glVertex2i(358,195);
	glVertex2i(356,201);
	glVertex2i(349,205);
	glVertex2i(337,204);
	glVertex2i(331,198);
	glVertex2i(331,187);
	glVertex2i(334,177);
	glVertex2i(341,170);
	glVertex2i(346,170);
	glEnd();
	
	glColor3f(0.482,0.611,0.023); //Base
	glBegin(GL_POLYGON);
	glVertex2i(362,201);
	glVertex2i(369,204);
	glVertex2i(370,211);
	glVertex2i(365,214);
	glVertex2i(359,209);
	glVertex2i(356,201);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(362,201);
	glVertex2i(369,204);
	glVertex2i(370,211);
	glVertex2i(365,206);		
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(362,201);
	glVertex2i(369,204);
	glVertex2i(370,211);
	glVertex2i(365,214);
	glVertex2i(359,209);
	glVertex2i(356,201);		
	glVertex2i(362,201);
	glEnd();
	
	glColor3f(0.482,0.611,0.023); //Base
	glBegin(GL_POLYGON);
	glVertex2i(336,203);
	glVertex2i(334,212);
	glVertex2i(328,219);
	glVertex2i(320,215);
	glVertex2i(320,210);
	glVertex2i(323,202);
	glVertex2i(332,199);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(323,202);
	glVertex2i(332,199);
	glVertex2i(336,203);
	glVertex2i(334,212);
	glVertex2i(331,206);
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(336,203);
	glVertex2i(334,212);
	glVertex2i(328,219);
	glVertex2i(320,215);
	glVertex2i(320,210);
	glVertex2i(323,202);
	glVertex2i(332,199);
	glVertex2i(336,203);
	glEnd();
	
	glColor3f(0.564,0.709,0.023);  //Puntos
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2i(348,200);
	glVertex2i(339,196);
	glVertex2i(337,186);
	glVertex2i(343,178);
	glVertex2i(348,186);
	glVertex2i(346,190);		
	glVertex2i(330,206);
	glVertex2i(325,207);
	glVertex2i(324,213);
	glVertex2i(331,211);
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(343,169);
	glVertex2i(350,163);
	glVertex2i(362,160);
	glVertex2i(372,164);
	glVertex2i(369,172);
	glVertex2i(358,173);
	glVertex2i(349,172);
	glEnd();
	
	
	
	///////// Cactus atrás
	
	glTranslated(450,180,0);
	glScaled(0.4,0.4,0);
	
	glColor3f(0.317,0.231,0.058);
	glLineWidth(20);
	glBegin(GL_LINES);
	glVertex2i(537,17);
	glVertex2i(615,-52);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(527,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(533,238);
	glVertex2i(526,227);
	glEnd();
	
	glColor3f(0.215,0.439,0.105); //Sombra clara
	glBegin(GL_POLYGON);
	glVertex2i(550,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);			
	glVertex2i(540,224);			
	glEnd();
	
	glColor3f(0,0,0); //Contorno
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glVertex2i(507,30);
	glEnd();
	
	glLineWidth(1); //lineas
	glBegin(GL_LINES);
	glVertex2i(517,8);
	glVertex2i(519,222);
	glVertex2i(519,222);
	glVertex2i(529,238);
	glVertex2i(526,9);
	glVertex2i(526,227);
	glVertex2i(526,227);
	glVertex2i(533,238);
	glVertex2i(539,9);
	glVertex2i(533,238);
	glVertex2i(550,9);
	glVertex2i(540,224);
	glVertex2i(540,224);
	glVertex2i(542,238);		
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glBegin(GL_POLYGON);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);			
	glVertex2i(541,154);//
	glVertex2i(557,154);//
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(569,152);
	glVertex2i(558,146);
	glVertex2i(547,148);			
	glEnd();
	
	glBegin(GL_POLYGON); //parte 2 de la de arriba						
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(579,207);
	glVertex2i(570,217);//					
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(541,154);
	glVertex2i(557,154);
	glVertex2i(557,154);
	glVertex2i(570,164);
	glVertex2i(570,164);
	glVertex2i(570,209);
	glVertex2i(570,209);
	glVertex2i(563,220);
	glVertex2i(535,160);
	glVertex2i(555,160);
	glVertex2i(555,160);
	glVertex2i(564,169);
	glVertex2i(564,169);
	glVertex2i(563,220);						
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(535,166);
	glVertex2i(548,167);
	glVertex2i(548,167);
	glVertex2i(557,174);
	glVertex2i(557,174);
	glVertex2i(557,209);
	glVertex2i(557,209);
	glVertex2i(563,220);
	glEnd();
	
	
	glLineWidth(2); //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glVertex2i(558,146);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);						
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(591,104);
	glVertex2i(628,89);
	glVertex2i(618,69);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);
	glVertex2i(584,62);
	glEnd();		
	
	glBegin(GL_POLYGON);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(628,89);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//		
	glVertex2i(608,85);
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(546,58);
	glVertex2i(584,62);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(608,85);
	glVertex2i(606,188);	
	
	glVertex2i(552,50);
	glVertex2i(575,53);
	glVertex2i(575,53);
	glVertex2i(598,61);
	glVertex2i(598,61);
	glVertex2i(618,86);
	glVertex2i(618,86);
	glVertex2i(617,176);
	glVertex2i(617,176);
	glVertex2i(606,188);
	
	glVertex2i(546,67);
	glVertex2i(582,69);
	glVertex2i(582,69);
	glVertex2i(602,95);
	glVertex2i(602,95);
	glVertex2i(600,177);
	glVertex2i(600,177);
	glVertex2i(606,188);
	
	glVertex2i(552,72);
	glVertex2i(576,74);
	glVertex2i(576,74);
	glVertex2i(597,100);
	glVertex2i(597,100);
	glVertex2i(595,175);
	glVertex2i(595,175);
	glVertex2i(606,188);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);	
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glVertex2i(576,81);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(470,130);
	glVertex2i(462,206);
	
	glVertex2i(511,113);
	glVertex2i(490,113);
	glVertex2i(490,113);
	glVertex2i(476,128);
	glVertex2i(476,128);
	glVertex2i(474,193);
	glVertex2i(474,193);
	glVertex2i(462,206);
	
	glVertex2i(514,97);
	glVertex2i(481,99);
	glVertex2i(481,99);
	glVertex2i(465,126);
	glVertex2i(465,126);
	glVertex2i(457,196);
	glVertex2i(457,196);
	glVertex2i(462,206);
	
	glVertex2i(508,89);
	glVertex2i(475,93);
	glVertex2i(475,93);
	glVertex2i(455,124);
	glVertex2i(455,124);
	glVertex2i(450,195);
	glVertex2i(450,195);
	glVertex2i(462,206);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);		
	glEnd();
	
	glScaled(1/0.4,1/0.4,0);
	glTranslated(-450,-180,0);
	
	
	
	/////////
	
	
	
	
	//FOxy
	glLineWidth(1);
	//Cuerpo
	glColor3f(0.964,0.396,0.054);
	glBegin(GL_POLYGON);
	glVertex2i(257,180);
	glVertex2i(288,177);
	glVertex2i(289,157);
	glVertex2i(283,149);
	glVertex2i(276,149);
	glVertex2i(257,166);
	glVertex2i(249,176);
	glVertex2i(250,180);		
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(250,180);
	glVertex2i(264,189);
	glVertex2i(276,188);
	glVertex2i(288,177);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(257,166);
	glVertex2i(257,163);
	glVertex2i(245,150);
	glVertex2i(251,150);
	glVertex2i(254,150);
	glVertex2i(259,145);
	glVertex2i(265,147);
	glVertex2i(270,145);
	glVertex2i(276,149);
	glEnd();
	
	glColor3f(0.345,0.129,0);
	glBegin(GL_TRIANGLES);
	glVertex2i(245,150);
	glVertex2i(251,150);
	glVertex2i(251,143);
	glEnd();
	
	glColor3f(0,0,0);
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(285,158);
	glVertex2i(280,160);
	glVertex2i(275,155);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(255,171);
	glVertex2i(261,165);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glVertex2i(283,148);
	glVertex2i(277,150);
	glVertex2i(275,155);
	glEnd();
	
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glVertex2i(261,165);
	glVertex2i(260,151);
	glVertex2i(257,148); //
	glVertex2i(259,145);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(257,148);
	glVertex2i(254,150);
	glVertex2i(257,152); //
	glVertex2i(257,163);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(265,170);
	glVertex2i(269,165);
	glVertex2i(267,156); //
	glVertex2i(264,146);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(268,168);
	glVertex2i(271,170);
	glVertex2i(271,179);
	glEnd();
	
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);
	glVertex2i(257,166);
	glVertex2i(249,176);
	glVertex2i(250,180);
	glVertex2i(264,189);
	glVertex2i(276,188);
	glVertex2i(288,177);
	glVertex2i(289,157);
	glVertex2i(283,149);
	glVertex2i(276,149);
	glVertex2i(270,145);
	glVertex2i(265,147);
	glVertex2i(259,145);
	glVertex2i(254,150);
	glVertex2i(251,150);
	glVertex2i(251,143);
	glVertex2i(245,150);
	glVertex2i(257,163);
	glVertex2i(257,166);		
	glEnd();
	
	//cabeza
	glColor3f(0.964,0.396,0.054);
	glBegin(GL_POLYGON);
	glVertex2i(244,201);
	glVertex2i(260,201);
	glVertex2i(271,208);
	glVertex2i(271,202);
	glVertex2i(265,194);
	glVertex2i(264,185);
	glVertex2i(257,180);
	glVertex2i(250,180);
	glVertex2i(244,185);
	glVertex2i(243,191);
	glVertex2i(235,200);
	glVertex2i(235,206);
	glEnd();
	
	glColor3f(0.345,0.129,0);
	glBegin(GL_POLYGON);
	glVertex2i(235,206);
	glVertex2i(244,201);
	glVertex2i(249,196);
	glVertex2i(246,194);
	glVertex2i(241,196);		
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(271,208);
	glVertex2i(258,196);
	glEnd();
	
	glColor3f(0.345,0.129,0);
	glBegin(GL_POLYGON);
	glVertex2i(266,205);
	glVertex2i(271,208);
	glVertex2i(271,202);
	glVertex2i(265,194);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(258,196);
	glVertex2i(261,192);
	glVertex2i(265,194);
	glVertex2i(271,202);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(245,190);
	glVertex2i(248,192);
	glVertex2i(251,190);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(255,190);
	glVertex2i(258,192);
	glVertex2i(261,190);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(247,187);
	glVertex2i(251,182);
	glVertex2i(255,182);
	glVertex2i(260,187);
	glEnd();
	
	glBegin(GL_LINES);	
	glVertex2i(253,183);
	glVertex2i(253,186);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(244,201);
	glVertex2i(260,201);
	glVertex2i(271,208);
	glVertex2i(271,202);
	glVertex2i(265,194);
	glVertex2i(264,185);
	glVertex2i(257,180);
	glVertex2i(250,180);
	glVertex2i(244,185);
	glVertex2i(243,191);
	glVertex2i(235,200);
	glVertex2i(235,206);
	glEnd();
	
	glColor3f(0.345,0.129,0);
	glBegin(GL_TRIANGLES);
	glVertex2i(250,180);
	glVertex2i(255,175);
	glVertex2i(257,180);
	glEnd();
	
	
	//Rueda////
	//////////
	
	
	
	///////// Cactus 
	
	glTranslated(-235,53,0);
	glScaled(0.7,0.7,0);
	
	glColor3f(0.317,0.231,0.058);
	glLineWidth(30);
	glBegin(GL_LINES);
	glVertex2i(537,17);
	glVertex2i(615,-52);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(527,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(533,238);
	glVertex2i(526,227);
	glEnd();
	
	glColor3f(0.215,0.439,0.105); //Sombra clara
	glBegin(GL_POLYGON);
	glVertex2i(550,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);			
	glVertex2i(540,224);			
	glEnd();
	
	glColor3f(0,0,0); //Contorno
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glVertex2i(507,30);
	glEnd();
	
	glLineWidth(1); //lineas
	glBegin(GL_LINES);
	glVertex2i(517,8);
	glVertex2i(519,222);
	glVertex2i(519,222);
	glVertex2i(529,238);
	glVertex2i(526,9);
	glVertex2i(526,227);
	glVertex2i(526,227);
	glVertex2i(533,238);
	glVertex2i(539,9);
	glVertex2i(533,238);
	glVertex2i(550,9);
	glVertex2i(540,224);
	glVertex2i(540,224);
	glVertex2i(542,238);		
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glBegin(GL_POLYGON);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);			
	glVertex2i(541,154);//
	glVertex2i(557,154);//
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(569,152);
	glVertex2i(558,146);
	glVertex2i(547,148);			
	glEnd();
	
	glBegin(GL_POLYGON); //parte 2 de la de arriba						
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(579,207);
	glVertex2i(570,217);//					
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(541,154);
	glVertex2i(557,154);
	glVertex2i(557,154);
	glVertex2i(570,164);
	glVertex2i(570,164);
	glVertex2i(570,209);
	glVertex2i(570,209);
	glVertex2i(563,220);
	glVertex2i(535,160);
	glVertex2i(555,160);
	glVertex2i(555,160);
	glVertex2i(564,169);
	glVertex2i(564,169);
	glVertex2i(563,220);						
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(535,166);
	glVertex2i(548,167);
	glVertex2i(548,167);
	glVertex2i(557,174);
	glVertex2i(557,174);
	glVertex2i(557,209);
	glVertex2i(557,209);
	glVertex2i(563,220);
	glEnd();
	
	
	glLineWidth(2); //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glVertex2i(558,146);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);						
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(591,104);
	glVertex2i(628,89);
	glVertex2i(618,69);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);
	glVertex2i(584,62);
	glEnd();		
	
	glBegin(GL_POLYGON);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(628,89);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//		
	glVertex2i(608,85);
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(546,58);
	glVertex2i(584,62);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(608,85);
	glVertex2i(606,188);	
	
	glVertex2i(552,50);
	glVertex2i(575,53);
	glVertex2i(575,53);
	glVertex2i(598,61);
	glVertex2i(598,61);
	glVertex2i(618,86);
	glVertex2i(618,86);
	glVertex2i(617,176);
	glVertex2i(617,176);
	glVertex2i(606,188);
	
	glVertex2i(546,67);
	glVertex2i(582,69);
	glVertex2i(582,69);
	glVertex2i(602,95);
	glVertex2i(602,95);
	glVertex2i(600,177);
	glVertex2i(600,177);
	glVertex2i(606,188);
	
	glVertex2i(552,72);
	glVertex2i(576,74);
	glVertex2i(576,74);
	glVertex2i(597,100);
	glVertex2i(597,100);
	glVertex2i(595,175);
	glVertex2i(595,175);
	glVertex2i(606,188);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);	
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glVertex2i(576,81);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(470,130);
	glVertex2i(462,206);
	
	glVertex2i(511,113);
	glVertex2i(490,113);
	glVertex2i(490,113);
	glVertex2i(476,128);
	glVertex2i(476,128);
	glVertex2i(474,193);
	glVertex2i(474,193);
	glVertex2i(462,206);
	
	glVertex2i(514,97);
	glVertex2i(481,99);
	glVertex2i(481,99);
	glVertex2i(465,126);
	glVertex2i(465,126);
	glVertex2i(457,196);
	glVertex2i(457,196);
	glVertex2i(462,206);
	
	glVertex2i(508,89);
	glVertex2i(475,93);
	glVertex2i(475,93);
	glVertex2i(455,124);
	glVertex2i(455,124);
	glVertex2i(450,195);
	glVertex2i(450,195);
	glVertex2i(462,206);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);		
	glEnd();
	
	glScaled(1/0.7,1/0.7,0);
	glTranslated(235,-53,0);
	
	
	
	/////////
	
	
	//cactus enfrente
	
	glColor3f(0.317,0.231,0.058);
	glLineWidth(50);
	glBegin(GL_LINES);
		glVertex2i(537,17);
		glVertex2i(615,-52);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
		glVertex2i(507,30);
		glVertex2i(504,22);
		glVertex2i(505,14);
		glVertex2i(511,7);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(527,238);
		glVertex2i(514,224);
		glVertex2i(510,118);
		glVertex2i(506,81);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
		glVertex2i(527,9);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(533,238);
		glVertex2i(526,227);
	glEnd();
	
	glColor3f(0.215,0.439,0.105); //Sombra clara
	glBegin(GL_POLYGON);
		glVertex2i(550,9);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);			
		glVertex2i(540,224);			
	glEnd();
	
	glColor3f(0,0,0); //Contorno
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
		glVertex2i(507,30);
		glVertex2i(504,22);
		glVertex2i(505,14);
		glVertex2i(511,7);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(527,238);
		glVertex2i(514,224);
		glVertex2i(510,118);
		glVertex2i(506,81);
		glVertex2i(507,30);
	glEnd();
	
	glLineWidth(1); //lineas
	glBegin(GL_LINES);
		glVertex2i(517,8);
		glVertex2i(519,222);
		glVertex2i(519,222);
		glVertex2i(529,238);
		glVertex2i(526,9);
		glVertex2i(526,227);
		glVertex2i(526,227);
		glVertex2i(533,238);
		glVertex2i(539,9);
		glVertex2i(533,238);
		glVertex2i(550,9);
		glVertex2i(540,224);
		glVertex2i(540,224);
		glVertex2i(542,238);		
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glBegin(GL_POLYGON);
		glVertex2i(558,146);
		glVertex2i(547,148);
		glVertex2i(541,154);
		glVertex2i(535,160);
		glVertex2i(535,166);
		glVertex2i(539,173);
		glVertex2i(548,177);
		glVertex2i(549,208);
		glVertex2i(557,219);
		glVertex2i(563,220);
		glVertex2i(570,217);
		glVertex2i(579,207);
		glVertex2i(577,163);
		glVertex2i(569,152);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);			
		glVertex2i(541,154);//
		glVertex2i(557,154);//
		glVertex2i(570,164);//-
		glVertex2i(577,163);//-
		glVertex2i(569,152);
		glVertex2i(558,146);
		glVertex2i(547,148);			
	glEnd();
	
	glBegin(GL_POLYGON); //parte 2 de la de arriba						
		glVertex2i(570,164);//-
		glVertex2i(577,163);//-
		glVertex2i(579,207);
		glVertex2i(570,217);//					
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
		glVertex2i(541,154);
		glVertex2i(557,154);
		glVertex2i(557,154);
		glVertex2i(570,164);
		glVertex2i(570,164);
		glVertex2i(570,209);
		glVertex2i(570,209);
		glVertex2i(563,220);
		glVertex2i(535,160);
		glVertex2i(555,160);
		glVertex2i(555,160);
		glVertex2i(564,169);
		glVertex2i(564,169);
		glVertex2i(563,220);						
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2i(535,166);
		glVertex2i(548,167);
		glVertex2i(548,167);
		glVertex2i(557,174);
		glVertex2i(557,174);
		glVertex2i(557,209);
		glVertex2i(557,209);
		glVertex2i(563,220);
	glEnd();
	
	
	glLineWidth(2); //Contorno
	glBegin(GL_LINE_STRIP);
		glVertex2i(558,146);
		glVertex2i(547,148);
		glVertex2i(541,154);
		glVertex2i(535,160);
		glVertex2i(535,166);
		glVertex2i(539,173);
		glVertex2i(548,177);
		glVertex2i(549,208);
		glVertex2i(557,219);
		glVertex2i(563,220);
		glVertex2i(570,217);
		glVertex2i(579,207);
		glVertex2i(577,163);
		glVertex2i(569,152);
		glVertex2i(558,146);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);						
	glBegin(GL_POLYGON);
		glVertex2i(576,81);
		glVertex2i(558,78);
		glVertex2i(552,72);
		glVertex2i(546,67);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex2i(576,81);
		glVertex2i(591,104);
		glVertex2i(628,89);
		glVertex2i(618,69);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//
		glVertex2i(599,187);
		glVertex2i(588,171);
		glVertex2i(591,104);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);
		glVertex2i(584,62);
	glEnd();		
	
	glBegin(GL_POLYGON);
		glVertex2i(584,62);
		glVertex2i(608,85);
		glVertex2i(628,89);
		glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//		
		glVertex2i(608,85);
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
		glVertex2i(546,58);
		glVertex2i(584,62);
		glVertex2i(584,62);
		glVertex2i(608,85);
		glVertex2i(608,85);
		glVertex2i(606,188);	
		
		glVertex2i(552,50);
		glVertex2i(575,53);
		glVertex2i(575,53);
		glVertex2i(598,61);
		glVertex2i(598,61);
		glVertex2i(618,86);
		glVertex2i(618,86);
		glVertex2i(617,176);
		glVertex2i(617,176);
		glVertex2i(606,188);
		
		glVertex2i(546,67);
		glVertex2i(582,69);
		glVertex2i(582,69);
		glVertex2i(602,95);
		glVertex2i(602,95);
		glVertex2i(600,177);
		glVertex2i(600,177);
		glVertex2i(606,188);
		
		glVertex2i(552,72);
		glVertex2i(576,74);
		glVertex2i(576,74);
		glVertex2i(597,100);
		glVertex2i(597,100);
		glVertex2i(595,175);
		glVertex2i(595,175);
		glVertex2i(606,188);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
		glVertex2i(576,81);
		glVertex2i(558,78);
		glVertex2i(552,72);
		glVertex2i(546,67);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);	
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//
		glVertex2i(599,187);
		glVertex2i(588,171);
		glVertex2i(591,104);
		glVertex2i(576,81);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(514,97);
		glVertex2i(508,89);
		glVertex2i(506,81);
		glVertex2i(483,82);
		glVertex2i(460,98);
		glVertex2i(445,133);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex2i(445,133);
		glVertex2i(444,192);
		glVertex2i(455,205);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glVertex2i(482,129);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(484,107);
		glVertex2i(470,130);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex2i(515,104);
		glVertex2i(484,107);
		glVertex2i(484,107);
		glVertex2i(470,130);
		glVertex2i(470,130);
		glVertex2i(462,206);
		
		glVertex2i(511,113);
		glVertex2i(490,113);
		glVertex2i(490,113);
		glVertex2i(476,128);
		glVertex2i(476,128);
		glVertex2i(474,193);
		glVertex2i(474,193);
		glVertex2i(462,206);
		
		glVertex2i(514,97);
		glVertex2i(481,99);
		glVertex2i(481,99);
		glVertex2i(465,126);
		glVertex2i(465,126);
		glVertex2i(457,196);
		glVertex2i(457,196);
		glVertex2i(462,206);
		
		glVertex2i(508,89);
		glVertex2i(475,93);
		glVertex2i(475,93);
		glVertex2i(455,124);
		glVertex2i(455,124);
		glVertex2i(450,195);
		glVertex2i(450,195);
		glVertex2i(462,206);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(514,97);
		glVertex2i(508,89);
		glVertex2i(506,81);
		glVertex2i(483,82);
		glVertex2i(460,98);
		glVertex2i(445,133);
		glVertex2i(444,192);
		glVertex2i(455,205);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glVertex2i(482,129);		
	glEnd();
	
	
	////Nubee
	glColor3f(1,1,1);
	glLineWidth(1);
	
	glBegin(GL_POLYGON);
		glVertex2i(481,390);
		glVertex2i(652,389);
		glVertex2i(615,400);
		glVertex2i(570,404);
		glVertex2i(561,415);
		glVertex2i(551,416);
		glVertex2i(545,412);
		glVertex2i(538,421);
		glVertex2i(530,420);
		glVertex2i(524,418);
		glVertex2i(511,427);
		glVertex2i(501,428);
		glVertex2i(493,420);
		glVertex2i(484,414);
		glVertex2i(479,407);
		glVertex2i(478,398);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex2i(655,420);
		glVertex2i(725,420);
		glVertex2i(690,426);
		glVertex2i(680,426);
		glVertex2i(675,433);
		glVertex2i(678,434);
		glVertex2i(660,427);
		glVertex2i(653,429);
		glVertex2i(648,422);		
	glEnd();
	
	
	////skull
	
	glColor3f(0.203,0.149,0.050);
	glBegin(GL_POLYGON);
		glVertex2i(285,75);
		glVertex2i(294,77);
		glVertex2i(303,84);
		glVertex2i(305,95);
		glVertex2i(309,104);
		glVertex2i(301,99);
		glVertex2i(294,87);
		glVertex2i(282,85);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex2i(251,67);
		glVertex2i(239,66);
		glVertex2i(229,68);
		glVertex2i(216,81);
		glVertex2i(231,77);
		glVertex2i(249,77);
		glVertex2i(251,67);		
	glEnd();
	
	glColor3f(0.811,0.803,0.803);
	glBegin(GL_POLYGON);
		glVertex2i(262,85);
		glVertex2i(249,77);
		glVertex2i(251,67);
		glVertex2i(251,57);
		glVertex2i(259,49);
		glVertex2i(264,41);
		glVertex2i(270,33);
		glVertex2i(278,29);
		glVertex2i(283,33);
		glVertex2i(284,44);
		glVertex2i(284,54);
		glVertex2i(288,62);
		glVertex2i(288,68);
		glVertex2i(285,75);
		glVertex2i(282,85);
		glVertex2i(272,87);
	glEnd();
	
	
	glColor3f(0,0,0);
	glBegin(GL_LINE_STRIP);
		glVertex2i(262,85);
		glVertex2i(249,77);
		glVertex2i(251,67);
		glVertex2i(251,57);
		glVertex2i(259,49);
		glVertex2i(264,41);
		glVertex2i(270,33);
		glVertex2i(278,29);
		glVertex2i(283,33);
		glVertex2i(284,44);
		glVertex2i(284,54);
		glVertex2i(288,62);
		glVertex2i(288,68);
		glVertex2i(285,75);
		glVertex2i(282,85);
		glVertex2i(272,87);
		glVertex2i(262,85);
	glEnd();
	
	
	glBegin(GL_LINES);
		glVertex2i(256,76);
		glVertex2i(269,66);
		glVertex2i(269,66);		
		glVertex2i(273,81);
		glVertex2i(269,66);		
		glVertex2i(272,55);
		
		glVertex2i(276,62);
		glVertex2i(279,69);
		
		glVertex2i(256,63);
		glVertex2i(264,59);
		
		glVertex2i(273,38);
		glVertex2i(277,33);
		glVertex2i(277,33);
		glVertex2i(278,38);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
		glVertex2i(273,47);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINES);
		glVertex2i(284,65);
		glVertex2i(279,57);
		
		glVertex2i(256,59);
		glVertex2i(263,52);
	glEnd();
	
	glFlush();
		
}

void escena1() {
	glClear(GL_COLOR_BUFFER_BIT);		//Limpia ventana de visualizacion		
	//Sol			
	glBegin(GL_TRIANGLE_FAN);
		glColor3f(1,1,1);
		glVertex2i(111,467);
		
		glColor3f(0.88,0.87,0.04);
		glVertex2i(0,308);
		glVertex2i(41,284);
		glVertex2i(90,275);
		glVertex2i(156,284);
		glVertex2i(222,302);
		glVertex2i(281,375);
		glVertex2i(305,467);
		glVertex2i(287,555);
		glVertex2i(250,600);
		glVertex2i(0,600);
		glVertex2i(0,308); 
	glEnd();		
	
	glFlush();		
	
}
	
	

void escena3() {	

	double n = 0.0, y = 0.0, x = 0.0, c = 150, cc = 12, p = 0.0;
	int b = 1, t = 0, k = 1;
	
	
	for(double i = 0; i <= 900; i+=0.1) {		
		
		glClear(GL_COLOR_BUFFER_BIT);	
		
		if(n < 10) {
			n += 0.03;
		} else {
			n = 0;			
		}
		
		if(k == 1) {
			p += 0.071;
		} else {
			p -= 0.071;
		}
		
		if(t == 1) {
			cc += 0.03;
		} else {
			cc -= 0.03;
		}
		
		if(b == 1) {
			y += 0.05;
		} else {
			y -= 0.05;
		}
		
		//Tierra
		glColor3f(0.87,0.78,0.24);
		glBegin(GL_POLYGON);				
		glVertex2i(0,0);
		glVertex2i(800,0);
		glVertex2i(800,224);
		glVertex2i(0,224);
		glEnd();
		
		//Montañas
		glLineWidth(1);
		glColor3f(0.611,0.513,0.058);
		glBegin(GL_POLYGON);
		glVertex2i(800,200);
		glVertex2i(0,200);		
		glVertex2i(0,378);
		glVertex2i(163,405);
		glVertex2i(325,341);
		glVertex2i(500,373);
		glVertex2i(668,340);
		glVertex2i(787,382);
		glVertex2i(800,382);
		glEnd();
		
		glColor3f(0.752,0.588,0.113);
		glBegin(GL_POLYGON);
		glVertex2i(800,200);
		glVertex2i(0,200);		
		glVertex2i(0,294);
		glVertex2i(98,305);
		glVertex2i(150,288);
		glVertex2i(193,285);
		glVertex2i(252,300);
		glVertex2i(294,298);
		glVertex2i(316,293);
		glVertex2i(332,298);
		glVertex2i(370,294);
		glVertex2i(398,286);
		glVertex2i(442,288);
		glVertex2i(473,296);
		glVertex2i(550,294);
		glVertex2i(600,270);
		glVertex2i(632,275);
		glVertex2i(680,293);
		glVertex2i(708,297);
		glVertex2i(753,288);
		glVertex2i(800,297);
		glEnd();
		
		glColor3f(0.811,0.709,0.086);
		glBegin(GL_POLYGON);
		glVertex2i(800,200);
		glVertex2i(0,200);		
		glVertex2i(0,250);
		glVertex2i(24,260);
		glVertex2i(72,242);
		glVertex2i(100,252);
		glVertex2i(110,248);
		glVertex2i(125,255);
		glVertex2i(154,251);
		glVertex2i(163,260);
		glVertex2i(186,252);
		glVertex2i(304,242);
		glVertex2i(333,260);
		glVertex2i(368,254);
		glVertex2i(413,261);
		glVertex2i(428,248);
		glVertex2i(468,267);
		glVertex2i(502,261);
		glVertex2i(522,251);
		glVertex2i(571,257);
		glVertex2i(601,249);
		glVertex2i(618,252);
		glVertex2i(682,256);
		glVertex2i(695,246);
		glVertex2i(710,253);
		glVertex2i(739,251);
		glVertex2i(765,260);
		glVertex2i(780,270);
		glVertex2i(800,272);
		glEnd();
		
		//piedras
		glColor3f(0.670,0.592,0.294);
		glLineWidth(1);
		glBegin(GL_POLYGON);
		glVertex2i(296,126);
		glVertex2i(310,126);
		glVertex2i(310,133);
		glVertex2i(304,140);
		glVertex2i(296,136);
		glVertex2i(293,131);		
		glEnd();
		
		glColor3f(0.450,0.317,0.113);
		glBegin(GL_POLYGON);
		glVertex2i(310,126);
		glVertex2i(310,133);
		glVertex2i(304,140);
		glVertex2i(305,130);
		glVertex2i(296,126);
		glEnd();
		
		
		
		//piedras
		
		glTranslated(100,50,0);	
		
		glColor3f(0.670,0.592,0.294);
		glLineWidth(1);
		glBegin(GL_POLYGON);
		glVertex2i(296,126);
		glVertex2i(310,126);
		glVertex2i(310,133);
		glVertex2i(304,140);
		glVertex2i(296,136);
		glVertex2i(293,131);		
		glEnd();
		
		glColor3f(0.450,0.317,0.113);
		glBegin(GL_POLYGON);
		glVertex2i(310,126);
		glVertex2i(310,133);
		glVertex2i(304,140);
		glVertex2i(305,130);
		glVertex2i(296,126);
		glEnd();
		
		glTranslated(-100,-50,0);
		
		
		//piedras
		
		glTranslated(100,-50,0);	
		
		glColor3f(0.670,0.592,0.294);
		glLineWidth(1);
		glBegin(GL_POLYGON);
		glVertex2i(296,126);
		glVertex2i(310,126);
		glVertex2i(310,133);
		glVertex2i(304,140);
		glVertex2i(296,136);
		glVertex2i(293,131);		
		glEnd();
		
		glColor3f(0.450,0.317,0.113);
		glBegin(GL_POLYGON);
		glVertex2i(310,126);
		glVertex2i(310,133);
		glVertex2i(304,140);
		glVertex2i(305,130);
		glVertex2i(296,126);
		glEnd();
		
		glTranslated(-100,50,0);
		
		
		
		
		//Sol			
		glBegin(GL_TRIANGLE_FAN);
		glColor3f(1,1,1);
		glVertex2i(36,557);
		
		glColor3f(0.88,0.87,0.04);
		glVertex2i(0,506);
		glVertex2i(14,498);
		glVertex2i(29,495);
		glVertex2i(50,498);
		glVertex2i(72,504);
		glVertex2i(91,527);
		glVertex2i(99,557);
		glVertex2i(93,585);
		glVertex2i(81,600);
		glVertex2i(0,600);
		glVertex2i(0,506); 
		
		glEnd();
		
		//Nopal//////////////////////
		glColor3f(0.482,0.611,0.023); //Base
		
		glBegin(GL_POLYGON);
		glVertex2i(44,182);
		glVertex2i(54,192);
		glVertex2i(54,203);
		glVertex2i(47,209);
		glVertex2i(36,205);
		glVertex2i(35,193);
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(44,182);
		glVertex2i(54,192);
		glVertex2i(54,203);
		glVertex2i(47,209);
		glVertex2i(48,196);
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(44,182);
		glVertex2i(54,192);
		glVertex2i(54,203);
		glVertex2i(47,209);
		glVertex2i(36,205);
		glVertex2i(35,193);
		glVertex2i(44,182);
		glEnd();
		
		glColor3f(0.482,0.611,0.023);  //Base
		glBegin(GL_POLYGON);
		glVertex2i(55,204);
		glVertex2i(63,209);
		glVertex2i(62,217);
		glVertex2i(55,218);
		glVertex2i(50,207);		
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(55,204);
		glVertex2i(63,209);
		glVertex2i(62,217);
		glVertex2i(57,210);		
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(55,204);
		glVertex2i(63,209);
		glVertex2i(62,217);
		glVertex2i(55,218);
		glVertex2i(50,207);		
		glVertex2i(55,204);
		glEnd();
		
		glColor3f(0.482,0.611,0.023);  //Base
		glBegin(GL_POLYGON);
		glVertex2i(63,212);
		glVertex2i(68,211);
		glVertex2i(73,213);
		glVertex2i(74,218);
		glVertex2i(67,219);
		glVertex2i(62,216);
		glVertex2i(63,212);
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(63,212);
		glVertex2i(68,211);
		glVertex2i(73,213);
		glVertex2i(74,218);	
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(63,212);
		glVertex2i(68,211);
		glVertex2i(73,213);
		glVertex2i(74,218);
		glVertex2i(67,219);
		glVertex2i(62,216);
		glVertex2i(63,212);
		glEnd();
		
		glColor3f(0.482,0.611,0.023);  //Base
		glBegin(GL_POLYGON);
		glVertex2i(36,206);
		glVertex2i(30,215);
		glVertex2i(25,213);
		glVertex2i(26,207);
		glVertex2i(32,204);		
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(36,206);
		glVertex2i(30,215);
		glVertex2i(25,213);			
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(36,206);
		glVertex2i(30,215);
		glVertex2i(25,213);
		glVertex2i(26,207);
		glVertex2i(32,204);		
		glVertex2i(36,206);
		glEnd();
		
		glColor3f(0.564,0.709,0.023);  //Puntos
		glPointSize(2);
		glBegin(GL_POINTS);
		glVertex2i(46,189);
		glVertex2i(48,192);
		glVertex2i(49,198);
		glVertex2i(53,203);
		glVertex2i(42,191);
		glVertex2i(38,197);
		glVertex2i(45,202);
		glEnd();
		
		glColor3f(0.337,0.227,0.101); //Sombra - suelo
		glBegin(GL_POLYGON);
		glVertex2i(45,182);
		glVertex2i(47,175);
		glVertex2i(59,174);
		glVertex2i(58,183);
		glVertex2i(50,185);
		glEnd();
		///////////
		
		//Arbusto
		glColor3f(0.517,0.827,0.082); //Base
		glBegin(GL_POLYGON);
		glVertex2i(217,178);
		glVertex2i(257,180);
		glVertex2i(250,202);
		glVertex2i(246,220);
		glVertex2i(236,214);
		glVertex2i(228,206);
		glVertex2i(222,207);
		glVertex2i(218,203);
		glVertex2i(218,194);
		glVertex2i(212,189);
		glEnd();
		
		glColor3f(0.505,0.572,0.054); //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(257,180);
		glVertex2i(217,178);
		glVertex2i(226,182);
		glVertex2i(232,188);
		glVertex2i(242,187);
		glVertex2i(246,211);
		
		glEnd();
		
		glColor3f(0.337,0.227,0.101); //Sombra - suelo
		glBegin(GL_POLYGON);
		glVertex2i(217,178);
		glVertex2i(236,175);
		glVertex2i(242,172);
		glVertex2i(248,176);
		glVertex2i(261,176);
		glVertex2i(257,180);
		glEnd();
		
		
		//////////
		glTranslated(350,-200,0);
		glScaled(1.7,1.7,0);
		
		//Arbusto
		glColor3f(0.517,0.827,0.082); //Base
		glBegin(GL_POLYGON);
		glVertex2i(217,178);
		glVertex2i(257,180);
		glVertex2i(250,202);
		glVertex2i(246,220);
		glVertex2i(236,214);
		glVertex2i(228,206);
		glVertex2i(222,207);
		glVertex2i(218,203);
		glVertex2i(218,194);
		glVertex2i(212,189);
		glEnd();
		
		glColor3f(0.505,0.572,0.054); //Sombra	
		glBegin(GL_POLYGON);
		glVertex2i(257,180);
		glVertex2i(217,178);
		glVertex2i(226,182);
		glVertex2i(232,188);
		glVertex2i(242,187);
		glVertex2i(246,211);	
		glEnd();
		
		glColor3f(0.337,0.227,0.101); //Sombra - suelo
		glBegin(GL_POLYGON);
		glVertex2i(217,178);
		glVertex2i(236,175);
		glVertex2i(242,172);
		glVertex2i(248,176);
		glVertex2i(261,176);
		glVertex2i(257,180);
		glEnd();
		
		glScaled(1/1.7, 1/1.7, 0);
		glTranslated(-350,200,0);
		////////						
		
		
		//Nopal
		glColor3f(0.482,0.611,0.023); //Base
		glBegin(GL_POLYGON);
		glVertex2i(346,170);
		glVertex2i(358,185);
		glVertex2i(358,195);
		glVertex2i(356,201);
		glVertex2i(349,205);
		glVertex2i(337,204);
		glVertex2i(331,198);
		glVertex2i(331,187);
		glVertex2i(334,177);
		glVertex2i(341,170);
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(341,170);
		glVertex2i(346,170);
		glVertex2i(358,185);
		glVertex2i(358,195);
		glVertex2i(356,201);
		glVertex2i(349,205);
		glVertex2i(348,185);
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(346,170);
		glVertex2i(358,185);
		glVertex2i(358,195);
		glVertex2i(356,201);
		glVertex2i(349,205);
		glVertex2i(337,204);
		glVertex2i(331,198);
		glVertex2i(331,187);
		glVertex2i(334,177);
		glVertex2i(341,170);
		glVertex2i(346,170);
		glEnd();
		
		glColor3f(0.482,0.611,0.023); //Base
		glBegin(GL_POLYGON);
		glVertex2i(362,201);
		glVertex2i(369,204);
		glVertex2i(370,211);
		glVertex2i(365,214);
		glVertex2i(359,209);
		glVertex2i(356,201);		
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(362,201);
		glVertex2i(369,204);
		glVertex2i(370,211);
		glVertex2i(365,206);		
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(362,201);
		glVertex2i(369,204);
		glVertex2i(370,211);
		glVertex2i(365,214);
		glVertex2i(359,209);
		glVertex2i(356,201);		
		glVertex2i(362,201);
		glEnd();
		
		glColor3f(0.482,0.611,0.023); //Base
		glBegin(GL_POLYGON);
		glVertex2i(336,203);
		glVertex2i(334,212);
		glVertex2i(328,219);
		glVertex2i(320,215);
		glVertex2i(320,210);
		glVertex2i(323,202);
		glVertex2i(332,199);
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(323,202);
		glVertex2i(332,199);
		glVertex2i(336,203);
		glVertex2i(334,212);
		glVertex2i(331,206);
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(336,203);
		glVertex2i(334,212);
		glVertex2i(328,219);
		glVertex2i(320,215);
		glVertex2i(320,210);
		glVertex2i(323,202);
		glVertex2i(332,199);
		glVertex2i(336,203);
		glEnd();
		
		glColor3f(0.564,0.709,0.023);  //Puntos
		glPointSize(3);
		glBegin(GL_POINTS);
		glVertex2i(348,200);
		glVertex2i(339,196);
		glVertex2i(337,186);
		glVertex2i(343,178);
		glVertex2i(348,186);
		glVertex2i(346,190);		
		glVertex2i(330,206);
		glVertex2i(325,207);
		glVertex2i(324,213);
		glVertex2i(331,211);
		glEnd();
		
		glColor3f(0.337,0.227,0.101); //Sombra - suelo
		glBegin(GL_POLYGON);
		glVertex2i(343,169);
		glVertex2i(350,163);
		glVertex2i(362,160);
		glVertex2i(372,164);
		glVertex2i(369,172);
		glVertex2i(358,173);
		glVertex2i(349,172);
		glEnd();
		
		
		
		///////// Cactus atrás
		
		glTranslated(450,180,0);
		glScaled(0.4,0.4,0);
		
		glColor3f(0.317,0.231,0.058);
		glLineWidth(20);
		glBegin(GL_LINES);
		glVertex2i(537,17);
		glVertex2i(615,-52);
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glLineWidth(1);
		glBegin(GL_POLYGON);
		glVertex2i(507,30);
		glVertex2i(504,22);
		glVertex2i(505,14);
		glVertex2i(511,7);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(527,238);
		glVertex2i(514,224);
		glVertex2i(510,118);
		glVertex2i(506,81);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);
		glVertex2i(527,9);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(533,238);
		glVertex2i(526,227);
		glEnd();
		
		glColor3f(0.215,0.439,0.105); //Sombra clara
		glBegin(GL_POLYGON);
		glVertex2i(550,9);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);			
		glVertex2i(540,224);			
		glEnd();
		
		glColor3f(0,0,0); //Contorno
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(507,30);
		glVertex2i(504,22);
		glVertex2i(505,14);
		glVertex2i(511,7);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(527,238);
		glVertex2i(514,224);
		glVertex2i(510,118);
		glVertex2i(506,81);
		glVertex2i(507,30);
		glEnd();
		
		glLineWidth(1); //lineas
		glBegin(GL_LINES);
		glVertex2i(517,8);
		glVertex2i(519,222);
		glVertex2i(519,222);
		glVertex2i(529,238);
		glVertex2i(526,9);
		glVertex2i(526,227);
		glVertex2i(526,227);
		glVertex2i(533,238);
		glVertex2i(539,9);
		glVertex2i(533,238);
		glVertex2i(550,9);
		glVertex2i(540,224);
		glVertex2i(540,224);
		glVertex2i(542,238);		
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glBegin(GL_POLYGON);
		glVertex2i(558,146);
		glVertex2i(547,148);
		glVertex2i(541,154);
		glVertex2i(535,160);
		glVertex2i(535,166);
		glVertex2i(539,173);
		glVertex2i(548,177);
		glVertex2i(549,208);
		glVertex2i(557,219);
		glVertex2i(563,220);
		glVertex2i(570,217);
		glVertex2i(579,207);
		glVertex2i(577,163);
		glVertex2i(569,152);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);			
		glVertex2i(541,154);//
		glVertex2i(557,154);//
		glVertex2i(570,164);//-
		glVertex2i(577,163);//-
		glVertex2i(569,152);
		glVertex2i(558,146);
		glVertex2i(547,148);			
		glEnd();
		
		glBegin(GL_POLYGON); //parte 2 de la de arriba						
		glVertex2i(570,164);//-
		glVertex2i(577,163);//-
		glVertex2i(579,207);
		glVertex2i(570,217);//					
		glEnd();
		
		glColor3f(0,0,0); //lineas
		glBegin(GL_LINES);
		glVertex2i(541,154);
		glVertex2i(557,154);
		glVertex2i(557,154);
		glVertex2i(570,164);
		glVertex2i(570,164);
		glVertex2i(570,209);
		glVertex2i(570,209);
		glVertex2i(563,220);
		glVertex2i(535,160);
		glVertex2i(555,160);
		glVertex2i(555,160);
		glVertex2i(564,169);
		glVertex2i(564,169);
		glVertex2i(563,220);						
		glEnd();
		
		glBegin(GL_LINES);
		glVertex2i(535,166);
		glVertex2i(548,167);
		glVertex2i(548,167);
		glVertex2i(557,174);
		glVertex2i(557,174);
		glVertex2i(557,209);
		glVertex2i(557,209);
		glVertex2i(563,220);
		glEnd();
		
		
		glLineWidth(2); //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(558,146);
		glVertex2i(547,148);
		glVertex2i(541,154);
		glVertex2i(535,160);
		glVertex2i(535,166);
		glVertex2i(539,173);
		glVertex2i(548,177);
		glVertex2i(549,208);
		glVertex2i(557,219);
		glVertex2i(563,220);
		glVertex2i(570,217);
		glVertex2i(579,207);
		glVertex2i(577,163);
		glVertex2i(569,152);
		glVertex2i(558,146);
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glLineWidth(1);						
		glBegin(GL_POLYGON);
		glVertex2i(576,81);
		glVertex2i(558,78);
		glVertex2i(552,72);
		glVertex2i(546,67);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);			
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(576,81);
		glVertex2i(591,104);
		glVertex2i(628,89);
		glVertex2i(618,69);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//
		glVertex2i(599,187);
		glVertex2i(588,171);
		glVertex2i(591,104);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);
		glVertex2i(584,62);
		glEnd();		
		
		glBegin(GL_POLYGON);
		glVertex2i(584,62);
		glVertex2i(608,85);
		glVertex2i(628,89);
		glVertex2i(618,69);			
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//		
		glVertex2i(608,85);
		glEnd();
		
		glColor3f(0,0,0); //lineas
		glBegin(GL_LINES);
		glVertex2i(546,58);
		glVertex2i(584,62);
		glVertex2i(584,62);
		glVertex2i(608,85);
		glVertex2i(608,85);
		glVertex2i(606,188);	
		
		glVertex2i(552,50);
		glVertex2i(575,53);
		glVertex2i(575,53);
		glVertex2i(598,61);
		glVertex2i(598,61);
		glVertex2i(618,86);
		glVertex2i(618,86);
		glVertex2i(617,176);
		glVertex2i(617,176);
		glVertex2i(606,188);
		
		glVertex2i(546,67);
		glVertex2i(582,69);
		glVertex2i(582,69);
		glVertex2i(602,95);
		glVertex2i(602,95);
		glVertex2i(600,177);
		glVertex2i(600,177);
		glVertex2i(606,188);
		
		glVertex2i(552,72);
		glVertex2i(576,74);
		glVertex2i(576,74);
		glVertex2i(597,100);
		glVertex2i(597,100);
		glVertex2i(595,175);
		glVertex2i(595,175);
		glVertex2i(606,188);
		glEnd();
		
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(576,81);
		glVertex2i(558,78);
		glVertex2i(552,72);
		glVertex2i(546,67);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);	
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//
		glVertex2i(599,187);
		glVertex2i(588,171);
		glVertex2i(591,104);
		glVertex2i(576,81);
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glLineWidth(1);
		glBegin(GL_POLYGON);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(514,97);
		glVertex2i(508,89);
		glVertex2i(506,81);
		glVertex2i(483,82);
		glVertex2i(460,98);
		glVertex2i(445,133);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(445,133);
		glVertex2i(444,192);
		glVertex2i(455,205);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glVertex2i(482,129);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(484,107);
		glVertex2i(470,130);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glEnd();
		
		glColor3f(0,0,0);
		glBegin(GL_LINES);
		glVertex2i(515,104);
		glVertex2i(484,107);
		glVertex2i(484,107);
		glVertex2i(470,130);
		glVertex2i(470,130);
		glVertex2i(462,206);
		
		glVertex2i(511,113);
		glVertex2i(490,113);
		glVertex2i(490,113);
		glVertex2i(476,128);
		glVertex2i(476,128);
		glVertex2i(474,193);
		glVertex2i(474,193);
		glVertex2i(462,206);
		
		glVertex2i(514,97);
		glVertex2i(481,99);
		glVertex2i(481,99);
		glVertex2i(465,126);
		glVertex2i(465,126);
		glVertex2i(457,196);
		glVertex2i(457,196);
		glVertex2i(462,206);
		
		glVertex2i(508,89);
		glVertex2i(475,93);
		glVertex2i(475,93);
		glVertex2i(455,124);
		glVertex2i(455,124);
		glVertex2i(450,195);
		glVertex2i(450,195);
		glVertex2i(462,206);
		glEnd();
		
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(514,97);
		glVertex2i(508,89);
		glVertex2i(506,81);
		glVertex2i(483,82);
		glVertex2i(460,98);
		glVertex2i(445,133);
		glVertex2i(444,192);
		glVertex2i(455,205);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glVertex2i(482,129);		
		glEnd();
		
		glScaled(1/0.4,1/0.4,0);
		glTranslated(-450,-180,0);
		
		
		
		/////////
		
		
		
		
		//FOxy
		glLineWidth(1);
		//Cuerpo
		glColor3f(0.964,0.396,0.054);
		glBegin(GL_POLYGON);
		glVertex2i(257,180);
		glVertex2i(288,177);
		glVertex2i(289,157);
		glVertex2i(283,149);
		glVertex2i(276,149);
		glVertex2i(257,166);
		glVertex2i(249,176);
		glVertex2i(250,180);		
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(250,180);
		glVertex2i(264,189);
		glVertex2i(276,188);
		glVertex2i(288,177);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(257,166);
		glVertex2i(257,163);
		glVertex2i(245,150);
		glVertex2i(251,150);
		glVertex2i(254,150);
		glVertex2i(259,145);
		glVertex2i(265,147);
		glVertex2i(270,145);
		glVertex2i(276,149);
		glEnd();
		
		glColor3f(0.345,0.129,0);
		glBegin(GL_TRIANGLES);
		glVertex2i(245,150);
		glVertex2i(251,150);
		glVertex2i(251,143);
		glEnd();
		
		glColor3f(0,0,0);
		
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(285,158);
		glVertex2i(280,160);
		glVertex2i(275,155);
		glEnd();
		
		glBegin(GL_LINES);
		glVertex2i(255,171);
		glVertex2i(261,165);
		glEnd();
		
		glLineWidth(3);
		glBegin(GL_LINE_STRIP);
		glVertex2i(283,148);
		glVertex2i(277,150);
		glVertex2i(275,155);
		glEnd();
		
		glLineWidth(1);
		glBegin(GL_LINE_STRIP);
		glVertex2i(261,165);
		glVertex2i(260,151);
		glVertex2i(257,148); //
		glVertex2i(259,145);
		glEnd();
		
		glBegin(GL_LINE_STRIP);
		glVertex2i(257,148);
		glVertex2i(254,150);
		glVertex2i(257,152); //
		glVertex2i(257,163);
		glEnd();
		
		glBegin(GL_LINE_STRIP);
		glVertex2i(265,170);
		glVertex2i(269,165);
		glVertex2i(267,156); //
		glVertex2i(264,146);
		glEnd();
		
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(268,168);
		glVertex2i(271,170);
		glVertex2i(271,179);
		glEnd();
		
		glLineWidth(1);
		glBegin(GL_LINE_LOOP);
		glVertex2i(257,166);
		glVertex2i(249,176);
		glVertex2i(250,180);
		glVertex2i(264,189);
		glVertex2i(276,188);
		glVertex2i(288,177);
		glVertex2i(289,157);
		glVertex2i(283,149);
		glVertex2i(276,149);
		glVertex2i(270,145);
		glVertex2i(265,147);
		glVertex2i(259,145);
		glVertex2i(254,150);
		glVertex2i(251,150);
		glVertex2i(251,143);
		glVertex2i(245,150);
		glVertex2i(257,163);
		glVertex2i(257,166);		
		glEnd();
		
		
		/////////////////////
		glTranslated(0,-n,0);
		
		//cabeza
		glColor3f(0.964,0.396,0.054);
		glBegin(GL_POLYGON);
		glVertex2i(244,201);
		glVertex2i(260,201);
		glVertex2i(271,208);
		glVertex2i(271,202);
		glVertex2i(265,194);
		glVertex2i(264,185);
		glVertex2i(257,180);
		glVertex2i(250,180);
		glVertex2i(244,185);
		glVertex2i(243,191);
		glVertex2i(235,200);
		glVertex2i(235,206);
		glEnd();
		
		glColor3f(0.345,0.129,0);
		glBegin(GL_POLYGON);
		glVertex2i(235,206);
		glVertex2i(244,201);
		glVertex2i(249,196);
		glVertex2i(246,194);
		glVertex2i(241,196);		
		glEnd();
		
		glColor3f(0,0,0);
		glBegin(GL_LINES);
		glVertex2i(271,208);
		glVertex2i(258,196);
		glEnd();
		
		glColor3f(0.345,0.129,0);
		glBegin(GL_POLYGON);
		glVertex2i(266,205);
		glVertex2i(271,208);
		glVertex2i(271,202);
		glVertex2i(265,194);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(258,196);
		glVertex2i(261,192);
		glVertex2i(265,194);
		glVertex2i(271,202);
		glEnd();
		
		glBegin(GL_LINE_STRIP);
		glVertex2i(245,190);
		glVertex2i(248,192);
		glVertex2i(251,190);
		glEnd();
		
		glColor3f(0,0,0);
		glBegin(GL_LINE_STRIP);
		glVertex2i(255,190);
		glVertex2i(258,192);
		glVertex2i(261,190);
		glEnd();
		
		glBegin(GL_LINE_STRIP);
		glVertex2i(247,187);
		glVertex2i(251,182);
		glVertex2i(255,182);
		glVertex2i(260,187);
		glEnd();
		
		glBegin(GL_LINES);	
		glVertex2i(253,183);
		glVertex2i(253,186);
		glEnd();
		
		glColor3f(0,0,0);
		glBegin(GL_LINE_LOOP);
		glVertex2i(244,201);
		glVertex2i(260,201);
		glVertex2i(271,208);
		glVertex2i(271,202);
		glVertex2i(265,194);
		glVertex2i(264,185);
		glVertex2i(257,180);
		glVertex2i(250,180);
		glVertex2i(244,185);
		glVertex2i(243,191);
		glVertex2i(235,200);
		glVertex2i(235,206);
		glEnd();
		
		glColor3f(0.345,0.129,0);
		glBegin(GL_TRIANGLES);
		glVertex2i(250,180);
		glVertex2i(255,175);
		glVertex2i(257,180);
		glEnd();		
		
		glTranslated(0,n,0);
		////
		
		
		//Rueda////
		
		glLineWidth(3);
		
		glTranslated(-i,y,0);
		
		glTranslated(450,10,0);
		
		glTranslated(389,130,0);
		glRotated(i,0,0,1);
		glTranslated(-389,-130,0);
			
		glColor3f(0.317,0.235,0.066);
		glBegin(GL_LINE_STRIP);
			glVertex2i(395,103);
			glVertex2i(415,117);
			glVertex2i(414,142);
			glVertex2i(396,157);
			glVertex2i(373,152);
			glVertex2i(362,130);
			glVertex2i(372,109);
			glVertex2i(394,107);
			glVertex2i(410,119);
			glVertex2i(409,140);
			glVertex2i(396,151);
			glVertex2i(379,145);
			glVertex2i(371,130);
			glVertex2i(376,113);
			glVertex2i(392,113);
			glVertex2i(406,121);
			glVertex2i(404,136);
			glVertex2i(392,142);
			glVertex2i(380,129);
			glVertex2i(389,118);
			glVertex2i(401,125);
			glVertex2i(393,134);
			glVertex2i(391,125);
		glEnd();
		
		glTranslated(389,130,0);
		glRotated(-i,0,0,1);
		glTranslated(-389,-130,0);
		
		glTranslated(-450,-10,0);
		
		glTranslated(i,-y,0);
		//////////
		
		
		////Nubee
		glColor3f(1,1,1);
		glLineWidth(1);
		
		glTranslated(-x,0,0);
		
		glBegin(GL_POLYGON);
		glVertex2i(481,390);
		glVertex2i(652,389);
		glVertex2i(615,400);
		glVertex2i(570,404);
		glVertex2i(561,415);
		glVertex2i(551,416);
		glVertex2i(545,412);
		glVertex2i(538,421);
		glVertex2i(530,420);
		glVertex2i(524,418);
		glVertex2i(511,427);
		glVertex2i(501,428);
		glVertex2i(493,420);
		glVertex2i(484,414);
		glVertex2i(479,407);
		glVertex2i(478,398);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(655,420);
		glVertex2i(725,420);
		glVertex2i(690,426);
		glVertex2i(680,426);
		glVertex2i(675,433);
		glVertex2i(678,434);
		glVertex2i(660,427);
		glVertex2i(653,429);
		glVertex2i(648,422);		
		glEnd();
		
		glTranslated(x,0,0);
		////////
		
		
		///////// Cactus 
		
		glTranslated(-235,53,0);
		glScaled(0.7,0.7,0);
		
		glColor3f(0.317,0.231,0.058);
		glLineWidth(30);
		glBegin(GL_LINES);
		glVertex2i(537,17);
		glVertex2i(615,-52);
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glLineWidth(1);
		glBegin(GL_POLYGON);
		glVertex2i(507,30);
		glVertex2i(504,22);
		glVertex2i(505,14);
		glVertex2i(511,7);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(527,238);
		glVertex2i(514,224);
		glVertex2i(510,118);
		glVertex2i(506,81);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);
		glVertex2i(527,9);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(533,238);
		glVertex2i(526,227);
		glEnd();
		
		glColor3f(0.215,0.439,0.105); //Sombra clara
		glBegin(GL_POLYGON);
		glVertex2i(550,9);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);			
		glVertex2i(540,224);			
		glEnd();
		
		glColor3f(0,0,0); //Contorno
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(507,30);
		glVertex2i(504,22);
		glVertex2i(505,14);
		glVertex2i(511,7);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(527,238);
		glVertex2i(514,224);
		glVertex2i(510,118);
		glVertex2i(506,81);
		glVertex2i(507,30);
		glEnd();
		
		glLineWidth(1); //lineas
		glBegin(GL_LINES);
		glVertex2i(517,8);
		glVertex2i(519,222);
		glVertex2i(519,222);
		glVertex2i(529,238);
		glVertex2i(526,9);
		glVertex2i(526,227);
		glVertex2i(526,227);
		glVertex2i(533,238);
		glVertex2i(539,9);
		glVertex2i(533,238);
		glVertex2i(550,9);
		glVertex2i(540,224);
		glVertex2i(540,224);
		glVertex2i(542,238);		
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glBegin(GL_POLYGON);
		glVertex2i(558,146);
		glVertex2i(547,148);
		glVertex2i(541,154);
		glVertex2i(535,160);
		glVertex2i(535,166);
		glVertex2i(539,173);
		glVertex2i(548,177);
		glVertex2i(549,208);
		glVertex2i(557,219);
		glVertex2i(563,220);
		glVertex2i(570,217);
		glVertex2i(579,207);
		glVertex2i(577,163);
		glVertex2i(569,152);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);			
		glVertex2i(541,154);//
		glVertex2i(557,154);//
		glVertex2i(570,164);//-
		glVertex2i(577,163);//-
		glVertex2i(569,152);
		glVertex2i(558,146);
		glVertex2i(547,148);			
		glEnd();
		
		glBegin(GL_POLYGON); //parte 2 de la de arriba						
		glVertex2i(570,164);//-
		glVertex2i(577,163);//-
		glVertex2i(579,207);
		glVertex2i(570,217);//					
		glEnd();
		
		glColor3f(0,0,0); //lineas
		glBegin(GL_LINES);
		glVertex2i(541,154);
		glVertex2i(557,154);
		glVertex2i(557,154);
		glVertex2i(570,164);
		glVertex2i(570,164);
		glVertex2i(570,209);
		glVertex2i(570,209);
		glVertex2i(563,220);
		glVertex2i(535,160);
		glVertex2i(555,160);
		glVertex2i(555,160);
		glVertex2i(564,169);
		glVertex2i(564,169);
		glVertex2i(563,220);						
		glEnd();
		
		glBegin(GL_LINES);
		glVertex2i(535,166);
		glVertex2i(548,167);
		glVertex2i(548,167);
		glVertex2i(557,174);
		glVertex2i(557,174);
		glVertex2i(557,209);
		glVertex2i(557,209);
		glVertex2i(563,220);
		glEnd();
		
		
		glLineWidth(2); //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(558,146);
		glVertex2i(547,148);
		glVertex2i(541,154);
		glVertex2i(535,160);
		glVertex2i(535,166);
		glVertex2i(539,173);
		glVertex2i(548,177);
		glVertex2i(549,208);
		glVertex2i(557,219);
		glVertex2i(563,220);
		glVertex2i(570,217);
		glVertex2i(579,207);
		glVertex2i(577,163);
		glVertex2i(569,152);
		glVertex2i(558,146);
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glLineWidth(1);						
		glBegin(GL_POLYGON);
		glVertex2i(576,81);
		glVertex2i(558,78);
		glVertex2i(552,72);
		glVertex2i(546,67);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);			
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(576,81);
		glVertex2i(591,104);
		glVertex2i(628,89);
		glVertex2i(618,69);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//
		glVertex2i(599,187);
		glVertex2i(588,171);
		glVertex2i(591,104);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);
		glVertex2i(584,62);
		glEnd();		
		
		glBegin(GL_POLYGON);
		glVertex2i(584,62);
		glVertex2i(608,85);
		glVertex2i(628,89);
		glVertex2i(618,69);			
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//		
		glVertex2i(608,85);
		glEnd();
		
		glColor3f(0,0,0); //lineas
		glBegin(GL_LINES);
		glVertex2i(546,58);
		glVertex2i(584,62);
		glVertex2i(584,62);
		glVertex2i(608,85);
		glVertex2i(608,85);
		glVertex2i(606,188);	
		
		glVertex2i(552,50);
		glVertex2i(575,53);
		glVertex2i(575,53);
		glVertex2i(598,61);
		glVertex2i(598,61);
		glVertex2i(618,86);
		glVertex2i(618,86);
		glVertex2i(617,176);
		glVertex2i(617,176);
		glVertex2i(606,188);
		
		glVertex2i(546,67);
		glVertex2i(582,69);
		glVertex2i(582,69);
		glVertex2i(602,95);
		glVertex2i(602,95);
		glVertex2i(600,177);
		glVertex2i(600,177);
		glVertex2i(606,188);
		
		glVertex2i(552,72);
		glVertex2i(576,74);
		glVertex2i(576,74);
		glVertex2i(597,100);
		glVertex2i(597,100);
		glVertex2i(595,175);
		glVertex2i(595,175);
		glVertex2i(606,188);
		glEnd();
		
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(576,81);
		glVertex2i(558,78);
		glVertex2i(552,72);
		glVertex2i(546,67);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);	
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//
		glVertex2i(599,187);
		glVertex2i(588,171);
		glVertex2i(591,104);
		glVertex2i(576,81);
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glLineWidth(1);
		glBegin(GL_POLYGON);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(514,97);
		glVertex2i(508,89);
		glVertex2i(506,81);
		glVertex2i(483,82);
		glVertex2i(460,98);
		glVertex2i(445,133);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(445,133);
		glVertex2i(444,192);
		glVertex2i(455,205);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glVertex2i(482,129);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(484,107);
		glVertex2i(470,130);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glEnd();
		
		glColor3f(0,0,0);
		glBegin(GL_LINES);
		glVertex2i(515,104);
		glVertex2i(484,107);
		glVertex2i(484,107);
		glVertex2i(470,130);
		glVertex2i(470,130);
		glVertex2i(462,206);
		
		glVertex2i(511,113);
		glVertex2i(490,113);
		glVertex2i(490,113);
		glVertex2i(476,128);
		glVertex2i(476,128);
		glVertex2i(474,193);
		glVertex2i(474,193);
		glVertex2i(462,206);
		
		glVertex2i(514,97);
		glVertex2i(481,99);
		glVertex2i(481,99);
		glVertex2i(465,126);
		glVertex2i(465,126);
		glVertex2i(457,196);
		glVertex2i(457,196);
		glVertex2i(462,206);
		
		glVertex2i(508,89);
		glVertex2i(475,93);
		glVertex2i(475,93);
		glVertex2i(455,124);
		glVertex2i(455,124);
		glVertex2i(450,195);
		glVertex2i(450,195);
		glVertex2i(462,206);
		glEnd();
		
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(514,97);
		glVertex2i(508,89);
		glVertex2i(506,81);
		glVertex2i(483,82);
		glVertex2i(460,98);
		glVertex2i(445,133);
		glVertex2i(444,192);
		glVertex2i(455,205);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glVertex2i(482,129);		
		glEnd();
		
		glScaled(1/0.7,1/0.7,0);
		glTranslated(235,-53,0);
		
		
		
		/////////
		
		glTranslated(550,-300,0);	
		glScaled(2.0,2.0,0);
		
		//Nopal//////////////////////
		glColor3f(0.482,0.611,0.023); //Base
		
		glBegin(GL_POLYGON);
		glVertex2i(44,182);
		glVertex2i(54,192);
		glVertex2i(54,203);
		glVertex2i(47,209);
		glVertex2i(36,205);
		glVertex2i(35,193);
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(44,182);
		glVertex2i(54,192);
		glVertex2i(54,203);
		glVertex2i(47,209);
		glVertex2i(48,196);
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(44,182);
		glVertex2i(54,192);
		glVertex2i(54,203);
		glVertex2i(47,209);
		glVertex2i(36,205);
		glVertex2i(35,193);
		glVertex2i(44,182);
		glEnd();
		
		glColor3f(0.482,0.611,0.023);  //Base
		glBegin(GL_POLYGON);
		glVertex2i(55,204);
		glVertex2i(63,209);
		glVertex2i(62,217);
		glVertex2i(55,218);
		glVertex2i(50,207);		
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(55,204);
		glVertex2i(63,209);
		glVertex2i(62,217);
		glVertex2i(57,210);		
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(55,204);
		glVertex2i(63,209);
		glVertex2i(62,217);
		glVertex2i(55,218);
		glVertex2i(50,207);		
		glVertex2i(55,204);
		glEnd();
		
		glColor3f(0.482,0.611,0.023);  //Base
		glBegin(GL_POLYGON);
		glVertex2i(63,212);
		glVertex2i(68,211);
		glVertex2i(73,213);
		glVertex2i(74,218);
		glVertex2i(67,219);
		glVertex2i(62,216);
		glVertex2i(63,212);
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(63,212);
		glVertex2i(68,211);
		glVertex2i(73,213);
		glVertex2i(74,218);	
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(63,212);
		glVertex2i(68,211);
		glVertex2i(73,213);
		glVertex2i(74,218);
		glVertex2i(67,219);
		glVertex2i(62,216);
		glVertex2i(63,212);
		glEnd();
		
		glColor3f(0.482,0.611,0.023);  //Base
		glBegin(GL_POLYGON);
		glVertex2i(36,206);
		glVertex2i(30,215);
		glVertex2i(25,213);
		glVertex2i(26,207);
		glVertex2i(32,204);		
		glEnd();
		
		glColor3f(0.419,0.541,0.0);	 //Sombra
		glBegin(GL_POLYGON);
		glVertex2i(36,206);
		glVertex2i(30,215);
		glVertex2i(25,213);			
		glEnd();
		
		glColor3f(0.301,0.403,0.019);  //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(36,206);
		glVertex2i(30,215);
		glVertex2i(25,213);
		glVertex2i(26,207);
		glVertex2i(32,204);		
		glVertex2i(36,206);
		glEnd();
		
		glColor3f(0.564,0.709,0.023);  //Puntos
		glPointSize(2);
		glBegin(GL_POINTS);
		glVertex2i(46,189);
		glVertex2i(48,192);
		glVertex2i(49,198);
		glVertex2i(53,203);
		glVertex2i(42,191);
		glVertex2i(38,197);
		glVertex2i(45,202);
		glEnd();
		
		glColor3f(0.337,0.227,0.101); //Sombra - suelo
		glBegin(GL_POLYGON);
		glVertex2i(45,182);
		glVertex2i(47,175);
		glVertex2i(59,174);
		glVertex2i(58,183);
		glVertex2i(50,185);
		glEnd();
		
		
		glScaled(1/2.0,1/2.0,0);
		glTranslated(-550,300,0);
		///////////
		
		
		
		//cactus enfrente
		
		glColor3f(0.317,0.231,0.058);
		glLineWidth(50);
		glBegin(GL_LINES);
		glVertex2i(537,17);
		glVertex2i(615,-52);
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glLineWidth(1);
		glBegin(GL_POLYGON);
		glVertex2i(507,30);
		glVertex2i(504,22);
		glVertex2i(505,14);
		glVertex2i(511,7);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(527,238);
		glVertex2i(514,224);
		glVertex2i(510,118);
		glVertex2i(506,81);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);
		glVertex2i(527,9);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(533,238);
		glVertex2i(526,227);
		glEnd();
		
		glColor3f(0.215,0.439,0.105); //Sombra clara
		glBegin(GL_POLYGON);
		glVertex2i(550,9);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);			
		glVertex2i(540,224);			
		glEnd();
		
		glColor3f(0,0,0); //Contorno
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(507,30);
		glVertex2i(504,22);
		glVertex2i(505,14);
		glVertex2i(511,7);
		glVertex2i(560,9);
		glVertex2i(565,15);
		glVertex2i(564,44);
		glVertex2i(558,78);
		glVertex2i(558,146);
		glVertex2i(557,219);
		glVertex2i(552,230);
		glVertex2i(542,238);
		glVertex2i(527,238);
		glVertex2i(514,224);
		glVertex2i(510,118);
		glVertex2i(506,81);
		glVertex2i(507,30);
		glEnd();
		
		glLineWidth(1); //lineas
		glBegin(GL_LINES);
		glVertex2i(517,8);
		glVertex2i(519,222);
		glVertex2i(519,222);
		glVertex2i(529,238);
		glVertex2i(526,9);
		glVertex2i(526,227);
		glVertex2i(526,227);
		glVertex2i(533,238);
		glVertex2i(539,9);
		glVertex2i(533,238);
		glVertex2i(550,9);
		glVertex2i(540,224);
		glVertex2i(540,224);
		glVertex2i(542,238);		
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glBegin(GL_POLYGON);
		glVertex2i(558,146);
		glVertex2i(547,148);
		glVertex2i(541,154);
		glVertex2i(535,160);
		glVertex2i(535,166);
		glVertex2i(539,173);
		glVertex2i(548,177);
		glVertex2i(549,208);
		glVertex2i(557,219);
		glVertex2i(563,220);
		glVertex2i(570,217);
		glVertex2i(579,207);
		glVertex2i(577,163);
		glVertex2i(569,152);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);			
		glVertex2i(541,154);//
		glVertex2i(557,154);//
		glVertex2i(570,164);//-
		glVertex2i(577,163);//-
		glVertex2i(569,152);
		glVertex2i(558,146);
		glVertex2i(547,148);			
		glEnd();
		
		glBegin(GL_POLYGON); //parte 2 de la de arriba						
		glVertex2i(570,164);//-
		glVertex2i(577,163);//-
		glVertex2i(579,207);
		glVertex2i(570,217);//					
		glEnd();
		
		glColor3f(0,0,0); //lineas
		glBegin(GL_LINES);
		glVertex2i(541,154);
		glVertex2i(557,154);
		glVertex2i(557,154);
		glVertex2i(570,164);
		glVertex2i(570,164);
		glVertex2i(570,209);
		glVertex2i(570,209);
		glVertex2i(563,220);
		glVertex2i(535,160);
		glVertex2i(555,160);
		glVertex2i(555,160);
		glVertex2i(564,169);
		glVertex2i(564,169);
		glVertex2i(563,220);						
		glEnd();
		
		glBegin(GL_LINES);
		glVertex2i(535,166);
		glVertex2i(548,167);
		glVertex2i(548,167);
		glVertex2i(557,174);
		glVertex2i(557,174);
		glVertex2i(557,209);
		glVertex2i(557,209);
		glVertex2i(563,220);
		glEnd();
		
		
		glLineWidth(2); //Contorno
		glBegin(GL_LINE_STRIP);
		glVertex2i(558,146);
		glVertex2i(547,148);
		glVertex2i(541,154);
		glVertex2i(535,160);
		glVertex2i(535,166);
		glVertex2i(539,173);
		glVertex2i(548,177);
		glVertex2i(549,208);
		glVertex2i(557,219);
		glVertex2i(563,220);
		glVertex2i(570,217);
		glVertex2i(579,207);
		glVertex2i(577,163);
		glVertex2i(569,152);
		glVertex2i(558,146);
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glLineWidth(1);						
		glBegin(GL_POLYGON);
		glVertex2i(576,81);
		glVertex2i(558,78);
		glVertex2i(552,72);
		glVertex2i(546,67);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);			
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(576,81);
		glVertex2i(591,104);
		glVertex2i(628,89);
		glVertex2i(618,69);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//
		glVertex2i(599,187);
		glVertex2i(588,171);
		glVertex2i(591,104);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);
		glVertex2i(584,62);
		glEnd();		
		
		glBegin(GL_POLYGON);
		glVertex2i(584,62);
		glVertex2i(608,85);
		glVertex2i(628,89);
		glVertex2i(618,69);			
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//		
		glVertex2i(608,85);
		glEnd();
		
		glColor3f(0,0,0); //lineas
		glBegin(GL_LINES);
		glVertex2i(546,58);
		glVertex2i(584,62);
		glVertex2i(584,62);
		glVertex2i(608,85);
		glVertex2i(608,85);
		glVertex2i(606,188);	
		
		glVertex2i(552,50);
		glVertex2i(575,53);
		glVertex2i(575,53);
		glVertex2i(598,61);
		glVertex2i(598,61);
		glVertex2i(618,86);
		glVertex2i(618,86);
		glVertex2i(617,176);
		glVertex2i(617,176);
		glVertex2i(606,188);
		
		glVertex2i(546,67);
		glVertex2i(582,69);
		glVertex2i(582,69);
		glVertex2i(602,95);
		glVertex2i(602,95);
		glVertex2i(600,177);
		glVertex2i(600,177);
		glVertex2i(606,188);
		
		glVertex2i(552,72);
		glVertex2i(576,74);
		glVertex2i(576,74);
		glVertex2i(597,100);
		glVertex2i(597,100);
		glVertex2i(595,175);
		glVertex2i(595,175);
		glVertex2i(606,188);
		glEnd();
		
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(576,81);
		glVertex2i(558,78);
		glVertex2i(552,72);
		glVertex2i(546,67);
		glVertex2i(546,58);
		glVertex2i(552,50);
		glVertex2i(564,44);
		glVertex2i(583,47);
		glVertex2i(618,69);	
		glVertex2i(628,89);
		glVertex2i(630,158);
		glVertex2i(624,176);
		glVertex2i(616,187);
		glVertex2i(606,188);//
		glVertex2i(599,187);
		glVertex2i(588,171);
		glVertex2i(591,104);
		glVertex2i(576,81);
		glEnd();
		
		glColor3f(0.643,0.803,0.054); //Base
		glLineWidth(1);
		glBegin(GL_POLYGON);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(514,97);
		glVertex2i(508,89);
		glVertex2i(506,81);
		glVertex2i(483,82);
		glVertex2i(460,98);
		glVertex2i(445,133);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(445,133);
		glVertex2i(444,192);
		glVertex2i(455,205);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glVertex2i(482,129);
		glEnd();
		
		glColor3f(0.396,0.701,0.270); //sombra
		glBegin(GL_POLYGON);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(484,107);
		glVertex2i(470,130);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glEnd();
		
		glColor3f(0,0,0);
		glBegin(GL_LINES);
		glVertex2i(515,104);
		glVertex2i(484,107);
		glVertex2i(484,107);
		glVertex2i(470,130);
		glVertex2i(470,130);
		glVertex2i(462,206);
		
		glVertex2i(511,113);
		glVertex2i(490,113);
		glVertex2i(490,113);
		glVertex2i(476,128);
		glVertex2i(476,128);
		glVertex2i(474,193);
		glVertex2i(474,193);
		glVertex2i(462,206);
		
		glVertex2i(514,97);
		glVertex2i(481,99);
		glVertex2i(481,99);
		glVertex2i(465,126);
		glVertex2i(465,126);
		glVertex2i(457,196);
		glVertex2i(457,196);
		glVertex2i(462,206);
		
		glVertex2i(508,89);
		glVertex2i(475,93);
		glVertex2i(475,93);
		glVertex2i(455,124);
		glVertex2i(455,124);
		glVertex2i(450,195);
		glVertex2i(450,195);
		glVertex2i(462,206);
		glEnd();
		
		glLineWidth(2);
		glBegin(GL_LINE_STRIP);
		glVertex2i(482,129);
		glVertex2i(498,120);
		glVertex2i(510,118);
		glVertex2i(511,113);
		glVertex2i(515,104);
		glVertex2i(514,97);
		glVertex2i(508,89);
		glVertex2i(506,81);
		glVertex2i(483,82);
		glVertex2i(460,98);
		glVertex2i(445,133);
		glVertex2i(444,192);
		glVertex2i(455,205);
		glVertex2i(462,206);
		glVertex2i(471,205);
		glVertex2i(482,190);
		glVertex2i(482,129);		
		glEnd();
		
		
		////skull
		
		glColor3f(0.203,0.149,0.050);
		glBegin(GL_POLYGON);
		glVertex2i(285,75);
		glVertex2i(294,77);
		glVertex2i(303,84);
		glVertex2i(305,95);
		glVertex2i(309,104);
		glVertex2i(301,99);
		glVertex2i(294,87);
		glVertex2i(282,85);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(251,67);
		glVertex2i(239,66);
		glVertex2i(229,68);
		glVertex2i(216,81);
		glVertex2i(231,77);
		glVertex2i(249,77);
		glVertex2i(251,67);		
		glEnd();
		
		glColor3f(0.811,0.803,0.803);
		glBegin(GL_POLYGON);
		glVertex2i(262,85);
		glVertex2i(249,77);
		glVertex2i(251,67);
		glVertex2i(251,57);
		glVertex2i(259,49);
		glVertex2i(264,41);
		glVertex2i(270,33);
		glVertex2i(278,29);
		glVertex2i(283,33);
		glVertex2i(284,44);
		glVertex2i(284,54);
		glVertex2i(288,62);
		glVertex2i(288,68);
		glVertex2i(285,75);
		glVertex2i(282,85);
		glVertex2i(272,87);
		glEnd();
		
		
		glColor3f(0,0,0);
		glBegin(GL_LINE_STRIP);
		glVertex2i(262,85);
		glVertex2i(249,77);
		glVertex2i(251,67);
		glVertex2i(251,57);
		glVertex2i(259,49);
		glVertex2i(264,41);
		glVertex2i(270,33);
		glVertex2i(278,29);
		glVertex2i(283,33);
		glVertex2i(284,44);
		glVertex2i(284,54);
		glVertex2i(288,62);
		glVertex2i(288,68);
		glVertex2i(285,75);
		glVertex2i(282,85);
		glVertex2i(272,87);
		glVertex2i(262,85);
		glEnd();
		
		
		glBegin(GL_LINES);
		glVertex2i(256,76);
		glVertex2i(269,66);
		glVertex2i(269,66);		
		glVertex2i(273,81);
		glVertex2i(269,66);		
		glVertex2i(272,55);
		
		glVertex2i(276,62);
		glVertex2i(279,69);
		
		glVertex2i(256,63);
		glVertex2i(264,59);
		
		glVertex2i(273,38);
		glVertex2i(277,33);
		glVertex2i(277,33);
		glVertex2i(278,38);
		glEnd();
		
		glPointSize(3);
		glBegin(GL_POINTS);
		glVertex2i(273,47);
		glEnd();
		
		glLineWidth(3);
		glBegin(GL_LINES);
		glVertex2i(284,65);
		glVertex2i(279,57);
		
		glVertex2i(256,59);
		glVertex2i(263,52);
		glEnd();
		
		
		
		
		//camello enfrente
		
		glTranslated(-c, cc, 0);
		
		glLineWidth(1);
		
		glTranslated(45,60,0);
		glRotated(p,0,0,1);
		glTranslated(-45,-60,0);
		
		glColor3f(0.988,0.764,0.192);
		glBegin(GL_POLYGON);
		glVertex2i(54,-12);
		glVertex2i(59,14);
		glVertex2i(64,29);
		glVertex2i(75,49);
		glVertex2i(79,65);
		glVertex2i(72,58);
		glVertex2i(46,41);
		glVertex2i(43,27);
		glVertex2i(32,6);
		glVertex2i(32,-12);
		glEnd();
		
		glColor3f(0,0,0);
		glBegin(GL_LINE_LOOP); //contorno
		glVertex2i(54,-12);
		glVertex2i(59,14);
		glVertex2i(64,29);
		glVertex2i(75,49);
		glVertex2i(79,65);
		glVertex2i(72,58);
		glVertex2i(46,41);
		glVertex2i(43,27);
		glVertex2i(32,6);
		glVertex2i(32,-12);
		glEnd();
		
		glTranslated(45,60,0);
		glRotated(-p,0,0,1);
		glTranslated(-45,-60,0);
		
		
		glTranslated(45,60,0);
		glRotated(-p,0,0,1);
		glTranslated(-45,-60,0);
		
		glColor3f(0.827,0.556,0.011);
		glBegin(GL_POLYGON);
		glVertex2i(20,-12);
		glVertex2i(20,50);
		glVertex2i(26,63);
		glVertex2i(26,73); //
		glVertex2i(79,65);
		glVertex2i(72,58);
		glVertex2i(56,41);
		glVertex2i(53,27);
		glVertex2i(42,6);
		glVertex2i(42,-12);
		glEnd();
		
		glColor3f(0,0,0);
		glBegin(GL_LINE_STRIP);
		glVertex2i(79,65);
		glVertex2i(72,58);
		glVertex2i(56,41);
		glVertex2i(53,27);
		glVertex2i(42,6);
		glVertex2i(42,-12);
		
		glVertex2i(20,-12);
		glVertex2i(20,50);
		glVertex2i(26,63);
		glVertex2i(26,73); //
		glEnd();
		
		glTranslated(45,60,0);
		glRotated(p,0,0,1);
		glTranslated(-45,-60,0);
		
		glColor3f(0.988,0.764,0.192);
		glBegin(GL_POLYGON);
		glVertex2i(93,202);
		glVertex2i(116,195);
		glVertex2i(115,187);
		glVertex2i(112,124);
		glVertex2i(107,109);
		glVertex2i(99,87);
		glEnd();
		
		glColor3f(0.827,0.556,0.011);
		glBegin(GL_POLYGON);
		glVertex2i(79,65);
		glVertex2i(90,75);
		glVertex2i(99,87);
		glVertex2i(108,110);
		glVertex2i(100,139);
		glVertex2i(96,141);
		glVertex2i(99,157);
		glVertex2i(85,156);
		glVertex2i(71,126);
		glVertex2i(59,117);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(99,157);
		glVertex2i(95,160);
		glVertex2i(97,173);
		glVertex2i(94,175);
		glVertex2i(96,193);
		glVertex2i(93,202);
		glVertex2i(88,210);
		glVertex2i(85,156);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(88,210);
		glVertex2i(94,222);
		glVertex2i(115,229);
		glVertex2i(122,224);
		glVertex2i(145,227);
		glVertex2i(152,220);
		glVertex2i(152,213);
		glVertex2i(145,206);
		glVertex2i(133,207);
		glVertex2i(126,209);
		glVertex2i(105,197);
		glVertex2i(98,197);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(72,58);
		glVertex2i(59,117);
		glVertex2i(15,147);
		glVertex2i(7,149);
		glVertex2i(0,150);
		glVertex2i(0,14);
		glVertex2i(0,20);
		glEnd();
		
		glColor3f(0.988,0.764,0.192);
		glBegin(GL_POLYGON);
		glVertex2i(40,126);
		glVertex2i(34,112);
		glVertex2i(18,104);
		glVertex2i(0,104);
		glVertex2i(0,150);
		glVertex2i(7,149);
		glVertex2i(15,147);
		glEnd();
		
		glColor3f(0,0,0);
		
		glBegin(GL_LINE_STRIP);
		glVertex2i(79,65);
		glVertex2i(90,75);
		glVertex2i(99,87);
		glVertex2i(108,110);
		glVertex2i(100,139);
		glVertex2i(96,141);
		glVertex2i(99,157);				
		glVertex2i(95,160);
		glVertex2i(97,173);
		glVertex2i(94,175);
		glVertex2i(96,193);
		glVertex2i(93,202);
		glVertex2i(98,197);
		glVertex2i(105,197);
		glVertex2i(126,209);
		glVertex2i(133,207);
		glVertex2i(145,206);
		glVertex2i(152,213);
		glVertex2i(152,220);
		glVertex2i(145,227);
		glVertex2i(122,224);
		glVertex2i(115,229);
		glVertex2i(94,222);
		glVertex2i(88,210);				
		glEnd();
		
		glBegin(GL_LINES);
		glVertex2i(123,196);
		glVertex2i(133,206);
		glVertex2i(116,195);		
		glVertex2i(112,124);
		glVertex2i(107,109);		
		glEnd();
		
		glBegin(GL_LINE_STRIP);
		glVertex2i(88,210);
		glVertex2i(85,156);
		glVertex2i(71,126);
		glVertex2i(59,117);
		glVertex2i(15,147);
		glVertex2i(7,149);
		glVertex2i(0,150);
		glVertex2i(0,14);
		glEnd();
		
		glBegin(GL_LINE_LOOP);
		glVertex2i(40,126);
		glVertex2i(34,112);
		glVertex2i(18,104);
		glVertex2i(0,104);
		glVertex2i(0,150);
		glVertex2i(7,149);
		glVertex2i(15,147);
		glEnd();
		
		glTranslated(c, -cc, 0);
		
		
		glFlush();
		
		if (cc > 12)
			t = 0;
		if (cc < 0.00)
			t = 1;
		
		c -= 0.01675;
		
		if (p >= 40)
			k = 0;
		if (p <= -40)
			k = 1;
		
		
		if (y > 30) 
			b = 0;
		if (y < 0.00)
			b = 1;
		
		x += 0.01;
		
	}	
}


void escena4() {
	
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Tierra
	glColor3f(0.87,0.78,0.24);
	glBegin(GL_POLYGON);				
	glVertex2i(0,0);
	glVertex2i(800,0);
	glVertex2i(800,224);
	glVertex2i(0,224);
	glEnd();
	
	//Montañas
	glLineWidth(1);
	glColor3f(0.611,0.513,0.058);
	glBegin(GL_POLYGON);
	glVertex2i(800,200);
	glVertex2i(0,200);		
	glVertex2i(0,378);
	glVertex2i(163,405);
	glVertex2i(325,341);
	glVertex2i(500,373);
	glVertex2i(668,340);
	glVertex2i(787,382);
	glVertex2i(800,382);
	glEnd();
	
	glColor3f(0.752,0.588,0.113);
	glBegin(GL_POLYGON);
	glVertex2i(800,200);
	glVertex2i(0,200);		
	glVertex2i(0,294);
	glVertex2i(98,305);
	glVertex2i(150,288);
	glVertex2i(193,285);
	glVertex2i(252,300);
	glVertex2i(294,298);
	glVertex2i(316,293);
	glVertex2i(332,298);
	glVertex2i(370,294);
	glVertex2i(398,286);
	glVertex2i(442,288);
	glVertex2i(473,296);
	glVertex2i(550,294);
	glVertex2i(600,270);
	glVertex2i(632,275);
	glVertex2i(680,293);
	glVertex2i(708,297);
	glVertex2i(753,288);
	glVertex2i(800,297);
	glEnd();
	
	glColor3f(0.811,0.709,0.086);
	glBegin(GL_POLYGON);
	glVertex2i(800,200);
	glVertex2i(0,200);		
	glVertex2i(0,250);
	glVertex2i(24,260);
	glVertex2i(72,242);
	glVertex2i(100,252);
	glVertex2i(110,248);
	glVertex2i(125,255);
	glVertex2i(154,251);
	glVertex2i(163,260);
	glVertex2i(186,252);
	glVertex2i(304,242);
	glVertex2i(333,260);
	glVertex2i(368,254);
	glVertex2i(413,261);
	glVertex2i(428,248);
	glVertex2i(468,267);
	glVertex2i(502,261);
	glVertex2i(522,251);
	glVertex2i(571,257);
	glVertex2i(601,249);
	glVertex2i(618,252);
	glVertex2i(682,256);
	glVertex2i(695,246);
	glVertex2i(710,253);
	glVertex2i(739,251);
	glVertex2i(765,260);
	glVertex2i(780,270);
	glVertex2i(800,272);
	glEnd();
	
	//piedras
	glColor3f(0.670,0.592,0.294);
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(296,126);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(296,136);
	glVertex2i(293,131);		
	glEnd();
	
	glColor3f(0.450,0.317,0.113);
	glBegin(GL_POLYGON);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(305,130);
	glVertex2i(296,126);
	glEnd();
	
	
	
	//piedras
	
	glTranslated(100,50,0);	
	
	glColor3f(0.670,0.592,0.294);
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(296,126);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(296,136);
	glVertex2i(293,131);		
	glEnd();
	
	glColor3f(0.450,0.317,0.113);
	glBegin(GL_POLYGON);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(305,130);
	glVertex2i(296,126);
	glEnd();
	
	glTranslated(-100,-50,0);
	
	
	//piedras
	
	glTranslated(100,-50,0);	
	
	glColor3f(0.670,0.592,0.294);
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(296,126);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(296,136);
	glVertex2i(293,131);		
	glEnd();
	
	glColor3f(0.450,0.317,0.113);
	glBegin(GL_POLYGON);
	glVertex2i(310,126);
	glVertex2i(310,133);
	glVertex2i(304,140);
	glVertex2i(305,130);
	glVertex2i(296,126);
	glEnd();
	
	glTranslated(-100,50,0);
	
	
	
	
	//Sol			
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);
	glVertex2i(36,557);
	
	glColor3f(0.88,0.87,0.04);
	glVertex2i(0,506);
	glVertex2i(14,498);
	glVertex2i(29,495);
	glVertex2i(50,498);
	glVertex2i(72,504);
	glVertex2i(91,527);
	glVertex2i(99,557);
	glVertex2i(93,585);
	glVertex2i(81,600);
	glVertex2i(0,600);
	glVertex2i(0,506); 
	
	glEnd();
	
	//Nopal//////////////////////
	glColor3f(0.482,0.611,0.023); //Base
	
	glBegin(GL_POLYGON);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(36,205);
	glVertex2i(35,193);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(48,196);
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(36,205);
	glVertex2i(35,193);
	glVertex2i(44,182);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(55,218);
	glVertex2i(50,207);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(57,210);		
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(55,218);
	glVertex2i(50,207);		
	glVertex2i(55,204);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);
	glVertex2i(67,219);
	glVertex2i(62,216);
	glVertex2i(63,212);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);	
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);
	glVertex2i(67,219);
	glVertex2i(62,216);
	glVertex2i(63,212);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);
	glVertex2i(26,207);
	glVertex2i(32,204);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);			
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);
	glVertex2i(26,207);
	glVertex2i(32,204);		
	glVertex2i(36,206);
	glEnd();
	
	glColor3f(0.564,0.709,0.023);  //Puntos
	glPointSize(2);
	glBegin(GL_POINTS);
	glVertex2i(46,189);
	glVertex2i(48,192);
	glVertex2i(49,198);
	glVertex2i(53,203);
	glVertex2i(42,191);
	glVertex2i(38,197);
	glVertex2i(45,202);
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(45,182);
	glVertex2i(47,175);
	glVertex2i(59,174);
	glVertex2i(58,183);
	glVertex2i(50,185);
	glEnd();
	///////////
	
	//Arbusto
	glColor3f(0.517,0.827,0.082); //Base
	glBegin(GL_POLYGON);
	glVertex2i(217,178);
	glVertex2i(257,180);
	glVertex2i(250,202);
	glVertex2i(246,220);
	glVertex2i(236,214);
	glVertex2i(228,206);
	glVertex2i(222,207);
	glVertex2i(218,203);
	glVertex2i(218,194);
	glVertex2i(212,189);
	glEnd();
	
	glColor3f(0.505,0.572,0.054); //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(257,180);
	glVertex2i(217,178);
	glVertex2i(226,182);
	glVertex2i(232,188);
	glVertex2i(242,187);
	glVertex2i(246,211);
	
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(217,178);
	glVertex2i(236,175);
	glVertex2i(242,172);
	glVertex2i(248,176);
	glVertex2i(261,176);
	glVertex2i(257,180);
	glEnd();
	
	
	//////////
	glTranslated(350,-200,0);
	glScaled(1.7,1.7,0);
	
	//Arbusto
	glColor3f(0.517,0.827,0.082); //Base
	glBegin(GL_POLYGON);
	glVertex2i(217,178);
	glVertex2i(257,180);
	glVertex2i(250,202);
	glVertex2i(246,220);
	glVertex2i(236,214);
	glVertex2i(228,206);
	glVertex2i(222,207);
	glVertex2i(218,203);
	glVertex2i(218,194);
	glVertex2i(212,189);
	glEnd();
	
	glColor3f(0.505,0.572,0.054); //Sombra	
	glBegin(GL_POLYGON);
	glVertex2i(257,180);
	glVertex2i(217,178);
	glVertex2i(226,182);
	glVertex2i(232,188);
	glVertex2i(242,187);
	glVertex2i(246,211);	
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(217,178);
	glVertex2i(236,175);
	glVertex2i(242,172);
	glVertex2i(248,176);
	glVertex2i(261,176);
	glVertex2i(257,180);
	glEnd();
	
	glScaled(1/1.7, 1/1.7, 0);
	glTranslated(-350,200,0);
	////////						
	
	
	//Nopal
	glColor3f(0.482,0.611,0.023); //Base
	glBegin(GL_POLYGON);
	glVertex2i(346,170);
	glVertex2i(358,185);
	glVertex2i(358,195);
	glVertex2i(356,201);
	glVertex2i(349,205);
	glVertex2i(337,204);
	glVertex2i(331,198);
	glVertex2i(331,187);
	glVertex2i(334,177);
	glVertex2i(341,170);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(341,170);
	glVertex2i(346,170);
	glVertex2i(358,185);
	glVertex2i(358,195);
	glVertex2i(356,201);
	glVertex2i(349,205);
	glVertex2i(348,185);
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(346,170);
	glVertex2i(358,185);
	glVertex2i(358,195);
	glVertex2i(356,201);
	glVertex2i(349,205);
	glVertex2i(337,204);
	glVertex2i(331,198);
	glVertex2i(331,187);
	glVertex2i(334,177);
	glVertex2i(341,170);
	glVertex2i(346,170);
	glEnd();
	
	glColor3f(0.482,0.611,0.023); //Base
	glBegin(GL_POLYGON);
	glVertex2i(362,201);
	glVertex2i(369,204);
	glVertex2i(370,211);
	glVertex2i(365,214);
	glVertex2i(359,209);
	glVertex2i(356,201);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(362,201);
	glVertex2i(369,204);
	glVertex2i(370,211);
	glVertex2i(365,206);		
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(362,201);
	glVertex2i(369,204);
	glVertex2i(370,211);
	glVertex2i(365,214);
	glVertex2i(359,209);
	glVertex2i(356,201);		
	glVertex2i(362,201);
	glEnd();
	
	glColor3f(0.482,0.611,0.023); //Base
	glBegin(GL_POLYGON);
	glVertex2i(336,203);
	glVertex2i(334,212);
	glVertex2i(328,219);
	glVertex2i(320,215);
	glVertex2i(320,210);
	glVertex2i(323,202);
	glVertex2i(332,199);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(323,202);
	glVertex2i(332,199);
	glVertex2i(336,203);
	glVertex2i(334,212);
	glVertex2i(331,206);
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(336,203);
	glVertex2i(334,212);
	glVertex2i(328,219);
	glVertex2i(320,215);
	glVertex2i(320,210);
	glVertex2i(323,202);
	glVertex2i(332,199);
	glVertex2i(336,203);
	glEnd();
	
	glColor3f(0.564,0.709,0.023);  //Puntos
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2i(348,200);
	glVertex2i(339,196);
	glVertex2i(337,186);
	glVertex2i(343,178);
	glVertex2i(348,186);
	glVertex2i(346,190);		
	glVertex2i(330,206);
	glVertex2i(325,207);
	glVertex2i(324,213);
	glVertex2i(331,211);
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(343,169);
	glVertex2i(350,163);
	glVertex2i(362,160);
	glVertex2i(372,164);
	glVertex2i(369,172);
	glVertex2i(358,173);
	glVertex2i(349,172);
	glEnd();
	
	
	
	///////// Cactus atrás
	
	glTranslated(450,180,0);
	glScaled(0.4,0.4,0);
	
	glColor3f(0.317,0.231,0.058);
	glLineWidth(20);
	glBegin(GL_LINES);
	glVertex2i(537,17);
	glVertex2i(615,-52);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(527,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(533,238);
	glVertex2i(526,227);
	glEnd();
	
	glColor3f(0.215,0.439,0.105); //Sombra clara
	glBegin(GL_POLYGON);
	glVertex2i(550,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);			
	glVertex2i(540,224);			
	glEnd();
	
	glColor3f(0,0,0); //Contorno
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glVertex2i(507,30);
	glEnd();
	
	glLineWidth(1); //lineas
	glBegin(GL_LINES);
	glVertex2i(517,8);
	glVertex2i(519,222);
	glVertex2i(519,222);
	glVertex2i(529,238);
	glVertex2i(526,9);
	glVertex2i(526,227);
	glVertex2i(526,227);
	glVertex2i(533,238);
	glVertex2i(539,9);
	glVertex2i(533,238);
	glVertex2i(550,9);
	glVertex2i(540,224);
	glVertex2i(540,224);
	glVertex2i(542,238);		
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glBegin(GL_POLYGON);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);			
	glVertex2i(541,154);//
	glVertex2i(557,154);//
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(569,152);
	glVertex2i(558,146);
	glVertex2i(547,148);			
	glEnd();
	
	glBegin(GL_POLYGON); //parte 2 de la de arriba						
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(579,207);
	glVertex2i(570,217);//					
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(541,154);
	glVertex2i(557,154);
	glVertex2i(557,154);
	glVertex2i(570,164);
	glVertex2i(570,164);
	glVertex2i(570,209);
	glVertex2i(570,209);
	glVertex2i(563,220);
	glVertex2i(535,160);
	glVertex2i(555,160);
	glVertex2i(555,160);
	glVertex2i(564,169);
	glVertex2i(564,169);
	glVertex2i(563,220);						
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(535,166);
	glVertex2i(548,167);
	glVertex2i(548,167);
	glVertex2i(557,174);
	glVertex2i(557,174);
	glVertex2i(557,209);
	glVertex2i(557,209);
	glVertex2i(563,220);
	glEnd();
	
	
	glLineWidth(2); //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glVertex2i(558,146);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);						
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(591,104);
	glVertex2i(628,89);
	glVertex2i(618,69);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);
	glVertex2i(584,62);
	glEnd();		
	
	glBegin(GL_POLYGON);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(628,89);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//		
	glVertex2i(608,85);
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(546,58);
	glVertex2i(584,62);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(608,85);
	glVertex2i(606,188);	
	
	glVertex2i(552,50);
	glVertex2i(575,53);
	glVertex2i(575,53);
	glVertex2i(598,61);
	glVertex2i(598,61);
	glVertex2i(618,86);
	glVertex2i(618,86);
	glVertex2i(617,176);
	glVertex2i(617,176);
	glVertex2i(606,188);
	
	glVertex2i(546,67);
	glVertex2i(582,69);
	glVertex2i(582,69);
	glVertex2i(602,95);
	glVertex2i(602,95);
	glVertex2i(600,177);
	glVertex2i(600,177);
	glVertex2i(606,188);
	
	glVertex2i(552,72);
	glVertex2i(576,74);
	glVertex2i(576,74);
	glVertex2i(597,100);
	glVertex2i(597,100);
	glVertex2i(595,175);
	glVertex2i(595,175);
	glVertex2i(606,188);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);	
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glVertex2i(576,81);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(470,130);
	glVertex2i(462,206);
	
	glVertex2i(511,113);
	glVertex2i(490,113);
	glVertex2i(490,113);
	glVertex2i(476,128);
	glVertex2i(476,128);
	glVertex2i(474,193);
	glVertex2i(474,193);
	glVertex2i(462,206);
	
	glVertex2i(514,97);
	glVertex2i(481,99);
	glVertex2i(481,99);
	glVertex2i(465,126);
	glVertex2i(465,126);
	glVertex2i(457,196);
	glVertex2i(457,196);
	glVertex2i(462,206);
	
	glVertex2i(508,89);
	glVertex2i(475,93);
	glVertex2i(475,93);
	glVertex2i(455,124);
	glVertex2i(455,124);
	glVertex2i(450,195);
	glVertex2i(450,195);
	glVertex2i(462,206);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);		
	glEnd();
	
	glScaled(1/0.4,1/0.4,0);
	glTranslated(-450,-180,0);
	
	
	
	/////////
	
	
	
	
	//FOxy
	glLineWidth(1);
	//Cuerpo
	glColor3f(0.964,0.396,0.054);
	glBegin(GL_POLYGON);
	glVertex2i(257,180);
	glVertex2i(288,177);
	glVertex2i(289,157);
	glVertex2i(283,149);
	glVertex2i(276,149);
	glVertex2i(257,166);
	glVertex2i(249,176);
	glVertex2i(250,180);		
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(250,180);
	glVertex2i(264,189);
	glVertex2i(276,188);
	glVertex2i(288,177);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(257,166);
	glVertex2i(257,163);
	glVertex2i(245,150);
	glVertex2i(251,150);
	glVertex2i(254,150);
	glVertex2i(259,145);
	glVertex2i(265,147);
	glVertex2i(270,145);
	glVertex2i(276,149);
	glEnd();
	
	glColor3f(0.345,0.129,0);
	glBegin(GL_TRIANGLES);
	glVertex2i(245,150);
	glVertex2i(251,150);
	glVertex2i(251,143);
	glEnd();
	
	glColor3f(0,0,0);
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(285,158);
	glVertex2i(280,160);
	glVertex2i(275,155);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(255,171);
	glVertex2i(261,165);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glVertex2i(283,148);
	glVertex2i(277,150);
	glVertex2i(275,155);
	glEnd();
	
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glVertex2i(261,165);
	glVertex2i(260,151);
	glVertex2i(257,148); //
	glVertex2i(259,145);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(257,148);
	glVertex2i(254,150);
	glVertex2i(257,152); //
	glVertex2i(257,163);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(265,170);
	glVertex2i(269,165);
	glVertex2i(267,156); //
	glVertex2i(264,146);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(268,168);
	glVertex2i(271,170);
	glVertex2i(271,179);
	glEnd();
	
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);
	glVertex2i(257,166);
	glVertex2i(249,176);
	glVertex2i(250,180);
	glVertex2i(264,189);
	glVertex2i(276,188);
	glVertex2i(288,177);
	glVertex2i(289,157);
	glVertex2i(283,149);
	glVertex2i(276,149);
	glVertex2i(270,145);
	glVertex2i(265,147);
	glVertex2i(259,145);
	glVertex2i(254,150);
	glVertex2i(251,150);
	glVertex2i(251,143);
	glVertex2i(245,150);
	glVertex2i(257,163);
	glVertex2i(257,166);		
	glEnd();
	
	
	/////////////////////
	//glTranslated(0,-n,0);
	
	//cabeza
	glColor3f(0.964,0.396,0.054);
	glBegin(GL_POLYGON);
	glVertex2i(244,201);
	glVertex2i(260,201);
	glVertex2i(271,208);
	glVertex2i(271,202);
	glVertex2i(265,194);
	glVertex2i(264,185);
	glVertex2i(257,180);
	glVertex2i(250,180);
	glVertex2i(244,185);
	glVertex2i(243,191);
	glVertex2i(235,200);
	glVertex2i(235,206);
	glEnd();
	
	glColor3f(0.345,0.129,0);
	glBegin(GL_POLYGON);
	glVertex2i(235,206);
	glVertex2i(244,201);
	glVertex2i(249,196);
	glVertex2i(246,194);
	glVertex2i(241,196);		
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(271,208);
	glVertex2i(258,196);
	glEnd();
	
	glColor3f(0.345,0.129,0);
	glBegin(GL_POLYGON);
	glVertex2i(266,205);
	glVertex2i(271,208);
	glVertex2i(271,202);
	glVertex2i(265,194);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(258,196);
	glVertex2i(261,192);
	glVertex2i(265,194);
	glVertex2i(271,202);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(245,190);
	glVertex2i(248,192);
	glVertex2i(251,190);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(255,190);
	glVertex2i(258,192);
	glVertex2i(261,190);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(247,187);
	glVertex2i(251,182);
	glVertex2i(255,182);
	glVertex2i(260,187);
	glEnd();
	
	glBegin(GL_LINES);	
	glVertex2i(253,183);
	glVertex2i(253,186);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(244,201);
	glVertex2i(260,201);
	glVertex2i(271,208);
	glVertex2i(271,202);
	glVertex2i(265,194);
	glVertex2i(264,185);
	glVertex2i(257,180);
	glVertex2i(250,180);
	glVertex2i(244,185);
	glVertex2i(243,191);
	glVertex2i(235,200);
	glVertex2i(235,206);
	glEnd();
	
	glColor3f(0.345,0.129,0);
	glBegin(GL_TRIANGLES);
	glVertex2i(250,180);
	glVertex2i(255,175);
	glVertex2i(257,180);
	glEnd();		
	
	//glTranslated(0,n,0);
	////
	
	
	////Nubee
	glColor3f(1,1,1);
	glLineWidth(1);
	
	//glTranslated(-x,0,0);
	
	glBegin(GL_POLYGON);
	glVertex2i(481,390);
	glVertex2i(652,389);
	glVertex2i(615,400);
	glVertex2i(570,404);
	glVertex2i(561,415);
	glVertex2i(551,416);
	glVertex2i(545,412);
	glVertex2i(538,421);
	glVertex2i(530,420);
	glVertex2i(524,418);
	glVertex2i(511,427);
	glVertex2i(501,428);
	glVertex2i(493,420);
	glVertex2i(484,414);
	glVertex2i(479,407);
	glVertex2i(478,398);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(655,420);
	glVertex2i(725,420);
	glVertex2i(690,426);
	glVertex2i(680,426);
	glVertex2i(675,433);
	glVertex2i(678,434);
	glVertex2i(660,427);
	glVertex2i(653,429);
	glVertex2i(648,422);		
	glEnd();
	
	//glTranslated(x,0,0);
	////////
	
	
	///////// Cactus 
	
	glTranslated(-235,53,0);
	glScaled(0.7,0.7,0);
	
	glColor3f(0.317,0.231,0.058);
	glLineWidth(30);
	glBegin(GL_LINES);
	glVertex2i(537,17);
	glVertex2i(615,-52);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(527,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(533,238);
	glVertex2i(526,227);
	glEnd();
	
	glColor3f(0.215,0.439,0.105); //Sombra clara
	glBegin(GL_POLYGON);
	glVertex2i(550,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);			
	glVertex2i(540,224);			
	glEnd();
	
	glColor3f(0,0,0); //Contorno
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glVertex2i(507,30);
	glEnd();
	
	glLineWidth(1); //lineas
	glBegin(GL_LINES);
	glVertex2i(517,8);
	glVertex2i(519,222);
	glVertex2i(519,222);
	glVertex2i(529,238);
	glVertex2i(526,9);
	glVertex2i(526,227);
	glVertex2i(526,227);
	glVertex2i(533,238);
	glVertex2i(539,9);
	glVertex2i(533,238);
	glVertex2i(550,9);
	glVertex2i(540,224);
	glVertex2i(540,224);
	glVertex2i(542,238);		
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glBegin(GL_POLYGON);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);			
	glVertex2i(541,154);//
	glVertex2i(557,154);//
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(569,152);
	glVertex2i(558,146);
	glVertex2i(547,148);			
	glEnd();
	
	glBegin(GL_POLYGON); //parte 2 de la de arriba						
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(579,207);
	glVertex2i(570,217);//					
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(541,154);
	glVertex2i(557,154);
	glVertex2i(557,154);
	glVertex2i(570,164);
	glVertex2i(570,164);
	glVertex2i(570,209);
	glVertex2i(570,209);
	glVertex2i(563,220);
	glVertex2i(535,160);
	glVertex2i(555,160);
	glVertex2i(555,160);
	glVertex2i(564,169);
	glVertex2i(564,169);
	glVertex2i(563,220);						
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(535,166);
	glVertex2i(548,167);
	glVertex2i(548,167);
	glVertex2i(557,174);
	glVertex2i(557,174);
	glVertex2i(557,209);
	glVertex2i(557,209);
	glVertex2i(563,220);
	glEnd();
	
	
	glLineWidth(2); //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glVertex2i(558,146);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);						
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(591,104);
	glVertex2i(628,89);
	glVertex2i(618,69);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);
	glVertex2i(584,62);
	glEnd();		
	
	glBegin(GL_POLYGON);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(628,89);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//		
	glVertex2i(608,85);
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(546,58);
	glVertex2i(584,62);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(608,85);
	glVertex2i(606,188);	
	
	glVertex2i(552,50);
	glVertex2i(575,53);
	glVertex2i(575,53);
	glVertex2i(598,61);
	glVertex2i(598,61);
	glVertex2i(618,86);
	glVertex2i(618,86);
	glVertex2i(617,176);
	glVertex2i(617,176);
	glVertex2i(606,188);
	
	glVertex2i(546,67);
	glVertex2i(582,69);
	glVertex2i(582,69);
	glVertex2i(602,95);
	glVertex2i(602,95);
	glVertex2i(600,177);
	glVertex2i(600,177);
	glVertex2i(606,188);
	
	glVertex2i(552,72);
	glVertex2i(576,74);
	glVertex2i(576,74);
	glVertex2i(597,100);
	glVertex2i(597,100);
	glVertex2i(595,175);
	glVertex2i(595,175);
	glVertex2i(606,188);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);	
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glVertex2i(576,81);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(470,130);
	glVertex2i(462,206);
	
	glVertex2i(511,113);
	glVertex2i(490,113);
	glVertex2i(490,113);
	glVertex2i(476,128);
	glVertex2i(476,128);
	glVertex2i(474,193);
	glVertex2i(474,193);
	glVertex2i(462,206);
	
	glVertex2i(514,97);
	glVertex2i(481,99);
	glVertex2i(481,99);
	glVertex2i(465,126);
	glVertex2i(465,126);
	glVertex2i(457,196);
	glVertex2i(457,196);
	glVertex2i(462,206);
	
	glVertex2i(508,89);
	glVertex2i(475,93);
	glVertex2i(475,93);
	glVertex2i(455,124);
	glVertex2i(455,124);
	glVertex2i(450,195);
	glVertex2i(450,195);
	glVertex2i(462,206);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);		
	glEnd();
	
	glScaled(1/0.7,1/0.7,0);
	glTranslated(235,-53,0);
	
	
	
	/////////
	
	glTranslated(550,-300,0);	
	glScaled(2.0,2.0,0);
	
	//Nopal//////////////////////
	glColor3f(0.482,0.611,0.023); //Base
	
	glBegin(GL_POLYGON);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(36,205);
	glVertex2i(35,193);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(48,196);
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(44,182);
	glVertex2i(54,192);
	glVertex2i(54,203);
	glVertex2i(47,209);
	glVertex2i(36,205);
	glVertex2i(35,193);
	glVertex2i(44,182);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(55,218);
	glVertex2i(50,207);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(57,210);		
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(55,204);
	glVertex2i(63,209);
	glVertex2i(62,217);
	glVertex2i(55,218);
	glVertex2i(50,207);		
	glVertex2i(55,204);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);
	glVertex2i(67,219);
	glVertex2i(62,216);
	glVertex2i(63,212);
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);	
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(63,212);
	glVertex2i(68,211);
	glVertex2i(73,213);
	glVertex2i(74,218);
	glVertex2i(67,219);
	glVertex2i(62,216);
	glVertex2i(63,212);
	glEnd();
	
	glColor3f(0.482,0.611,0.023);  //Base
	glBegin(GL_POLYGON);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);
	glVertex2i(26,207);
	glVertex2i(32,204);		
	glEnd();
	
	glColor3f(0.419,0.541,0.0);	 //Sombra
	glBegin(GL_POLYGON);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);			
	glEnd();
	
	glColor3f(0.301,0.403,0.019);  //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(36,206);
	glVertex2i(30,215);
	glVertex2i(25,213);
	glVertex2i(26,207);
	glVertex2i(32,204);		
	glVertex2i(36,206);
	glEnd();
	
	glColor3f(0.564,0.709,0.023);  //Puntos
	glPointSize(2);
	glBegin(GL_POINTS);
	glVertex2i(46,189);
	glVertex2i(48,192);
	glVertex2i(49,198);
	glVertex2i(53,203);
	glVertex2i(42,191);
	glVertex2i(38,197);
	glVertex2i(45,202);
	glEnd();
	
	glColor3f(0.337,0.227,0.101); //Sombra - suelo
	glBegin(GL_POLYGON);
	glVertex2i(45,182);
	glVertex2i(47,175);
	glVertex2i(59,174);
	glVertex2i(58,183);
	glVertex2i(50,185);
	glEnd();
	
	
	glScaled(1/2.0,1/2.0,0);
	glTranslated(-550,300,0);
	///////////
	
	
	
	//cactus enfrente
	
	glColor3f(0.317,0.231,0.058);
	glLineWidth(50);
	glBegin(GL_LINES);
	glVertex2i(537,17);
	glVertex2i(615,-52);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(527,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(533,238);
	glVertex2i(526,227);
	glEnd();
	
	glColor3f(0.215,0.439,0.105); //Sombra clara
	glBegin(GL_POLYGON);
	glVertex2i(550,9);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);			
	glVertex2i(540,224);			
	glEnd();
	
	glColor3f(0,0,0); //Contorno
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(507,30);
	glVertex2i(504,22);
	glVertex2i(505,14);
	glVertex2i(511,7);
	glVertex2i(560,9);
	glVertex2i(565,15);
	glVertex2i(564,44);
	glVertex2i(558,78);
	glVertex2i(558,146);
	glVertex2i(557,219);
	glVertex2i(552,230);
	glVertex2i(542,238);
	glVertex2i(527,238);
	glVertex2i(514,224);
	glVertex2i(510,118);
	glVertex2i(506,81);
	glVertex2i(507,30);
	glEnd();
	
	glLineWidth(1); //lineas
	glBegin(GL_LINES);
	glVertex2i(517,8);
	glVertex2i(519,222);
	glVertex2i(519,222);
	glVertex2i(529,238);
	glVertex2i(526,9);
	glVertex2i(526,227);
	glVertex2i(526,227);
	glVertex2i(533,238);
	glVertex2i(539,9);
	glVertex2i(533,238);
	glVertex2i(550,9);
	glVertex2i(540,224);
	glVertex2i(540,224);
	glVertex2i(542,238);		
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glBegin(GL_POLYGON);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);			
	glVertex2i(541,154);//
	glVertex2i(557,154);//
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(569,152);
	glVertex2i(558,146);
	glVertex2i(547,148);			
	glEnd();
	
	glBegin(GL_POLYGON); //parte 2 de la de arriba						
	glVertex2i(570,164);//-
	glVertex2i(577,163);//-
	glVertex2i(579,207);
	glVertex2i(570,217);//					
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(541,154);
	glVertex2i(557,154);
	glVertex2i(557,154);
	glVertex2i(570,164);
	glVertex2i(570,164);
	glVertex2i(570,209);
	glVertex2i(570,209);
	glVertex2i(563,220);
	glVertex2i(535,160);
	glVertex2i(555,160);
	glVertex2i(555,160);
	glVertex2i(564,169);
	glVertex2i(564,169);
	glVertex2i(563,220);						
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(535,166);
	glVertex2i(548,167);
	glVertex2i(548,167);
	glVertex2i(557,174);
	glVertex2i(557,174);
	glVertex2i(557,209);
	glVertex2i(557,209);
	glVertex2i(563,220);
	glEnd();
	
	
	glLineWidth(2); //Contorno
	glBegin(GL_LINE_STRIP);
	glVertex2i(558,146);
	glVertex2i(547,148);
	glVertex2i(541,154);
	glVertex2i(535,160);
	glVertex2i(535,166);
	glVertex2i(539,173);
	glVertex2i(548,177);
	glVertex2i(549,208);
	glVertex2i(557,219);
	glVertex2i(563,220);
	glVertex2i(570,217);
	glVertex2i(579,207);
	glVertex2i(577,163);
	glVertex2i(569,152);
	glVertex2i(558,146);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);						
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(576,81);
	glVertex2i(591,104);
	glVertex2i(628,89);
	glVertex2i(618,69);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);
	glVertex2i(584,62);
	glEnd();		
	
	glBegin(GL_POLYGON);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(628,89);
	glVertex2i(618,69);			
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//		
	glVertex2i(608,85);
	glEnd();
	
	glColor3f(0,0,0); //lineas
	glBegin(GL_LINES);
	glVertex2i(546,58);
	glVertex2i(584,62);
	glVertex2i(584,62);
	glVertex2i(608,85);
	glVertex2i(608,85);
	glVertex2i(606,188);	
	
	glVertex2i(552,50);
	glVertex2i(575,53);
	glVertex2i(575,53);
	glVertex2i(598,61);
	glVertex2i(598,61);
	glVertex2i(618,86);
	glVertex2i(618,86);
	glVertex2i(617,176);
	glVertex2i(617,176);
	glVertex2i(606,188);
	
	glVertex2i(546,67);
	glVertex2i(582,69);
	glVertex2i(582,69);
	glVertex2i(602,95);
	glVertex2i(602,95);
	glVertex2i(600,177);
	glVertex2i(600,177);
	glVertex2i(606,188);
	
	glVertex2i(552,72);
	glVertex2i(576,74);
	glVertex2i(576,74);
	glVertex2i(597,100);
	glVertex2i(597,100);
	glVertex2i(595,175);
	glVertex2i(595,175);
	glVertex2i(606,188);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(576,81);
	glVertex2i(558,78);
	glVertex2i(552,72);
	glVertex2i(546,67);
	glVertex2i(546,58);
	glVertex2i(552,50);
	glVertex2i(564,44);
	glVertex2i(583,47);
	glVertex2i(618,69);	
	glVertex2i(628,89);
	glVertex2i(630,158);
	glVertex2i(624,176);
	glVertex2i(616,187);
	glVertex2i(606,188);//
	glVertex2i(599,187);
	glVertex2i(588,171);
	glVertex2i(591,104);
	glVertex2i(576,81);
	glEnd();
	
	glColor3f(0.643,0.803,0.054); //Base
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);
	glEnd();
	
	glColor3f(0.396,0.701,0.270); //sombra
	glBegin(GL_POLYGON);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(515,104);
	glVertex2i(484,107);
	glVertex2i(484,107);
	glVertex2i(470,130);
	glVertex2i(470,130);
	glVertex2i(462,206);
	
	glVertex2i(511,113);
	glVertex2i(490,113);
	glVertex2i(490,113);
	glVertex2i(476,128);
	glVertex2i(476,128);
	glVertex2i(474,193);
	glVertex2i(474,193);
	glVertex2i(462,206);
	
	glVertex2i(514,97);
	glVertex2i(481,99);
	glVertex2i(481,99);
	glVertex2i(465,126);
	glVertex2i(465,126);
	glVertex2i(457,196);
	glVertex2i(457,196);
	glVertex2i(462,206);
	
	glVertex2i(508,89);
	glVertex2i(475,93);
	glVertex2i(475,93);
	glVertex2i(455,124);
	glVertex2i(455,124);
	glVertex2i(450,195);
	glVertex2i(450,195);
	glVertex2i(462,206);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(482,129);
	glVertex2i(498,120);
	glVertex2i(510,118);
	glVertex2i(511,113);
	glVertex2i(515,104);
	glVertex2i(514,97);
	glVertex2i(508,89);
	glVertex2i(506,81);
	glVertex2i(483,82);
	glVertex2i(460,98);
	glVertex2i(445,133);
	glVertex2i(444,192);
	glVertex2i(455,205);
	glVertex2i(462,206);
	glVertex2i(471,205);
	glVertex2i(482,190);
	glVertex2i(482,129);		
	glEnd();
	
	
	////skull
	
	glColor3f(0.203,0.149,0.050);
	glBegin(GL_POLYGON);
	glVertex2i(285,75);
	glVertex2i(294,77);
	glVertex2i(303,84);
	glVertex2i(305,95);
	glVertex2i(309,104);
	glVertex2i(301,99);
	glVertex2i(294,87);
	glVertex2i(282,85);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(251,67);
	glVertex2i(239,66);
	glVertex2i(229,68);
	glVertex2i(216,81);
	glVertex2i(231,77);
	glVertex2i(249,77);
	glVertex2i(251,67);		
	glEnd();
	
	glColor3f(0.811,0.803,0.803);
	glBegin(GL_POLYGON);
	glVertex2i(262,85);
	glVertex2i(249,77);
	glVertex2i(251,67);
	glVertex2i(251,57);
	glVertex2i(259,49);
	glVertex2i(264,41);
	glVertex2i(270,33);
	glVertex2i(278,29);
	glVertex2i(283,33);
	glVertex2i(284,44);
	glVertex2i(284,54);
	glVertex2i(288,62);
	glVertex2i(288,68);
	glVertex2i(285,75);
	glVertex2i(282,85);
	glVertex2i(272,87);
	glEnd();
	
	
	glColor3f(0,0,0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(262,85);
	glVertex2i(249,77);
	glVertex2i(251,67);
	glVertex2i(251,57);
	glVertex2i(259,49);
	glVertex2i(264,41);
	glVertex2i(270,33);
	glVertex2i(278,29);
	glVertex2i(283,33);
	glVertex2i(284,44);
	glVertex2i(284,54);
	glVertex2i(288,62);
	glVertex2i(288,68);
	glVertex2i(285,75);
	glVertex2i(282,85);
	glVertex2i(272,87);
	glVertex2i(262,85);
	glEnd();
	
	
	glBegin(GL_LINES);
	glVertex2i(256,76);
	glVertex2i(269,66);
	glVertex2i(269,66);		
	glVertex2i(273,81);
	glVertex2i(269,66);		
	glVertex2i(272,55);
	
	glVertex2i(276,62);
	glVertex2i(279,69);
	
	glVertex2i(256,63);
	glVertex2i(264,59);
	
	glVertex2i(273,38);
	glVertex2i(277,33);
	glVertex2i(277,33);
	glVertex2i(278,38);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2i(273,47);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(284,65);
	glVertex2i(279,57);
	
	glVertex2i(256,59);
	glVertex2i(263,52);
	glEnd();
	
	
	
	
	//camello enfrente		
	
	glLineWidth(1);		
	
	glColor3f(0.988,0.764,0.192);
	glBegin(GL_POLYGON);
	glVertex2i(54,-12);
	glVertex2i(59,14);
	glVertex2i(64,29);
	glVertex2i(75,49);
	glVertex2i(79,65);
	glVertex2i(72,58);
	glVertex2i(46,41);
	glVertex2i(43,27);
	glVertex2i(32,6);
	glVertex2i(32,-12);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP); //contorno
	glVertex2i(54,-12);
	glVertex2i(59,14);
	glVertex2i(64,29);
	glVertex2i(75,49);
	glVertex2i(79,65);
	glVertex2i(72,58);
	glVertex2i(46,41);
	glVertex2i(43,27);
	glVertex2i(32,6);
	glVertex2i(32,-12);
	glEnd();
	
	
	glColor3f(0.827,0.556,0.011);
	glBegin(GL_POLYGON);
	glVertex2i(20,-12);
	glVertex2i(20,50);
	glVertex2i(26,63);
	glVertex2i(26,73); //
	glVertex2i(79,65);
	glVertex2i(72,58);
	glVertex2i(56,41);
	glVertex2i(53,27);
	glVertex2i(42,6);
	glVertex2i(42,-12);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(79,65);
	glVertex2i(72,58);
	glVertex2i(56,41);
	glVertex2i(53,27);
	glVertex2i(42,6);
	glVertex2i(42,-12);
	
	glVertex2i(20,-12);
	glVertex2i(20,50);
	glVertex2i(26,63);
	glVertex2i(26,73); //
	glEnd();
		
	
	glColor3f(0.988,0.764,0.192);
	glBegin(GL_POLYGON);
	glVertex2i(93,202);
	glVertex2i(116,195);
	glVertex2i(115,187);
	glVertex2i(112,124);
	glVertex2i(107,109);
	glVertex2i(99,87);
	glEnd();
	
	glColor3f(0.827,0.556,0.011);
	glBegin(GL_POLYGON);
	glVertex2i(79,65);
	glVertex2i(90,75);
	glVertex2i(99,87);
	glVertex2i(108,110);
	glVertex2i(100,139);
	glVertex2i(96,141);
	glVertex2i(99,157);
	glVertex2i(85,156);
	glVertex2i(71,126);
	glVertex2i(59,117);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(99,157);
	glVertex2i(95,160);
	glVertex2i(97,173);
	glVertex2i(94,175);
	glVertex2i(96,193);
	glVertex2i(93,202);
	glVertex2i(88,210);
	glVertex2i(85,156);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(88,210);
	glVertex2i(94,222);
	glVertex2i(115,229);
	glVertex2i(122,224);
	glVertex2i(145,227);
	glVertex2i(152,220);
	glVertex2i(152,213);
	glVertex2i(145,206);
	glVertex2i(133,207);
	glVertex2i(126,209);
	glVertex2i(105,197);
	glVertex2i(98,197);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(72,58);
	glVertex2i(59,117);
	glVertex2i(15,147);
	glVertex2i(7,149);
	glVertex2i(0,150);
	glVertex2i(0,14);
	glVertex2i(0,20);
	glEnd();
	
	glColor3f(0.988,0.764,0.192);
	glBegin(GL_POLYGON);
	glVertex2i(40,126);
	glVertex2i(34,112);
	glVertex2i(18,104);
	glVertex2i(0,104);
	glVertex2i(0,150);
	glVertex2i(7,149);
	glVertex2i(15,147);
	glEnd();
	
	glColor3f(0,0,0);
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(79,65);
	glVertex2i(90,75);
	glVertex2i(99,87);
	glVertex2i(108,110);
	glVertex2i(100,139);
	glVertex2i(96,141);
	glVertex2i(99,157);				
	glVertex2i(95,160);
	glVertex2i(97,173);
	glVertex2i(94,175);
	glVertex2i(96,193);
	glVertex2i(93,202);
	glVertex2i(98,197);
	glVertex2i(105,197);
	glVertex2i(126,209);
	glVertex2i(133,207);
	glVertex2i(145,206);
	glVertex2i(152,213);
	glVertex2i(152,220);
	glVertex2i(145,227);
	glVertex2i(122,224);
	glVertex2i(115,229);
	glVertex2i(94,222);
	glVertex2i(88,210);				
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(123,196);
	glVertex2i(133,206);
	glVertex2i(116,195);		
	glVertex2i(112,124);
	glVertex2i(107,109);		
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(88,210);
	glVertex2i(85,156);
	glVertex2i(71,126);
	glVertex2i(59,117);
	glVertex2i(15,147);
	glVertex2i(7,149);
	glVertex2i(0,150);
	glVertex2i(0,14);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i(40,126);
	glVertex2i(34,112);
	glVertex2i(18,104);
	glVertex2i(0,104);
	glVertex2i(0,150);
	glVertex2i(7,149);
	glVertex2i(15,147);
	glEnd();		
	
	
	glFlush();
	
}




void pinta() {
	double i = 1260;			
	
	escena1();
	Sleep(2000);		
	
	for (double n = 3.1; n >= 1; n -= 0.01) {
		glClear(GL_COLOR_BUFFER_BIT);		//Limpia ventana de visualizacion	
		Sleep(20);
		
		glTranslated(0,-i,0);
		
		glScaled(n,n,0);
		
		escena2();
		
		glScaled(1/n,1/n,0);	
		glTranslated(0,i,0);						
		
		i-=6;
	}
	
	escena3();
	
	escena4();
}



//Rutina principal
int main(int argc, char** argv)	
{
	glutInitWindowSize(800,600);
	glutInit(&argc, argv);;
	glutCreateWindow("ProyectoParcial-1");
	inicializa();
	glutDisplayFunc(pinta);
	glutMainLoop();
	return 0;
}
	
	
