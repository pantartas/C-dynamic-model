#pragma once
#include <iostream>
#include <string>
#include <vector>

class vehicle {
public:
	vehicle(float mass, float cf, float cr, float CoG, float wheelbase, float Izz);
	std::vector<float> getderivatives();
	std::vector<float> getanalysis(float steerd, float velocity);
	std::vector<float> getyawrate();
private:
	float mass;
	float cf;
	float cr;
	float CoG;
	float wheelbase;
	float a;
	float b;
	float Ndelta;
	float Ydelta;
	float Yr;
	float Nb;
	float Yb;
	float Nr;
}
;
