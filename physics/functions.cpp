#include "functions.hpp" //H_FUNCTIONS

double sinus(double a, double b, double c, double sin)
{
	sin = a / c;
	sin; //breakpoint
	return sin;
}

double cosinus(double a, double b, double c, double cos)
{
	cos = b / c;
	cos; //breakpoint
	return cos;
}

double tangens(double a, double b, double c, double tg)
{
	tg = a / b;
	tg; //breakpoint
	return tg;
}

double distance(double v0, double t, double a, double s)
{
	s = (v0 * t) - (0.5f * (a * t * t));

	if (s < 0)
	{
		s = -s;
	}

	s; //breakpoint
	return s;
}

double acceleration(double v0, double v, double t, double a)
{
	a = (v - v0) / t;

	if (a < 0)
	{
		a = -a;
	}

	a; //breakpoint
	return a;
}
