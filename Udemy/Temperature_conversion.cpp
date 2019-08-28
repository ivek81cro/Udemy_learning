#include <iostream>
#include <cmath>
using namespace std;


double farenheit_to_celsius(double f);
double farenheit_to_kelvin(double f);


void temperature_conversion(double fahrenheit_temperature) 
{
	double celsius_temperature = farenheit_to_celsius(fahrenheit_temperature);
	double kelvin_temperature = farenheit_to_kelvin(fahrenheit_temperature);

	cout << "The fahrenheit temperature " << fahrenheit_temperature 
		<< " degrees is equivalent to " << celsius_temperature 
		<< " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}


double farenheit_to_celsius(double f)
{
	return round((5.0 / 9.0)*(f - 32));
}
double farenheit_to_kelvin(double f)
{
	return round((5.0 / 9.0)*(f - 32) + 273);
}

int main()
{
	temperature_conversion(10.0);
}