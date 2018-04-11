#include <iostream>
#include <cstring>
using namespace std;

class House{
	public:
	string color;
	int year;
	int car_ports;
	int windows;
	int doors;
	void info();
	void print_info();
};

int main(){
	
House user;
user.color = "White";
user.year = 1955;
user.car_ports = 2;
user.windows = 10;
user.doors = 4;

user.info();
user.print_info();
	
	return 0;
}

void House::info(){
	cout << "House color: ";
	cin >> color;
	cout << "House year: ";
	cin >> year;
	cout << "garage doors: ";
	cin >> car_ports;
	cout << "number of windows: ";
	cin >> windows;
	cout << "Number of doors: ";
	cin >> doors;
}
void House::print_info(){
	cout << "House color: " << color << endl;
	cout << "House year: " << year << endl;
	cout << "garage doors: " << car_ports << endl;
	cout << "number of windows: " << windows << endl;
	cout << "Number of doors: " << doors << endl;
}