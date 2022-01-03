#include "Parking_Spot.h"



Parking_Spot::Parking_Spot(int num) {
	m_parking_spot_number = num;
}

void Parking_Spot::display() {
	std::cout << "#" << std::left << std::setw(4) << m_parking_spot_number;
	std::cout << std::left << std::setw(19) << "Seconds: " << std::right << m_seconds_left;

	if (m_available == true)
		std::cout << std::right << std::setw(15) << "Is Available!" << std::endl;
	else if (m_expired == true)
		std::cout << std::right << std::setw(15) << "Is Expired!" << std::endl;
	else
		std::cout << std::right << std::setw(15) << "Is Taken!" << std::endl;
}