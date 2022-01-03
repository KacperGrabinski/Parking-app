#pragma once
#include "Parking_Spot.h"
#include "Utilities.h"

#include <vector>
#include <string>
#include <algorithm>

class Parking_Lot
{
private:
	std::string m_address = "";
	int m_number_of_parking_spots;
	std::vector<Parking_Spot> m_parking_spots;

public:
	Parking_Lot(int numOfSpots, std::string address);
	void display();
};

