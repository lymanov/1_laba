#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
void main()
{
	setlocale(0, "rus");
	map<int, string> mapp;
	int vvod = 1;
	int num;
	string people;
	while (true)
	{
		cout << "Осуществлять ввод? (Да = 1; Нет = 0)";
		cin >> vvod;
		if (vvod == 1)
		{
			cout << "Введите номер : ";
			cin >> num;
			cout << "Данные о посетители (Фамилия И.О.) : ";
			cin >> people;
			mapp[num] = people;
		}
		else break;
	}
	//cout << mapp[12];
	cin.get();
	cin.get();
}