#include<iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
	setlocale(LC_ALL, "RU");
	cout << "|\t Автор: Ахметзянов Ренат\t\t|\n";
	cout << "|\t Calculation of compound interest (CCI)\t|\n";
	cout << "|\t Расчет сложных процентов\t\t|\n";
	cout << "|\t version 3.4 от 02 января 2019 года\t|\n\n";
	
	cout << "#\t ПОДДЕРЖИ ПРОЕКТ\n";
	cout << "#\t Янлекс Деньги 410015046945437\n\n";

	float N; //назначим переменные для целых показателей
	double Y, X, SUM;
	const char PERCENT = '%'; //назначим переменную для вывода знака %
	int i;
		
	cout << "Введеите период вклада: " << endl;
	cin >> N;
	
	cout << "Введите начальную сумму вклада: " << endl;
	cin >> X;

	cout << "Введите итоговую сумму: " << endl;
	cin >> SUM;

	system("cls");

	Y = (float)(pow((SUM/X),(1/N))-1)*100; //вычисляем ежеждневный процент по вкладу
		
	cout << "\nВаш процент по вкладу за указанный период, " << N << " " << "дней (месяцев, лет) составляет" << " " << fixed << setprecision(2) << Y << PERCENT << '\n' << '\n';
	
	for (i = 1; i < N + 1; i++)
	{
		X = X + X * Y/100;
		cout << "Через " << i << " дней (месяцев, лет) у вас будет \t|" << fixed << setprecision(2) <<" " << X << "\n";
	}

	system("pause");
	
}