/*
Write a program to receive marks of physics, chemistry & maths from user
& check its eligibility for course if
a) Marks of physics > 40
b) Marks of chemistry > 50
c) Marks of math’s > 60
d) Total of physics & math’s marks > 150
or
e) Total of three subjects marks > 200
*/

#define SUBJECT_COUNT 3

#include <iostream>

using namespace std;

int main() {
	string subject[] = { "physics", "chemistry", "maths" };
	int minMark[] = { 40, 50, 60 };
	int mark[SUBJECT_COUNT];

	// reading values
	for(int i = 0; i < SUBJECT_COUNT; ++i)
		do {
			cout << "Insert " << subject[i] << " mark: ";
			cin >> mark[i];
			cin.clear();
			cin.ignore(256, '\n');
		} while (cin.fail() || mark[i] <= 0);

	// eligibility of single marks
	for(int i = 0; i < SUBJECT_COUNT; ++i)
		if(mark[i] <= minMark[i])
			cout << "The " << subject[i] << " mark is not eligible." << endl;

	// condition d
	if(mark[0] + mark[2] <= 150)
		cout << "Total of physics and math's marks is not eligible." << endl;

	// the condition e is unnecessary since it's a subcase of condition d
}
