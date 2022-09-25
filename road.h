#include <iostream>
using namespace std;
class road
{
private:
	char road_type;
	int speed_limit;
	static int countA;
	static int countB;
	static int countC;
public:
	road();
	road(char type, int limit);
	void setroadtype(char c);
	char getroadtype();
	void setspeedlimit(int l);
	int getspeedlimit();

	static int getcountA();
	static int getcountB();
	static int getcountC();

	bool radar(int carspeed, char roadtype);
	void allow(string cartype);
	int age(int yearmodel);





};

