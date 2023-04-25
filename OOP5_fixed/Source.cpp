// ��� �������� ����� ���������� ���������� ������� �������, ����������� � ������� unique_ptr � shared_ptr (� ������� make_unique � make_shared �/��� ��� ���), �������� �� � ����������, ���������� �� � �������, ���������� �� �� ������� � ���������������, ��� ��� ������ �� ����� ����� �������, ������� ���������.
#include "Animals.h"
#include <vector>
using namespace std;

void method(Animal* who)
{
	who->talk();
	// delete who; - ������
}

void method(shared_ptr<Animal> who)
{
	who->talk();
	// delete who; - ������
}

unique_ptr<Animal> makeCat()
{
	// ����������� ����� ������� ���:
	// return new Cat();
	return make_unique<Cat>();
}

int main()
{
	unique_ptr<Animal> cat = make_unique<Cat>();
	shared_ptr<Animal> dog = make_unique<Dog>();
	cout << "\n";
	// �������:
	// method(cat);
	// �����:
	method(cat.get());
	{
		// �������:
		// unique_ptr<Animal> tmp_cat = cat;
		auto tmp_cat = makeCat();
		shared_ptr<Animal> tmp_dog = dog;
	}
	cout << "\n";
	// delete *tmp_cat, tmp_dog(�� �� *tmp_dog)
	method(dog);
	cout << "\n";
	return 0;
}
// delete *cat, *dog
