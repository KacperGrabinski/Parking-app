// Version 0.0.1

#include "Parking_Lot.h"
#include "Parking_Spot.h"


#include <iostream>
#include <sstream>

void main() {
	std::string input;

	std::cout << "Please enter the number of parking spots and address seperated by a comma: ";
	std::getline(std::cin,input);
	std::istringstream ss(input);
	std::string token;
	std::string numOfSpots;
	std::string address;
	std::getline(ss, numOfSpots, ',');
	std::getline(ss, address);

	Parking_Lot parking1(std::stoi(numOfSpots), address);
	parking1.display();



}