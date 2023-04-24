#include <vector>
#include "Animals.h"
using namespace std;

int main() 
{
	// � ������1 �������� ������ ���������� �����2, ������� ��������� � ���� �� ������ ��� �������������, � ������-������� �����2 �������������: ��� ���������� ��� ������ ������1 � ������-�������?
	// ����� ������� ���������� � ������1 ����� ������2 ������ ������, � �� �������.
	{
		Animal animal;
		Cat cat;
		cout << cat.doVoice() << endl;
	}
	cout << "\n\n\n";
	// � ������1 �������� ������ ���������� �����2, ������� ��������� � ���� �� ������ ��� �����������, � ������-������� �����2 �������������: ��� ���������� ��� ������ ������1 � ������-�������?
	// � ������ ������ ����� ������� ���������� � ������1 ����� ������ ��� ������ �������.
	{
		AnimalCorrect animal;
		CatCorrect cat;
		cout << cat.doVoice() << endl;
	}
	cout << "\n\n\n";
	// � ������� ������ �������� ����� �������������, � � ������-������� �������� ����� � ����� �� ������: ����� ����� ����� ���������� ��� ��������� � ������� ����� ��������� �� ������� �����, ����� ��������� �� �����-�������?
	// � ������ ������, ��������� ����� ������ ������, ��� �� ���� ����� ������������ � ���� �������� �� ����, �� ������ ������ ��������� ��� ���������������� � ������-������� �����, ��� �����.
	{
		Animal *animal = new Cat;
		Cat* cat = new Cat;

		cout << animal->doSomething() << endl;
		cout << cat->doSomething() << endl;
		delete animal;
		delete cat;
	}
	cout << "\n\n\n";
	// � ������� ������ �������� ����� �����������, � � ������-������� �������� ����� � ����� �� ������: ����� ����� ����� ���������� ��� ��������� � ������� ����� ��������� �� ������� �����, ����� ��������� �� �����-�������?
	// ����� � ����� ������� ��� ��������� ����� ������ �������.
	{
		AnimalCorrect* animal = new CatCorrect();
		CatCorrect* cat = new CatCorrect;

		cout << animal->doSomething() << endl;
		cout << cat->doSomething() << endl;
		delete animal;
		delete cat;
	}

	return 0;
}
