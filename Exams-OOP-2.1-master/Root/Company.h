#pragma once
#include <string>
#include "Technology.h"
#include "iostream"
#include "stdafx.h"

using namespace std;

class Company : public Technology {    /* ����� ��������, ����������� �� ���������� */
private:
	string NameOfCom;   /* �������� �������� */
	string TechnologyList[6];   /* ������ ���������� */
	string date;   /* ���� */
	int LicensePrice;   /* ���� �������� */
public:
	Company(string m, string j, int y) {   /* ����������� */
		NameOfCom = m;
		date = j;
		LicensePrice = y;
	}
	void calculation(string TechnologyList[6]) {   /* ������� ��� ���������� ������� � ������� */
		int RandTime = 0, RandMoney = 0, AverageTime = 0, AverageMoney = 0;
		for (int i=0;i<4;i++) {
			RandTime = rand() % 24;   /* ��������� �������� ������� */
			RandMoney = rand() % 1000 + 100;   /* ��������� �������� ������� */
			AverageTime += RandTime;
			AverageMoney += RandMoney;
		}
		AverageMoney += LicensePrice;   /* ��������� � ����� �������� */
		cout << "��������: " << NameOfCom << endl;
		cout << "����� ������� ��������: " << AverageMoney << endl;
		cout << "�����: " << AverageTime << endl;
		cout << "������ ����������: " << endl;
		for (int i=0;i<4;i++) {   /* ����� ������ ���������� */
			cout << i + 1 << " " << TechnologyList[i] << endl;
		}
	}
	~Company() {   /* ���������� */
		cout << "Destroyed" << endl;
	}
};