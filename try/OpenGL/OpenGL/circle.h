#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H


#include "ellipse.h"
//create new figure inherited from ellipse
class Circle : public Ellipse {
public:
	Circle() = default;
	Circle(float x, float y, float r, const char* hex, bool fill = false, float w = 1);
	~Circle() = default;

	float get_rx() override; //get a X radius
	float get_ry() override; //get a Y radius
	float get_r(); //get a complite radius

	void set_rx(float rx) override; //set the X radius
	void set_ry(float ry) override; //set the Y radius
	void set_r(float f); //set the complite radius
};
#endif // !CIRCLE_H
