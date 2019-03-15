#include "Rocket.h"

Rocket::Rocket(double pMass, double pRadius, double rMass, double fMass, double fVel, double fCons) : RungeKutta(2) {
	std::vector<double> Y0(2);
	Y0[0] = pRadius;
	Y0[1] = 0;

	this->pMass = pMass*1E20;
	this->pRadius = pRadius;
	this->rMass = rMass;
	this->fMass = fMass;
	this->fVel = fVel;
	this->fCons = fCons;

	SetInit(0, Y0);
}

Rocket::~Rocket() {}

std::vector<double> Rocket::F(double time, std::vector<double> &coordinates) {
	// x - Y[0], dx/dt - Y[1]
	// d^2x/dt^2 - FY[1] , dx/dt - FY[0]

	FY[1] = Fr() - (6.6740E-17 * pMass / (Y[0] * Y[0])) + N(6.6740E-17 * pMass / (Y[0] * Y[0]));
	FY[0] = Y[1];

	return FY;
}

double Rocket::Fr() {
	if (fMass <= 0) return 0;
	return (fCons*fVel / (rMass + fMass));
}

double Rocket::N(double F) {
	if (Y[0] - pRadius > 0) return 0;
	return F;
}

double Rocket::Step(double interval) {
	NextStep(interval);

	fMass -= (fCons * interval);
	if (fMass <= 0)  fMass = 0;

	return t;
}

double Rocket::get_h() { return (Y[0]- pRadius); }
double Rocket::get_V() { return Y[1];  }
double Rocket::get_a() { return FY[1];  }
double Rocket::get_t() { return t;  }
double Rocket::get_m() { return fMass; }