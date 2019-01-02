#include<iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
	setlocale(LC_ALL, "RU");
	cout << "|\t �����: ���������� �����\t\t|\n";
	cout << "|\t Calculation of compound interest (CCI)\t|\n";
	cout << "|\t ������ ������� ���������\t\t|\n";
	cout << "|\t version 3.4 �� 02 ������ 2019 ����\t|\n\n";
	
	cout << "#\t �������� ������\n";
	cout << "#\t ������ ������ 410015046945437\n\n";

	float N; //�������� ���������� ��� ����� �����������
	double Y, X, SUM;
	const char PERCENT = '%'; //�������� ���������� ��� ������ ����� %
	int i;
		
	cout << "�������� ������ ������: " << endl;
	cin >> N;
	
	cout << "������� ��������� ����� ������: " << endl;
	cin >> X;

	cout << "������� �������� �����: " << endl;
	cin >> SUM;

	system("cls");

	Y = (float)(pow((SUM/X),(1/N))-1)*100; //��������� ����������� ������� �� ������
		
	cout << "\n��� ������� �� ������ �� ��������� ������, " << N << " " << "���� (�������, ���) ����������" << " " << fixed << setprecision(2) << Y << PERCENT << '\n' << '\n';
	
	for (i = 1; i < N + 1; i++)
	{
		X = X + X * Y/100;
		cout << "����� " << i << " ���� (�������, ���) � ��� ����� \t|" << fixed << setprecision(2) <<" " << X << "\n";
	}

	system("pause");
	
}