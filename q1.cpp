#include <iostream>
#include <iomanip>

using namespace std;

class GasPump 
{
	private:
		double amountDispensed, 
			   amountCharged, 
			   costPerGallon,
			   secondsDispensed;

	public:
		double getAmountDispensed() 
		{ 
			amountDispensed = 0.10 * secondsDispensed;
			return amountDispensed; 
		}

		double getAmountCharged() 
		{ 
			amountCharged = amountDispensed * costPerGallon;
			return amountCharged; 
		}

		double getCostPerGallon() 
		{ 
			return costPerGallon; 
		}

		void setGasPump(double cost, double seconds)
		{
			costPerGallon = cost;
			secondsDispensed = seconds;
		}

		void resetPump() 
		{ 
			amountDispensed = 0.0;
			amountCharged = 0.0;
		}

};

int main()
{
	GasPump pump;
	char pumpAgain;
	double cpg, time;

	do
	{
		cout << "\nWelcome to the TigerTown Gas! \n";
		cout << "Please enter the cost per gallon of gas: $";
		cin >> cpg;
		cout << "Please enter how many seconds you pumped gas for: ";
		cin >> time;

		pump.setGasPump(cpg, time);
		cout << "\nTigerTown Gas";
		cout << "\nNumber of gallons pumped: " << pump.getAmountDispensed();
		cout << "\nCost per gallon of gas: $" << fixed << setprecision(2) << pump.getCostPerGallon();
		cout << "\nTotal Cost: $" << fixed << setprecision(2) << pump.getAmountCharged();

		cout << "\nThank you for pumping with TigerTown Gas! Would you like to pump again? ";
		cin >> pumpAgain;

		if ((pumpAgain == 'Y') || (pumpAgain == 'y'))
		{
			pump.resetPump();
		}
		else
		{
			return 0;
		}
	} 
	while ((pumpAgain == 'Y') || (pumpAgain == 'y'));
	
	return 0;
}
