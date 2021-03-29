#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

struct med_carta
	{
		string name;
		string doctor;
		string diagnosis;
		string drugs;
		string medical_history;
		
	};

struct pacient
	{
		string name;
        string arr[5];
	}; 



int main(){
	pacient pcnt;
	med_carta med_cart;

	getline(cin, pcnt.name);

	cin >> med_cart.name;
	cin >> med_cart.doctor;
	cin >> med_cart.diagnosis;
	cin >> med_cart.drugs;
	cin >> med_cart.medical_history;

	for (int i = 0; i < 4; i++)
	{
	      cout << pcnt.arr[i];
	}
	//cout << "are you entered: " << pcnt.name << endl << pcnt.zxz;
	system("pause");
}