#include<string>
#include <iostream>
#include<iomanip>


using namespace std;


using integer = int;



int main()
{
	float costPerGallon = 3.80;
	float totalCostForGas;
	float numberOfGallonsInTank = 0;
	std::cout << "How many gallons of gas does your car hold? " << std::endl;
	//std::cout << 

	while (!(std::cin >> numberOfGallonsInTank)) {
		std::cout << "Invalid input. Please enter a numeric value for the number of gallons: ";
		std::cin.clear(); // Clear the error flag
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
	}


	totalCostForGas = costPerGallon * numberOfGallonsInTank;
	std::cout << std::fixed << std::setprecision(2) << "it costs you $" << totalCostForGas << " to fill up your tank!" << std::endl;

	int milesPerGallon = 18;

	int numberOfMilesOnFullTank = numberOfGallonsInTank * milesPerGallon;

	std::cout << "Your car can travel " << numberOfMilesOnFullTank << " miles on a full tank of gas." << std::endl;
}

