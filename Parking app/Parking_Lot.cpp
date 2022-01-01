#include "Parking_Lot.h"



Parking_Lot::Parking_Lot(int numOfSpots, std::string address) {
	m_address = address;
	for (int i = 0; i < numOfSpots; i++) {
		Parking_Spot tempSpot(i);
		m_parking_spots.push_back(tempSpot);
	}
}