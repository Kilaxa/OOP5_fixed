// Базовый виртуальный метод string classname(), перекрыть его в потомках, проверить работу и показать, какие проблемы возникают при его использовании;
// Базовый виртуальный метод bool isA(string classname), перекрыть его в потомках и показать отличие от метода classname.
#include <vector>
#include "Animals.h"
using namespace std;

int main() 
{
	vector<Animal*> animals(5);
	animals[0] = new Cat();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Dog();
	animals[4] = new Kitty();
	cout << "With Classname:" << endl;
	for (auto ani : animals) 
	{
		if (ani->classname() == "Cat") 
		{
			Cat* tmp = static_cast<Cat*>(ani);
			cout << tmp->catchMouse() << endl;
		}
	}

	cout << "\nWith isA:" << endl;
	for (auto ani : animals) 
	{
		if (ani->isA("Cat")) 
		{
			Cat* tmp = static_cast<Cat*>(ani);
			cout << tmp->catchMouse() << endl;
		}
	}

	delete animals[4];
	delete animals[3];
	delete animals[2];
	delete animals[1];
	delete animals[0];
	return 0;
}
