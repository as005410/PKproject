#pragma once
#ifndef R_COLOR
#define R_COLOR
#include <stdexcept>


//to get color from hexadecimal string
class Color {
protected:
	float r = 0; //red
	float g = 0; //green
	float b = 0; //blue
public:
	//getters
    float get_r() { return r;}
	float get_g() { return g; }
	float get_b() { return b; }

	//setters
    void setColor(const char* hex) {
        int red, green, blue;
       // if (std::regex_match(hex, std::regex("^#(?:[0-9a-fA-F]{3}){1,2}$"))) {
            // get the rgb from hex string
            if(sscanf_s(hex + 1, "%02x%02x%02x", &red, &green, &blue) == 3) {
                // component normalization
                r = (float)red / 255;
                g = (float)green / 255;
                b = (float)blue / 255;
            }
       // }
        // not correct string
        else {
            throw std::runtime_error("Incorrect color entered!");
        }
    

        
}

    void set_r(float R) { r = R; }
    void set_g(float G) { g = G; }
    void set_b(float B) { b = B; }
};
#endif // !R_COLOR

