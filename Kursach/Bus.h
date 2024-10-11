#pragma once
#include <iostream>
#include <string>
#include "Function.h"
using namespace std;
class Bus
{
private:
	int YearOfManufacture;
	string Marka;
	string Model;
	int Travel;
	int Id;
public:

	Bus(const int& yearOfManufacture, const string& marka, const string& model,
		int travel, const int& id) :YearOfManufacture(yearOfManufacture), Marka(marka), Model(model), Travel(travel),Id(id){}

	Bus()
	{

	}
	void AddTrip(int num)
	{
		print_centered("Выезды на автобусе прибавлены");
		Travel += num;
	}
	void Get_info()
	{
		cout << "Id: " << Id << endl;
		cout << "Год выпуска: " << YearOfManufacture << endl;
		cout << "Марка: " << Marka << endl;
		cout << "Модель: " << Model << endl;
		cout << "Количество выездов: " << Travel << endl;
	}
	int GetId() const { return Id; }
	int GetYearOfManufacture() const { return YearOfManufacture; }
	int GetTravel() const { return Travel; }
	string GetMarka() const { return Marka; }
	string GetModel() const { return Model; }
};

