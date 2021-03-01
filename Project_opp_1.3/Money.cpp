#include "Money.h"
#include <iostream>
#include<cmath>

bool Money::SetHryvnia(long value)
{
	if (value >= 0)
	{
		hryvnia = value;
		return true;
	}
	else
	{
		return false;
	}
}
bool Money::SetKopiyku(unsigned char value)
{
	if (value >= 0 && value < 100)
	{
		kopiyku = value;
		return true;
	}
	else
	{
		return false;
	}
}
bool Money::Init(long hryvnia, unsigned char kopiyku)
{
	return (SetHryvnia(hryvnia) && SetKopiyku(kopiyku));
}
void Money::Read()
{
	double value;
	cout << " Summa = "; cin >> value;
	do
	{
		hryvnia = floor(value);
		kopiyku = round((value - hryvnia) * 100);
	} while (!Init(hryvnia, kopiyku));


}
void Money::Display()
{
	cout << " Summa : " << toString() <<endl;

}
string Money::toString() const
{
	std::string str = std::to_string(hryvnia) + "," + std::to_string(kopiyku) + "  hrn ";
	return str;
}
double Money::MoneyToDoble()
{
	return (double)hryvnia + kopiyku / 100.0;
}
void Money::DoubleToMoney(double value)
{
	hryvnia = trunc(value);
	kopiyku = trunc(abs((value - hryvnia)) * 100);
}
bool Money::RemoveSuma(double value)
{
	double curren_value = MoneyToDoble();
	bool isCorrect = false;
	if (curren_value >= value)
	{
		DoubleToMoney(curren_value - value);
		isCorrect =  true;
	}
	return isCorrect;
}
bool Money::RiseSumma(double value)
{
	double curren_value = MoneyToDoble();
	bool isCorrect = false;
	if (value >= 0)
	{
		DoubleToMoney(curren_value * value);
		isCorrect = true;
	}
	return isCorrect;
}
int Money::CompareSumma(double value)
{
	double curren_value = MoneyToDoble();
	int result = 0;
	if (curren_value > value)
	{
		return result = 1;
	}
	else if (curren_value < value)
	{
		return result = -1;
	}
	else
	{
		return result = 0;
	}
}
