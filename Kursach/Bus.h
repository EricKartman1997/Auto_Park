#pragma once
#include <iostream>
#include <string>
using namespace std;
class Bus
{
private:
	string Id;
	int YearOfManufacture;
	string Marka;
	string Model;
	int Travel;

public:

	Bus(const string& id, const int& yearOfManufacture, const string& marka, const string& model,
		int travel) :YearOfManufacture(yearOfManufacture), Id(id), Marka(marka), Model(model), Travel(travel){}

	Bus()
	{
		Id = "0";
		YearOfManufacture = 0;
		Marka = "0";
		Model = "0";
		Travel = 0;
	}
	void AddTrip(int num)
	{
		cout << "Выезды на автобусе прибавлены" << endl;
		Travel += num;
	}
	void Get_info()
	{
		cout << "Id: " << GetId() << endl;
		cout << "Год выпуска: " << GetYearOfManufacture() << endl;
		cout << "Марка: " << GetMarka() << endl;
		cout << "Модель: " << GetModel() << endl;
		cout << "Количество выездов: " << GetTravel() << endl;
	}
	string GetId() const { return Id; }
	int GetYearOfManufacture() const { return YearOfManufacture; }
	int GetTravel() const { return Travel; }
	string GetMarka() const { return Marka; }
	string GetModel() const { return Model; }
};

