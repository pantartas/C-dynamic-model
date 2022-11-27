#include <string>
#include "Header.h"

vehicle::vehicle(float massi, float cfi, float cri, float CoGi, float wheelbasei, float Izzi) {
	mass = massi;
	cf = cfi;
	cr = cri;
	CoG = CoGi;
	wheelbase = wheelbasei;
	Izz = Izzi;
	a = CoGi;
	b = wheelbase - CoG;
	Ndelta = -a * cf;
	Ydelta = -cf;
	Nr = a * a * cf + b * b * cr;
	Yb = cf + cr;
	Nb = a * cf - b * cr;
	Yr = a * cf - b * cr;
}
std::vector<float> vehicle::getderivatives() {
	std::vector<float> derivatives = { a, b, Ndelta, Ydelta, Nr, Yb, Nb, Yr };
	return (derivatives);
}
std::vector<float> getanalysis(float steerdi, float velocityi) {

}
std::vector<float> getyawrate();