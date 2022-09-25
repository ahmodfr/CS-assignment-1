
#include <iostream>
using namespace std;
class car

{
 private:
	string car_brand;
	string car_type;
	string car_plate;
	int speed;
	int year_model;
	int max_speed;
public: 
	car();
	car(string brand, int max, int yearmodel);
	void setbrand(string brand);
	string getbrand();
	void settype(string type);
	string gettype();
	void setplate(string plate);
	string getplate();
	void setspeed(int s);
	int getspeed();
	void setyearmodel(int y);
	int getyearmodel();
	void setmaxspeed(int max);
	int getmaxspeed();

};

