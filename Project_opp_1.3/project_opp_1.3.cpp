#include <iostream>
#include "Money.h"
using namespace std;

int main()
{
	Money m;
	m.Read();
	m.Display();
	double remove_suma;
	cout << "Enter remove suma "; cin >> remove_suma;
	m.RemoveSuma(remove_suma);
	m.Display();
	double rise_value;
	cout << "Enter rise value "; cin >> rise_value;
	m.RiseSumma(rise_value);
	m.Display();
	double compare_summa;
	cout << "Enter compare summa "; cin >> compare_summa;
	if (m.CompareSumma(compare_summa) == 1)
	{
		cout << "Current value > comparative summa " << endl;
	}
	else if(m.CompareSumma(compare_summa) == -1)
	{
		cout << "Current value < comparative summa " << endl;
	}
	else
	{
		cout << "Current value = comparative summa " << endl;
	}
	
	return 0;
}