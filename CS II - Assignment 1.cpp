#include <iostream>
#include <queue>
#include "car.h"
#include "road.h"
using namespace std;


int main()
{
	
	car cara("audi", 100, 2020), carb("mercedes", 150, 2022), carc("toyota", 90, 2020), card("audi", 100, 2019), care("audi", 90, 2003), carf("volkswagen", 100, 2020), carg("mitsubishi", 100, 2020), carh("suzuki", 100, 2020);
	road r1('A', 90), r2('B', 110), r3('C', 80);

	cara.settype("Truck");
	carb.settype("Truck");
	carc.settype("Private");
	card.settype("Motorcycle");
	care.settype("Private");
	carf.settype("Motorcycle");
	carg.settype("Trucks");
	carh.settype("Bicycle");


	queue <car> carQ;
	carQ.push(cara);
	carQ.push(carb);
	carQ.push(carc);
	carQ.push(card);
	carQ.push(care);
	carQ.push(carf);
	carQ.push(carg);
	carQ.push(carh);


	while (!carQ.empty())
	{
		car temp = carQ.front();
		carQ.pop();
		int car_age;
		r1.allow(temp.gettype());
		car_age = r1.age(temp.getyearmodel());
		cout << "car age is :" << car_age << endl;
		r1.radar(temp.getspeed(), r1.getroadtype());



		if (r1.radar(temp.getspeed(), r1.getroadtype())) {
			cout << "This car is fined " << endl;

			cout << "Brand is: " << temp.getbrand() << endl
				<< "Plate is: " << temp.getplate() << endl
				<< "Type is: " << temp.gettype() << endl
				<< "Model Year: " << temp.getyearmodel() << endl;
		}

		cout << endl << "The number of cars on road one is: " << road::getcountA();
		cout << endl << "The number of cars on road one is: " << road::getcountB();
		cout << endl << "The number of cars on road one is: " << road::getcountC();
		cout << endl << endl << "-----------------------------------------";

		
	}

	return 0;
}

