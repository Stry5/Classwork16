// Classwork16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "grade.h"
using namespace std;





int main() {

	int grades[] = {21,39,82,75,92,36,45,20,83,65,02,36,45,77,62,30,45,60,83,26,50,82,30,23,41,23,15,12,35,92};
	int average = avg::grade(grades);
	
	sort::grade(grades);
	
	bool quit = false;

	while (quit == false) {
		int input;
		cout << "Main Menu:\n";
		cout << "1 = Get max grade\n";
		cout << "2 = Get min grade\n";
		cout << "3 = Get average grade\n";
		cout << "4 = Get above average grades\n";
		cout << "5 = Compare grades\n";
		cout << "6 = Print grades\n";
		cout << "7 = Sort grades\n";
		cout << "0 = Quit\n";

		cin >> input;

		switch (input) {
		case 0:
			quit = true;
			break;
		case 1:
			cout << max::grade(grades) << endl;
			break;
		case 2:
			cout << min::grade(grades) << endl;
			break;
		case 3:
			cout << avg::grade(grades) << endl;
			break;
		case 4:
			aboveAvg::grade(grades,average);
			break;
		case 5:
			compare::grade(grades,average);
			break;
		case 6:
			print::grade(grades,size(grades));
			break;
		case 7:
			sort::grade(grades);
			break;
		default:
			break;
		}
	}

}
