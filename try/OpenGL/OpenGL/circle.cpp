#include "circle.h"

Circle::Circle(float x,float y, float r, const char* hex, bool fill, float w):Ellipse(x,y,r,r,hex,fill,w){}

//getters
float Circle::get_r() { return rx; }
float Circle::get_rx() { return rx; }
float Circle::get_ry() { return rx; }

//setters
void Circle::set_r(float r) { rx = r; ry = r; }
void Circle::set_rx(float rx) { set_r(rx); }
void Circle::set_ry(float ry) { set_r(ry); }