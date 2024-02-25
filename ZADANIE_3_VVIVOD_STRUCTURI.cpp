#include <iostream>

using namespace std;

struct Address
{
	string City;
	string street;
	int NHouse;
	int NFlat;
	int index;
};

void Structure_output(Address& A)
{
	cout << "Город: " << A.City << endl;
	cout << "Улица: " << A.street << endl;
	cout << "Дом: " << A.NHouse << endl;
	cout << "Квартира: " << A.NFlat << endl;
	cout << "Индекс: " << A.index << endl;
}


int main(int argc, char* argv[])
{
	Address A;

	cout << "Город: ";
	cin >> A.City;
	cout << "Улица: ";
	cin >> A.street;
	cout << "Номер дома: ";
	cin >> A.NHouse;
	cout << "Номер квартиры: ";
	cin >> A.NFlat;
	cout << "Индекс: ";
	cin >> A.index;
	cout << endl;

	Structure_output(A);

	return 0;
}