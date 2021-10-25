#include <iostream>

using namespace std;

// Assignment 4 - Exercise 2
class Temperature 
{
	private:
		double degreesKelvin,
			   degreesFahrenheit,
			   degreesCelsius,
			   inputTemp;

	public:
		void setTempKelvin(double degreesKelvin) 
		{ 
			this->degreesKelvin = degreesKelvin;
		}

		double getTempKelvin() 
		{  
			return degreesKelvin;
		}

		void setTempCelsius() 
		{  
			this->degreesCelsius = degreesKelvin - 273.15;
		}

		double getTempCelsius() 
		{ 
			return degreesCelsius;
		}

		void setTempFahrenheit() 
		{  
			this->degreesFahrenheit = ((9 / 5.0) * degreesCelsius) + 32;
		}

		double getTempFahrenheit() 
		{ 
			return degreesFahrenheit;
		}
};

int main() 
{
	// Assignment 4 - Exercise 2

	Temperature tempConversion;
	char convertAgain;
	double input;

	cout << "\nExercise 2\n";
	cout << "This is a temperature converter.\n";
	cout << "Enter a temperature (in Kelvin): ";
	cin >> input;

	tempConversion.setTempKelvin(input);
	tempConversion.getTempKelvin();
	cout << "Degrees in Kelvin: " << tempConversion.getTempKelvin() << endl;
	tempConversion.setTempCelsius();
	tempConversion.getTempCelsius();
	cout << "Degrees in Celsius: " << tempConversion.getTempCelsius() << endl;
	tempConversion.setTempFahrenheit();
	tempConversion.getTempFahrenheit();
	cout << "Degrees in Fahrenheit: " << tempConversion.getTempFahrenheit() << endl;

	return 0;
}
