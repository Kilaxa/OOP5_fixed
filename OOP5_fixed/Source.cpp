// ƒл€ изучени€ умных указателей необходимо создать объекты, управл€емые с помощью unique_ptr и shared_ptr (с помощью make_unique и make_shared и/или без них), помещать их в переменные, передавать их в функции, возвращать их из функций и демонстрировать, как они вли€ют на врем€ жизни объекта, которым управл€ют.
#include "Animals.h"
#include <vector>

void method(Animal* who)
{
	who->talk();
	//delete who; - ошибка
}

void method(std::shared_ptr<Animal> who)
{
	who->talk();
	//delete who; - ошибка
}

std::unique_ptr<Animal> makeCat()
{
	//	Wrong
	//return new Cat();
	return std::make_unique<Cat>();
}

int main()
{
	std::unique_ptr<Animal> cat = std::make_unique<Cat>();
	std::shared_ptr<Animal> dog = std::make_unique<Dog>();
	//	Wrong
	//method(cat);
	//	Correct
	method(cat.get());
	{
		//	Wrong
		//std::unique_ptr<Animal> tmp_cat = cat;
		auto tmp_cat = makeCat();
		std::shared_ptr<Animal> tmp_dog = dog;
	}
	//delete *tmp_cat, tmp_dog(но не *tmp_dog)
	method(dog);
	return 0;
}
//delete *cat, *dog
