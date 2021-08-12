#pragma once
#include "stdafx.h"
#include <string>
#include "iostream"

using namespace std;

class Technology {   /* базовый абстрактный класс */
public:   /* объ€вление виртуальных функций дл€ производного класса */
	string TechnologyNames[10];   /* названи€ технологий */
	int price;
	int money;
	int time;
	virtual void calculation(string TechnologyList[]) = 0;   /* виртуальна€ функци€ дл€ вычислени€ затрачиваемых ресурсов */
};