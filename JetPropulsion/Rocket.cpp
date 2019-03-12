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

double Rocket::N(double F) {
	if (Y[0] == 0) return -F;
	else return 0;
}

double Rocket::ReactiveF() {
	if (fMass > 0)
		return fVel * fCons;
	else
		return 0;
}

double Rocket::GravitationF(double R, double m, double M) {
	return 9.8 * m;
	//return (6.67408E-11 * m * M / R / R);
}

std::vector<double> Rocket::F(double time, std::vector<double> &coordinates) {

	FY[0] = Y[1];
	FY[1] = (ReactiveF()-GravitationF(Y[0], rMass+fMass, pMass)+N(ReactiveF() - GravitationF(Y[0], rMass + fMass, pMass))) / (rMass + fMass);

	return FY;
}
double Rocket::Step(double interval) {
	NextStep(interval);

	fMass -= (fCons * interval);
	if (fMass <= 0)  fMass = 0;

	return t;
}

double Rocket::get_h() { return (Y[0]- pRadius); }
double Rocket::get_V() { return Y[0];  }
double Rocket::get_a() { return Y[1];  }
double Rocket::get_t() { return t;  }
double Rocket::get_m() { return fMass; }