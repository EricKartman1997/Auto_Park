#pragma once
#include <iostream>
#include <fstream>
#include "Cleaner.h"
#include "Driver.h"
#include "Security.h"
#include <string>
using namespace std;

void record(string path, Cleaner newCleaner);
void record(string path, Driver newDriver);
void record(string path, Security newSecurity);
void reading(string path, Cleaner& newCleaner);
void reading(string path, Driver& newDriver);
void reading(string path, Security& newSecurity);




