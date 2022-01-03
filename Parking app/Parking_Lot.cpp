#include "Parking_Lot.h"



Parking_Lot::Parking_Lot(int numOfSpots, std::string address) {
	m_number_of_parking_spots = numOfSpots;
	m_address = trimSpaces(address);
	for (int i = 0; i < numOfSpots; i++) {
		Parking_Spot tempSpot(i);
		m_parking_spots.push_back(tempSpot);
	}
}

void Parking_Lot::display() {
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "Location: " << m_address << " | Number of Spots: " << m_number_of_parking_spots << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "#    | Time              | Status" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (auto spot : m_parking_spots) {
		spot.display();
	}
}