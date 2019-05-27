// kursova.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void MenuOptions()
{
	cout << "1 ~ \n";
	cout << "2 ~ \n";
	cout << "0 ~ Exit\n";
	cout << "Make choice:";
}
int main()
{
	int choice;
	do
	{
		MenuOptions();
		cin >> choice;
		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		}
	} while (choice != 0);

}
