#include "functions.hpp" //H_FUNCTIONS

double celsiusToFahrenheit(double c, double f)
{
    f = (c * 9 / 5) + 32;
    f;
    return f;
}

double fahrenheitToCelsius(double c, double f)
{
    c = ((f - 32) * 5) / 9;
    c;
    return c;
}

double celsiusToKelvin(double c, double k)
{
    k = c + 273.15f;
    k;
    return k;
}

double kelvinToCelsius(double c, double k)
{
    c = k - 273.15f;
    c;
    return c;
}

double fahrenheitToKelvin(double f, double k)
{
    k = (f + 459.67f) * (5 / 9);
    k;
    return k;
}

double kelvinToFahrenheit(double f, double k)
{
    f = k * (9 / 5) - 459.67f;
    f;
    return f;
}

double absolute(double n)
{
    if (n < 0)
    {
        n = -n;
		n;
        return n;
    }
    
    n;
    return n;
}