#pragma once
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "Cleaner.h"
#include "Driver.h"
#include "Security.h"
#include "FreightBus.h"
#include "TouristBus.h"
#include "ShuttleBus.h"
#include "Bus.h"
#include "Employee.h"
using namespace std;

void print_centered(const string& text);
//���������
//���������� � ����
void saveDriverToFile(const Driver& driver);
void saveSecurityToFile(const Security& security);
void saveCleanerToFile(const Cleaner& cleaner);
//������ �� �����
void readDriversFromFile();
void readSecuritiesFromFile();
void readCleanersFromFile();
//��������
void DeletDriverFile(const string& Drivername);
void DeletSecurityFile(const string& Securityname);
void DeletCleanerFile(const string& Cleanername);
//�������
void AddKillometrsDriver(const string& Drivername, float AddKilometrage);
void AddSalaryDriver(const string& Drivername);
void AddCoffeSecurity(const string& Securityname, int AddCoffe);
void AddSalarySecurity(const string& Securityname);
void AddDonutCleaner(const string& Cleanername, int AddDonut);
void AddSalaryCleaner(const string& Cleanername);
//��������
//���������� � ����
void saveShuttleBusToFile(const ShuttleBus& obj);
void saveFreightBusToFile(const FreightBus& obj);
void saveTouristBusToFile(const TouristBus& obj);
//������ �� �����
void readShuttleBusFromFile();
void readFreightBusFromFile();
void readTouristBusFromFile();
//�������� �� �����
void DeletShuttleBusFile(string id_bus);
void DeletFreightBusFile(string id_bus);
void DeletTouristBusFile(string id_bus);
//�������
void AddTravelShuttleBus(string id_bus, int travel_bus);
void AddPassengersShuttleBus(string id_bus, int passengers_bus);
void AddTravelFreightBus(string id_bus, int travel_bus);
void AddCargoFreightBus(string id_bus, int cargo_bus);
void AddTravelTouristBus(string id_bus, int travel_bus);
void AddTicketPriceTouristBus(string id_bus, int ticketPrice_bus);





