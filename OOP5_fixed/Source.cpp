#include <vector>
#include "Animals.h"

int main() {
	std::vector<Animal*> animals(5);
	animals[0] = new Cat();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Dog();
	animals[4] = new MaineCoon();
	std::cout << "first try:" << std::endl;
	for (auto ani : animals) {
		if (ani->classname() == "Cat") {
			Cat* tmp = static_cast<Cat*>(ani);
			std::cout << tmp->catchMouse() << std::endl;
		}
	}
	std::cout << "second try:" << std::endl;
	for (auto ani : animals) {
		if (ani->isA("Cat")) {
			Cat* tmp = static_cast<Cat*>(ani);
			std::cout << tmp->catchMouse() << std::endl;
		}
	}

	delete animals[4];
	delete animals[3];
	delete animals[2];
	delete animals[1];
	delete animals[0];
	return 0;
}
