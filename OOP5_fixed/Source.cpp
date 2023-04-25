// ��� �������� ����� ���������� ���������� ������� �������, ����������� � ������� unique_ptr � shared_ptr (� ������� make_unique � make_shared �/��� ��� ���), �������� �� � ����������, ���������� �� � �������, ���������� �� �� ������� � ���������������, ��� ��� ������ �� ����� ����� �������, ������� ���������.
#include "Animals.h"
#include <vector>

void method(Animal* who)
{
	who->talk();
	//delete who; - ������
}

void method(std::shared_ptr<Animal> who)
{
	who->talk();
	//delete who; - ������
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
	//delete *tmp_cat, tmp_dog(�� �� *tmp_dog)
	method(dog);
	return 0;
}
//delete *cat, *dog
