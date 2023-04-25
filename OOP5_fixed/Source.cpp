// Для изучения умных указателей необходимо создать объекты, управляемые с помощью unique_ptr и shared_ptr (с помощью make_unique и make_shared и/или без них), помещать их в переменные, передавать их в функции, возвращать их из функций и демонстрировать, как они влияют на время жизни объекта, которым управляют.
#include "Animals.h"
#include <vector>
using namespace std;

void method(Animal* who)
{
	who->talk();
	// delete who; - ошибка
}

void method(shared_ptr<Animal> who)
{
	who->talk();
	// delete who; - ошибка
}

unique_ptr<Animal> makeCat()
{
	// Неправильно будет сделать так:
	// return new Cat();
	return make_unique<Cat>();
}

int main()
{
	unique_ptr<Animal> cat = make_unique<Cat>();
	shared_ptr<Animal> dog = make_unique<Dog>();
	cout << "\n";
	// Неверно:
	// method(cat);
	// Верно:
	method(cat.get());
	{
		// Неверно:
		// unique_ptr<Animal> tmp_cat = cat;
		auto tmp_cat = makeCat();
		shared_ptr<Animal> tmp_dog = dog;
	}
	cout << "\n";
	// delete *tmp_cat, tmp_dog(но не *tmp_dog)
	method(dog);
	cout << "\n";
	return 0;
}
// delete *cat, *dog
