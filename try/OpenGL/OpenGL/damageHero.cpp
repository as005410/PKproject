#include "damageHero.h"


DamageHero::DamageHero(float x, float y, float vx, float vy, const char* hex, float width): Hero(x, y, vx, vy, hex, width) {}

//move 2 times slover
void DamageHero::move(float dx, float dy) {
	Pixel::move(dx / 2, dy / 2);
}

void DamageHero::draw() {
	//basic draw
	Hero::draw();
	//draw a special text
	glColor3f(r, g, b);
	glRasterPos2i(GLint(x - 30), GLint(y - 25));
	for (const char& ch : "Slowly") {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, (int)ch);
	}
}