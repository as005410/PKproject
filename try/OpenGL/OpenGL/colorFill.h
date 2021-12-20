#pragma once
#ifndef FILL_H
#define FILL_H

//to get the way of drawing
class Fill {
protected:
	//fill option
	bool fill = false;
public:
	//getter
	bool getFill() { return fill; }
	//setter
	void setFill(bool Fill) { fill = Fill; }

};

#endif // !FILL_H

