#include <iostream>

class SharedValue {
private:
	static int commonValue;

public:
	static void displayCommonValue() {
		std::cout << "Common value shared by all objects: "
				  << commonValue << std::endl;
	}
};

int SharedValue::commonValue = 100;

int main() {
	SharedValue first;
	SharedValue second;

	first.displayCommonValue();
	second.displayCommonValue();

	return 0;
}