#pragma once
#include <string> 
#include <sstream>
using namespace std;

class Money
{
	long hryvnia;
	unsigned char kopiyku;
public:
	double MoneyToDoble();
	void DoubleToMoney(double);
	bool SetHryvnia(long);
	bool SetKopiyku(unsigned char);
	long GetHryvnia() const { return hryvnia; }
	unsigned char GetKopiyku() const { return kopiyku; }
	bool Init(long, unsigned char);
	void Read();
	void Display();
	string toString() const;
	bool RemoveSuma(double);
	bool RiseSumma(double);
	int CompareSumma(double);
};

