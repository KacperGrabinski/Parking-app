#pragma once
class Parking_Spot
{
private:
	int m_parking_spot_number;
	int m_seconds_left = 0;
	bool m_expired = false;
	bool m_available = true;

public:
	Parking_Spot(int num);
	void dispaly();
};

