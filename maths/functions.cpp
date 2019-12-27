#include "functions.hpp" //H_FUNCTIONS

double celsiusToFahrenheit(double c, double f)
{
    f = (c * 9 / 5) + 32;
    f; //breakpoint
    return f;
}

double fahrenheitToCelsius(double c, double f)
{
    c = ((f - 32) * 5) / 9;
    c; //breakpoint
    return c;
}

double celsiusToKelvin(double c, double k)
{
    k = c + 273.15f;
    k; //breakpoint
    return k;
}

double kelvinToCelsius(double c, double k)
{
    c = k - 273.15f;
    c; //breakpoint
    return c;
}

double fahrenheitToKelvin(double f, double k)
{
    k = (f + 459.67f) * (5 / 9);
    k; //breakpoint
    return k;
}

double kelvinToFahrenheit(double f, double k)
{
    f = k * (9 / 5) - 459.67f;
    f; //breakpoint
    return f;
}

long absolute(long n)
{
    if (n < 0)
    {
		-n; //breakpoint
        return -n;
    }
    else
	{
    	n; //breakpoint
    	return n;
	}
}
