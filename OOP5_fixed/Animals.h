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
	string voice()
	{
		return "Meow";
	}
	~Cat()
	{
		cout << "~Cat()" << endl;
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
	string voice() override
	{
		return "Meow";
	}
	~CatCorrect() override
	{
		cout << "~Cat()" << endl;
	}
};
