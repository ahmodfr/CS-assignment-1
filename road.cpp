#include "road.h"

 int road::countA=0;
 int road::countB=0;
 int road::countC=0;
road::road()
{
	char road_type=' ';
	int speed_limit=0;
	static int countA;
	static int countB;
	static int countC;
}

road::road(char type, int limit)
{
	if (type == 'A' || type == 'B' || type == 'C') {
		road_type = type;
	}
	else
		cout << "Wrong road type: Please enter either A, B, or C" << endl;
	speed_limit = limit;

}

void road::setroadtype(char c)
{
	if (c == 'A' || c == 'B' || c == 'C') {
		road_type = c;
	}
	else
	{
		cout << "Wrong road type: Please enter either A, B, or C" << endl;
	}
}

char road::getroadtype()
{
	return road_type;
}

void road::setspeedlimit(int l)
{
	speed_limit = l;
}

int road::getspeedlimit()
{
	return speed_limit;;
}


int road::getcountA()
{
	return countA;
}

int road::getcountB()
{
	return countB;
}

int road::getcountC()
{
	return countC;
}

bool road::radar(int carspeed, char roadtype)
{
	if (carspeed > speed_limit)
		return true;
	else
		return false;
}
void road::allow(string cartype)
{
	if (cartype == "Private" || "Motorcycle") {
		if (road_type == 'A')
			cout << endl <<  "Road A: Allowed " << endl << endl;
		++countA;
	}
	else if (cartype == "Truck")
	{
		if (road_type == 'C')
			cout << endl<<  "Road C: Allowed" << endl << endl;
		++countC;
	}
	else if (road_type == 'B') {
		cout << endl <<  "Road B: Allow all vehicles " << endl << endl;
		++countB;
	}
}

int road::age(int yearmodel)
{
	return 2022 - yearmodel;
}
