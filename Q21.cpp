#include <iostream>
using namespace std;

class Numbers {
private:
	int numbers[5];

public:
	void readNumbers() {
		cout << "Enter 5 numbers: ";
		for (int i = 0; i < 5; i++) {
			cin >> numbers[i];
		}
	}

	int findSum() {
		int sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += numbers[i];
		}
		return sum;
	}
};

int main() {
	Numbers numbers;
	numbers.readNumbers();

	cout << "Sum = " << numbers.findSum() << endl;
	return 0;
}