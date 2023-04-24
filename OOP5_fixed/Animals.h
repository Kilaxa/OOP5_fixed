#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	string voice()
	{
		return "Silence";
	}
	~Animal()
	{
		cout << "~Animal()" << endl;
	}
};

class Cat : public Animal
{
public:
	int* tmp;
	Cat()
	{
		tmp = new int[8];
	}
	string voice()
	{
		return "Meow";
	}
	~Cat()
	{
		cout << "~Cat()" << endl;
		delete[] tmp;
	}
};

class AnimalCorrect
{
public:
	virtual string voice()
	{
		return "Silence";
	}
	virtual ~AnimalCorrect()
	{
		cout << "~Animal" << endl;
	}
};

class CatCorrect : public AnimalCorrect
{
public:
	int* tmp;
	CatCorrect()
	{
		tmp = new int[8];
	}
	string voice() override
	{
		return "Meow";
	}
	~CatCorrect() override
	{
		cout << "~Cat()" << endl;
		delete[] tmp;
	}
};
