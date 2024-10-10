#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Cleaner.h"
#include "Driver.h"
#include "Security.h"
#include "Employee.h"
using namespace std;

void record(string path, Cleaner newCleaner);
void record(string path, Driver newDriver);
void record(string path, Security newSecurity);
void reading(string path, Cleaner& newCleaner);
void reading(string path, Driver& newDriver);
void reading(string path, Security& newSecurity);
void saveDriverToFile(const Driver& driver);
void saveSecurityToFile(const Security& security);
void saveCleanerToFile(const Cleaner& cleaner);
void readDriversFromFile();




