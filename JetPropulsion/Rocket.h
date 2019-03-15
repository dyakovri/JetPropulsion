#pragma once
#include "RungeKutta.h"
class Rocket :
	public RungeKutta
{
protected:
	double pMass, pRadius, rMass, fMass;

public:
	double fVel, fCons;

	Rocket(double pMass, double pRadius, double rMass, double fMass, double fVel, double fCons);
	~Rocket();

	double N(double F);
	double Fr();

	std::vector<double> F(double time, std::vector<double> &coordinates);
	double Step(double interval);

	double get_h();
	double get_V();
	double get_a();
	double get_t();
	double get_m();
};

