#include "car.h"



car::car()
{
	string car_brand="";
	string car_type="";
	string car_plate="";
	int speed=0;
	int year_model=0;
	int max_speed=0;
}

car::car(string brand, int max, int yearmodel)
{
	car_brand = brand;
	max_speed = max;
	year_model = yearmodel;
}

void car::setbrand(string brand)
{
	car_brand = brand;
}

string car::getbrand()
{
	return car_brand;
}

void car::settype(string type)
{
	car_type = type;
}

string car::gettype()
{
	return car_type;
}

void car::setplate(string plate)
{
	car_plate = plate;
}

string car::getplate()
{
	return car_plate;
}

void car::setspeed(int s)
{
	max_speed = s;
}

int car::getspeed()
{
	return max_speed;
}

void car::setyearmodel(int y)
{
	year_model = y;
}

int car::getyearmodel()
{
	return year_model;
}

void car::setmaxspeed(int max)
{
	max_speed = max;
}

int car::getmaxspeed()
{
	return max_speed;
}
