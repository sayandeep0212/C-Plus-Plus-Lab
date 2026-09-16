#include <iostream>

class Product {
private:
	static int objectCount;

public:
	Product() {
		++objectCount;
	}

	static int getObjectCount() {
		return objectCount;
	}
};

int Product::objectCount = 0;

int main() {
	Product first;
	Product second;
	Product third;

	std::cout << "Total objects created: "
			  << Product::getObjectCount() << std::endl;

	return 0;
}