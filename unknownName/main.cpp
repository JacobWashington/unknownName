#include <iostream>
using namespace std;

int sum(const int& n1, const int& n2) {
	return n1 + n2;
}

void displayArray(const int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << '\n';
	}
	cout << "array address: " << array;
}

int main() {
	const double PI = 3.141529;
	int num1 = 4;
	int num2 = 6;
	cout << "num2 address: " << & num2 << '\n';

	cout << "Sum: " << sum(num1, num2) << '\n';

	int array[5] = { 1,2,3,4,5 }; // why is array of type integer?

	displayArray(array, 5);

	return 0;
}