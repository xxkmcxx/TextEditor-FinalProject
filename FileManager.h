#pragma once
#include <iostream>
#include <fstream>
#include "MyMenu.h"

using namespace std;
class FileManager
{
private:
	// Constructors are made private because class methods are static.
	FileManager();
	~FileManager();
public:
	static void openFile();
	static void createFile();
	static void copyDocument();
	static void showMenu();
};

