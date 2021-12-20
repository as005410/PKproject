#pragma once
#ifndef DAMAGE_HERO_H
#define DAMAGE_HERO_H

#include "hero.h"

//create damage hero if box picked up, inherited from hero
class DamageHero : public Hero {
public:
	DamageHero() = default;
	DamageHero(float x, float y, float vx, float vy, const char* hex = "#ff8000", float width = 15);
	~DamageHero() override = default;

	//draw on the screen 
	void draw() override;
	//move 2 times slower 
	void move(float dx, float dy) override;
};

#endif // !DAMAGE_HERO_H
