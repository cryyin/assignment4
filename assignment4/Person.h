#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
	
public:
	Person();
	Person(string name,string gender);
	~Person();
private:
	string name;
	string gender;
};

