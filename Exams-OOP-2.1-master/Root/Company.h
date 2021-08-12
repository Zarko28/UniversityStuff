#pragma once
#include <string>
#include "Technology.h"
#include "iostream"
#include "stdafx.h"

using namespace std;

class Company : public Technology {    /* класс компании, производный от технологий */
private:
	string NameOfCom;   /* название компании */
	string TechnologyList[6];   /* список технологий */
	string date;   /* даты */
	int LicensePrice;   /* цена лицензии */
public:
	Company(string m, string j, int y) {   /* конструктор */
		NameOfCom = m;
		date = j;
		LicensePrice = y;
	}
	void calculation(string TechnologyList[6]) {   /* функция для вычисления времени и средств */
		int RandTime = 0, RandMoney = 0, AverageTime = 0, AverageMoney = 0;
		for (int i=0;i<4;i++) {
			RandTime = rand() % 24;   /* рандомное значение времени */
			RandMoney = rand() % 1000 + 100;   /* рандомное значение средств */
			AverageTime += RandTime;
			AverageMoney += RandMoney;
		}
		AverageMoney += LicensePrice;   /* добавляем к сумме лицензию */
		cout << "Название: " << NameOfCom << endl;
		cout << "Общие расходы компании: " << AverageMoney << endl;
		cout << "Время: " << AverageTime << endl;
		cout << "Список технологий: " << endl;
		for (int i=0;i<4;i++) {   /* вывод списка технологий */
			cout << i + 1 << " " << TechnologyList[i] << endl;
		}
	}
	~Company() {   /* деструктор */
		cout << "Destroyed" << endl;
	}
};