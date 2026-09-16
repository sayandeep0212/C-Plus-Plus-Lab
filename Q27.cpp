#include <iostream>

class Number {
private:
	int value;

public:
	Number(int number) : value(number) {}

	friend int findLargest(const Number& first, const Number& second);
};

int findLargest(const Number& first, const Number& second) {
	return first.value > second.value ? first.value : second.value;
}

int main() {
	Number first(45);
	Number second(72);

	std::cout << "Largest value: " << findLargest(first, second) << std::endl;

	return 0;
}