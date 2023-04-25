#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Constructor --- Animal" << endl;
	}

	virtual void talk()
	{
		cout << endl;
	}

	virtual ~Animal()
	{
		cout << "Destructor --- Animal" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat()
	{
		cout << "Constructor --- Cat" << endl;
	}

	void talk() override
	{
		cout << "Meow meow" << endl;
	}

	~Cat() override
	{
		cout << "Destructor --- Cat" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog()
	{
		cout << "Constructor --- Dog" << endl;
	}

	void talk() override
	{
		cout << "Bow-wow" << endl;
	}

	~Dog() override
	{
		cout << "Destructor --- Dog" << endl;
	}
};
