#include <iostream>
#include "grade.h"
namespace print {
	void grade(int grades[], int size) {
		std::cout << "Grades:\n";
		for (int i = 0; i < size; i++) {
			std::cout << grades[i] << std::endl;
		}
	}
}
namespace max {
	int grade(int grades[]) {
		return grades[29];
	}
}
namespace min {
	int grade(int grades[]) {
		return grades[0];
	}
}
namespace avg {
	double grade(int grades[]) {
		double sum = 0, average = 0;
		for (int i = 0; i < 30; i++) {
			sum = sum + grades[i];
		}
		average = sum / 30;
		return average;
	}
}
namespace aboveAvg {
	void grade(int grades[], int avg) {
		int aboveAvg[12];
		int aboveAvgIndex = 0;
		for (int i = 0; i < 30; i++) {
			if (grades[i] >= avg) {
				aboveAvg[aboveAvgIndex] = grades[i];
				aboveAvgIndex++;
			}
		}
		std::cout << "These grades are above average:\n";
		print::grade(aboveAvg, std::size(aboveAvg));
	}
}
namespace compare {
	void grade(int grades[], int avg) {
		int grade1, grade2,diff;
		std::cout << "Please input grade 1:\n";
		std::cin >> grade1;
		std::cout << "Please input grade 2:\n";
		std::cin >> grade2;
		std::cout << "Grade 1 is: " << grade1 << std::endl;
		std::cout << "Grade 2 is: " << grade2 << std::endl;
		std::cout << "Grade average is: " << avg << std::endl;

		if (grade1 > grade2) {
			diff = grade1 - grade2;
			std::cout << "There is a " << diff << " point difference between grade 1 and grade 2.\n";
			std::cout << "Grade 1 is higher than grade 2.\n";
		}
		else if (grade1 < grade2){
			diff = grade2 - grade1;
			std::cout << "There is a " << diff << " point difference between grade 2 and grade 1.\n";
			std::cout << "Grade 2 is higher than grade 1.\n";
		}
		else {
			std::cout << "Grade 2 and grade 1 are equal.\n";
		}

		if (grade1 > avg) {
			diff = grade1 - avg;
			std::cout << "Grade 1 is higher than the average grade by " << diff << " points.\n";
		}
		else if (grade1 < avg) {
			diff = avg - grade1;
			std::cout << "Grade 1 is lower than the average grade by " << diff << " points.\n";
		}
		else {
			std::cout << "Grade 1 is eqal to the average.\n";
		}

		if (grade2 > avg) {
			diff = grade2 - avg;
			std::cout << "Grade 2 is higher than the average grade by " << diff << " points.\n";
		}
		else if (grade2 < avg) {
			diff = avg - grade2;
			std::cout << "Grade 2 is lower than the average grade by " << diff << " points.\n";
		}
		else {
			std::cout << "Grade  is eqal to the average.\n";
		}
	}
}
namespace sort {
	void grade(int grades[]) {
		int minIndex, minValue, temp;
		for (int i = 0; i < 29; i++) {

			minIndex = i;
			minValue = grades[i];

			for (int x = i + 1; x < 30; x++) {
				if (grades[x] < minValue) {
					minValue = grades[x];
					minIndex = x;
				}
			}
			temp = grades[i];
			grades[i] = grades[minIndex];
			grades[minIndex] = temp;

		}

	}
}