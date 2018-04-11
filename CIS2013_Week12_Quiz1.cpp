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
	int year_value;
	int car_ports_value;
	int windows_value;
	int doors_value;
	void get_color();
	void get_year();
	void get_car_ports();
	void get_windows();
	void get_doors();
	void print_info();
	void get_value();
};

House user;
void choice(char);

int main(){
	
user.color = "White";
user.year = 1955;
user.car_ports = 2;
user.windows = 10;
user.doors = 4;
user.year_value = user.year*10;
user.car_ports_value = user.car_ports*5000;
user.windows_value = user.windows*4500;
user.doors_value = user.doors*5000;

user.print_info();
char user_pick;
while(true){

cout << "What would you like to do?: ";
cin >> user_pick;
choice (user_pick);
cout << endl;
}
	return 0;
}

void House::get_color(){
	cout << "House color: ";
	cin >> color;
}
void House::get_year(){
	cout << "House year: ";
	cin >> year;
	year_value = year*10;
}
void House::get_car_ports(){
	cout << "garage doors: ";
	cin >> car_ports;
	car_ports_value = car_ports*5000;
}	
void House::get_windows(){
	cout << "number of windows: ";
	cin >> windows;
	windows_value = windows*4500;
}
void House::get_doors(){
	cout << "Number of doors: ";
	cin >> doors;
	doors_value = doors*5000;
}
void House::print_info(){
	cout << "House color (c): " << color << endl;
	cout << "House year (y): " << year << endl;
	cout << "garage doors (g): " << car_ports << endl;
	cout << "number of windows (w): " << windows << endl;
	cout << "Number of doors (d): " << doors << endl;
	cout << "Print stats (p)" << endl;
	cout << "Get Value: (v)" << endl;
}
void House::get_value(){
	cout << endl << "Your house is worth $" 
		 << year_value+car_ports_value+windows_value+doors_value;
}
void choice (char a){
	if (a == 'c'){user.get_color();}
	else if (a =='y'){user.get_year();}
	else if (a == 'g'){user.get_car_ports();}
	else if (a == 'w'){user.get_windows();}
	else if (a == 'd'){user.get_doors();}
	else if (a == 'p'){user.print_info();}
	else if (a== 'v'){user.get_value();}
}
















