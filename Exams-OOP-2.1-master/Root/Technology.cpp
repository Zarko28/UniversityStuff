#pragma once
#include "stdafx.h"
#include <string>
#include "iostream"

using namespace std;

class Technology {   /* ������� ����������� ����� */
public:   /* ���������� ����������� ������� ��� ������������ ������ */
	string TechnologyNames[10];   /* �������� ���������� */
	int price;
	int money;
	int time;
	virtual void calculation(string TechnologyList[]) = 0;   /* ����������� ������� ��� ���������� ������������� �������� */
};