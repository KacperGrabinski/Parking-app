#pragma once
#include "Parking_Spot.h"

#include <vector>
#include <string>

class Parking_Lot
{
	std::string m_address = "";
	int m_number_of_parking_spots;


private:
	std::vector<Parking_Spot> m_parking_spots;
};

