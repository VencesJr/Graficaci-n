#include <GL/glut.h>					//Libreria

//Rutina de inicialización
void inicializa (void)
{
	glClearColor(0.0,0.0,1.0,0.0);		//Color del fondo RGBA (A no interesa por ahora
	glMatrixMode(GL_PROJECTION);		//Para el tipo de matriz a usar: Proyeccion
	gluOrtho2D(0,600,0,600);			//Coordenada x de 0 a 400, coordenada y de 0 a 400
}

//Rutina que pinta
void pinta(void)
{
	glClear(GL_COLOR_BUFFER_BIT);		//Limpia ventana de visualizacion
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(140,65);
		glVertex2i(179,101);
		glVertex2i(204,94);
		glVertex2i(185,65);
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(185,65);
		glVertex2i(204,94);
		glVertex2i(228,84);
		glVertex2i(201,65);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(201,65);
		glVertex2i(228,84);
		glVertex2i(260,80);		
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(204,94);
		glVertex2i(228,84);
		glVertex2i(243,116);		
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(228,84);
		glVertex2i(255,77);
		glVertex2i(265,98);
		glVertex2i(243,116);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(243,116);
		glVertex2i(265,98);
		glVertex2i(282,139);		
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(255,77);
		glVertex2i(297,100);
		glVertex2i(282,139);		
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(282,139);
		glVertex2i(297,100);
		glVertex2i(320,136);		
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(320,136);
		glVertex2i(340,131);
		glVertex2i(297,100);		
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(282,139);
		glVertex2i(320,136);
		glVertex2i(332,154);
		glVertex2i(326,158);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_POLYGON);
		glVertex2i(340,131);
		glVertex2i(352,145);
		glVertex2i(326,158);
		glVertex2i(320,136);
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_TRIANGLES);
		glVertex2i(326,158);
		glVertex2i(352,145);
		glVertex2i(367,168);		
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(340,131);
		glVertex2i(385,155);
		glVertex2i(367,168);		
	glEnd();

	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(367,168);
		glVertex2i(385,155);
		glVertex2i(401,167);		
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(446,146);
		glVertex2i(385,155);
		glVertex2i(401,167);		
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_POLYGON);
		glVertex2i(179,101);
		glVertex2i(198,122);
		glVertex2i(228,130);
		glVertex2i(204,94);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(204,94);
		glVertex2i(228,130);
		glVertex2i(238,120);		
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(198,122);
		glVertex2i(214,144);
		glVertex2i(228,130);		
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_POLYGON);
		glVertex2i(214,144);
		glVertex2i(228,130);
		glVertex2i(244,151);
		glVertex2i(220,154);
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(228,130);
		glVertex2i(238,120);
		glVertex2i(252,130);
		glVertex2i(244,151);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(244,151);
		glVertex2i(252,130);
		glVertex2i(271,171);		
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(271,171);
		glVertex2i(282,178);
		glVertex2i(292,160);
		glVertex2i(252,130);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(282,178);
		glVertex2i(292,160);
		glVertex2i(313,188);		
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(292,160);
		glVertex2i(313,188);
		glVertex2i(325,192);
		glVertex2i(344,179);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(325,192);
		glVertex2i(344,179);
		glVertex2i(367,196);		
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(386,180);
		glVertex2i(344,179);
		glVertex2i(367,196);		
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(367,196);
		glVertex2i(386,180);
		glVertex2i(413,175);
		glVertex2i(396,192);
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(396,192);
		glVertex2i(412,187);
		glVertex2i(435,170);
		glVertex2i(426,167);
		glVertex2i(413,175);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(435,170);
		glVertex2i(426,167);
		glVertex2i(452,148);		
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(220,154);
		glVertex2i(244,151);
		glVertex2i(248,162);
		glVertex2i(230,172);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(230,172);
		glVertex2i(234,178);
		glVertex2i(256,180);
		glVertex2i(248,162);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(234,178);
		glVertex2i(246,201);
		glVertex2i(256,180);		
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(246,201);
		glVertex2i(256,180);
		glVertex2i(262,201);
		glVertex2i(252,214);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(252,214);
		glVertex2i(262,201);
		glVertex2i(268,226);		
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(252,214);		
		glVertex2i(268,226);
		glVertex2i(259,236);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(275,257);		
		glVertex2i(268,226);
		glVertex2i(259,236);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(264,255);		
		glVertex2i(275,257);
		glVertex2i(259,236);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(264,255);
		glVertex2i(275,257);
		glVertex2i(275,269);
		glVertex2i(268,277);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(275,269);		
		glVertex2i(268,277);
		glVertex2i(278,286);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(268,277);
		glVertex2i(278,286);
		glVertex2i(280,298);
		glVertex2i(270,297);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(304,291);		
		glVertex2i(342,288);
		glVertex2i(340,301);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(378,296);		
		glVertex2i(342,288);
		glVertex2i(340,301);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(378,296);		
		glVertex2i(361,315);
		glVertex2i(340,301);
	glEnd();
		
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(361,315);		
		glVertex2i(367,307);
		glVertex2i(389,326);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(367,307);		
		glVertex2i(378,296);
		glVertex2i(399,307);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(367,307);
		glVertex2i(389,326);
		glVertex2i(407,310);
		glVertex2i(399,307);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(389,326);		
		glVertex2i(395,315);
		glVertex2i(414,328);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_POLYGON);
		glVertex2i(398,319);
		glVertex2i(407,310);
		glVertex2i(430,312);
		glVertex2i(424,327);
		glVertex2i(414,328);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(424,327);		
		glVertex2i(430,312);
		glVertex2i(450,322);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(430,312);		
		glVertex2i(450,322);
		glVertex2i(453,306);
	glEnd();
	
	
	glBegin(GL_POLYGON);
		glColor3f(0.274,0.509,0.705);
		glVertex2i(467,313);
		glColor3f(0.125,0.698,0.666);
		glVertex2i(453,306);
		glVertex2i(468,296);
		glColor3f(0.4,0.803,0.666);
		glVertex2i(488,278);		
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(467,313);		
		glVertex2i(450,322);
		glVertex2i(453,306);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(364,322);		
		glVertex2i(370,334);
		glVertex2i(378,327);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_POLYGON);
		glVertex2i(370,334);
		glVertex2i(378,327);
		glVertex2i(385,329);
		glVertex2i(386,342);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(386,342);		
		glVertex2i(385,329);
		glVertex2i(400,332);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(386,342);		
		glVertex2i(400,332);
		glVertex2i(412,335);
		glVertex2i(422,345);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(412,335);		
		glVertex2i(422,345);
		glVertex2i(439,330);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(447,337);		
		glVertex2i(422,345);
		glVertex2i(439,330);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(447,337);		
		glVertex2i(456,332);
		glVertex2i(458,324);
		glVertex2i(439,330);		
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_POLYGON);
		glVertex2i(456,332);		
		glVertex2i(458,324);
		glVertex2i(470,315);
		glVertex2i(472,321);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(472,321);		
		glVertex2i(470,315);
		glVertex2i(489,288);
		glVertex2i(480,310);
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(242,290);		
		glVertex2i(214,298);
		glVertex2i(188,315);
		glVertex2i(186,288);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(188,315);		
		glVertex2i(186,288);
		glVertex2i(154,305);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(188,315);		
		glVertex2i(154,305);
		glVertex2i(156,325);
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(156,325);		
		glVertex2i(154,305);
		glVertex2i(142,310);
		glVertex2i(134,327);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(142,310);		
		glVertex2i(134,327);
		glVertex2i(122,312);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(122,312);		
		glVertex2i(134,327);
		glVertex2i(104,322);
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(104,322);		
		glVertex2i(122,312);
		glVertex2i(102,308);
		glVertex2i(92,318);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(92,318);		
		glVertex2i(102,308);
		glVertex2i(86,302);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(92,318);		
		glVertex2i(75,305);
		glVertex2i(86,302);
	glEnd();

	glColor3f(0,0.545,0.545);
	glBegin(GL_TRIANGLES);
		glVertex2i(60,278);		
		glVertex2i(75,305);
		glVertex2i(86,302);
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(182,321);		
		glVertex2i(176,335);
		glVertex2i(168,339);
		glVertex2i(160,331);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(168,339);		
		glVertex2i(160,331);
		glVertex2i(144,345);
	glEnd();
	
	glColor3f(0.4,0.803,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(144,345);		
		glVertex2i(136,333);
		glVertex2i(122,332);
		glVertex2i(113,343);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_TRIANGLES);
		glVertex2i(144,345);		
		glVertex2i(160,331);
		glVertex2i(136,333);
	glEnd();
	
	glColor3f(0.274,0.509,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(113,343);		
		glVertex2i(122,332);
		glVertex2i(102,325);
	glEnd();
	
	glColor3f(0,0.545,0.545);
	glBegin(GL_POLYGON);
		glVertex2i(113,343);		
		glVertex2i(102,325);
		glVertex2i(92,324);
		glVertex2i(88,330);
	glEnd();
	
	glColor3f(0.125,0.698,0.666);
	glBegin(GL_POLYGON);
		glVertex2i(88,330);		
		glVertex2i(75,319);
		glVertex2i(60,290);
		glVertex2i(76,311);
		glVertex2i(92,324);
	glEnd();
	
	//Flor
	glColor3f(1,0.411,0.705);
	glBegin(GL_TRIANGLES);
		glVertex2i(293,305);		
		glVertex2i(338,313);
		glVertex2i(313,325);
	glEnd();
	
	glColor3f(1,0.078,0.576);
	glBegin(GL_TRIANGLES);
		glVertex2i(367,343);		
		glVertex2i(338,313);
		glVertex2i(313,325);
	glEnd();
	
	glColor3f(0.78,0.082,0.129);
	glBegin(GL_POLYGON);
		glVertex2i(313,325);		
		glVertex2i(330,356);
		glVertex2i(337,385);
		glVertex2i(372,352);
		glVertex2i(367,343);
	glEnd();
	
	glColor3f(0.858,0.439,0.576);
	glBegin(GL_POLYGON);
		glVertex2i(372,352);		
		glVertex2i(379,388);
		glVertex2i(374,424);
		glVertex2i(358,408);
		glVertex2i(337,385);
	glEnd();
	
	glColor3f(0.78,0.082,0.129);
	glBegin(GL_POLYGON);
		glVertex2i(358,408);		
		glVertex2i(374,424);
		glVertex2i(366,464);
		glVertex2i(351,499);
		glVertex2i(330,488);
		glVertex2i(351,460);
	glEnd();
	
	glColor3f(1,0.078,0.576);
	glBegin(GL_POLYGON);
		glVertex2i(358,408);		
		glVertex2i(337,385);
		glVertex2i(334,435);
		glVertex2i(351,460);		
	glEnd();
	
	glColor3f(1,0.078,0.576);
	glBegin(GL_POLYGON);
		glVertex2i(351,499);		
		glVertex2i(335,532);
		glVertex2i(332,522);
		glVertex2i(320,500);
		glVertex2i(330,488);
	glEnd();
	
	glColor3f(1,0.411,0.705);
	glBegin(GL_POLYGON);
		glVertex2i(351,460);		
		glVertex2i(330,488);
		glVertex2i(328,472);
		glVertex2i(322,465);
		glVertex2i(334,435);
	glEnd();
	
	glColor3f(0.78,0.082,0.129);
	glBegin(GL_POLYGON);
		glVertex2i(320,500);		
		glVertex2i(310,491);
		glVertex2i(322,465);
		glVertex2i(328,472);
		glVertex2i(330,488);
	glEnd();
	
	glColor3f(0.78,0.082,0.129);
	glBegin(GL_POLYGON);
		glVertex2i(254,305);		
		glVertex2i(235,326);
		glVertex2i(199,322);
		glVertex2i(222,309);		
	glEnd();
	
	glColor3f(1,0.078,0.576);
	glBegin(GL_POLYGON);
		glVertex2i(235,326);		
		glVertex2i(218,354);
		glVertex2i(186,380);
		glVertex2i(199,322);		
	glEnd();
	
	glColor3f(0.858,0.439,0.576);
	glBegin(GL_POLYGON);
		glVertex2i(199,322);		
		glVertex2i(180,343);
		glVertex2i(171,369);
		glVertex2i(170,394);
		glVertex2i(186,380);
	glEnd();
	
	glColor3f(1,0.411,0.705);
	glBegin(GL_POLYGON);
		glVertex2i(218,354);		
		glVertex2i(211,379);
		glVertex2i(210,395);
		glVertex2i(186,380);		
	glEnd();
	
	glColor3f(1,0.078,0.576);
	glBegin(GL_POLYGON);
		glVertex2i(210,395);		
		glVertex2i(172,417);
		glVertex2i(170,394);
		glVertex2i(186,380);		
	glEnd();
	
	glColor3f(0.78,0.082,0.129);
	glBegin(GL_TRIANGLES);		
		glVertex2i(171,369);
		glVertex2i(170,394);
		glVertex2i(186,380);		
	glEnd();
	
	glColor3f(0.78,0.082,0.129);
	glBegin(GL_TRIANGLES);		
		glVertex2i(210,395);
		glVertex2i(172,417);
		glVertex2i(214,433);		
	glEnd();
	
	glColor3f(1,0.411,0.705);
	glBegin(GL_POLYGON);
		glVertex2i(172,417);		
		glVertex2i(190,484);
		glVertex2i(216,443);
		glVertex2i(214,433);		
	glEnd();
	
	glColor3f(0.858,0.439,0.576);
	glBegin(GL_TRIANGLES);		
		glVertex2i(190,484);
		glVertex2i(216,443);
		glVertex2i(238,491);		
	glEnd();
	
	glColor3f(0.78,0.082,0.129);
	glBegin(GL_POLYGON);
		glVertex2i(202,511);		
		glVertex2i(190,484);
		glVertex2i(238,491);
		glVertex2i(219,511);		
	glEnd();
	
	glColor3f(0.858,0.439,0.576);
	glBegin(GL_TRIANGLES);		
		glVertex2i(202,511);
		glVertex2i(219,511);
		glVertex2i(212,532);		
	glEnd();
	
	glBegin(GL_POLYGON);
		glColor3f(1,0.411,0.705);
		glVertex2i(275,307);		
		glColor3f(1,0.078,0.576);
		glVertex2i(316,352);
		glColor3f(0.78,0.082,0.129);
		glVertex2i(329,400);
		glColor3f(0.858,0.439,0.576);
		glVertex2i(323,444);
		glColor3f(1,0.411,0.705);
		glVertex2i(308,483);
		glColor3f(1,0.078,0.576);
		glVertex2i(275,532);
		glColor3f(0.78,0.082,0.129);
		glVertex2i(240,483);
		glColor3f(0.858,0.439,0.576);
		glVertex2i(226,444);
		glColor3f(1,0.411,0.705);
		glVertex2i(222,400);
		glColor3f(1,0.078,0.576);
		glVertex2i(235,352);		
	glEnd();
	
	glFlush();							//Ejecuta las rutinas de opengl
}

int main(int argc, char** argv)			//No es necesario poner algo en los parentesis
{
	glutInitWindowSize(600,600);		//Tamaño de la ventana de visualizacion (reales)
	glutInit(&argc, argv);;
	glutCreateWindow("Flor");			//Crea la ventana de visualizacion
	inicializa();
	glutDisplayFunc(pinta);				//Pinta lo que ordene pinta()
	glutMainLoop();						//Espera órdenes
	return 0;
}

