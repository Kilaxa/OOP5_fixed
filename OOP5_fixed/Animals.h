#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	virtual bool isA(const string& Name)
	{
		return Name == "Animal";
	}
	virtual string classname()
	{
		return "Animal";
	}
	virtual ~Animal() {}
};

class Cat : public Animal
{
public:
	bool isA(const string& Name) override
	{
		return Name == "Cat" || Animal::isA(Name);
	}

	string classname() override
	{
		return "Cat";
	}

	string catchMouse() {
		return "meeeow";
	}
	~Cat() override
	{

	}
};

class Kitty : public Cat
{
public:
	bool isA(const string& Name) override
	{
		return Name == "Kitty" || Cat::isA(Name);
	}

	string classname() override
	{
		return "Kitty";
	}
	~Kitty() override
	{

	}
};


class Dog : public Animal
{
public:
	bool isA(const string& Name) override
	{
		return Name == "Dog" || Animal::isA(Name);
	}

	string classname() override
	{
		return "Dog";
	}

	~Dog() override
	{

	}
};
