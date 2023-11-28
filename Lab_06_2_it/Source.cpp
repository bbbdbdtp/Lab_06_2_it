#include <iostream>
#include <iomanip>

using namespace std;

void fillArray(int a[], int size) {
	cout << "Enter " << size << " elements for the array:\n";
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
}

void printArray(const int a[], int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int average(const int a[], int size) {
	int sum = 0;
	int rep = 0;
	for (int i = 1; i < size; i += 1) {
		if (a[i] % 2 != 0) {
			sum += a[i];
			++rep;
		}
	}
	int sum2 = (sum / rep);
	return sum2;
}

int main() {
	int size;

	cout << "Enter the size of the array: ";
	cin >> size;

	if (size <= 0) {
		cerr << "Invalid array size\n";
		return 1;
	}

	int* a = new int[size];

	fillArray(a, size);
	printArray(a, size);

	int result = average(a, size);
	cout << "average: " << result << endl;

	delete[] a;

	return 0;
}