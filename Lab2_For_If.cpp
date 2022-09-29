#include <iostream>
using namespace std;


int fac(long long x);

void Number_1();
void Number_2();
void Number_3();

int main()
{
	setlocale(LC_ALL, "Rus");
	while (true)
	{
		cout << "Что Вы хотите выполнить? \n";
		cout << " 1. Вывести числовой треугольник: \n 2. Найти биномиальные коэффициенты: \n 3. Вычислить среднее арифметическое: \n 4. Выйти из программы\n";
		int Ex = 0;
		cin >> Ex;
			switch (Ex)
			{
			case 1:
				{Number_1(); break; }
			case 2:
				{Number_2(); break; }
			case 3:
				{Number_3(); break; }
			case 4:
				return 0;
			}
			cout << endl;
	}
}

void Number_1()
{
//	cout << "You in proga#1!" << endl;
	int step,n,i;
	cout << "Введите 'n'\n";
	cin >> n;
	for (i = 0; i <= n; i++)
	{
		step = 0;
		while (step <= i)
		{
			cout << step;
			step++;
		}
		cout << endl;
	}
//	cout << "You went out proga#1!" << endl;
}

void Number_2()
{
//	cout << "You in proga#2!" << endl;
	cout << "Введите n:";
	int n = 0;
	cin >> n;
	//c_n^k = c_n^{k-1} * (n-(k-1))/k
	long double C_n_k = 1;
	for (int k = 1; k <= n; k++)
	{
		cout << "C_n^" << k << " = " << C_n_k << endl;
		C_n_k = C_n_k * (n - k + 1) / (k);
	}
	cout << "C_n^" << n + 1 << " = " << C_n_k << endl;
//	cout << "You went out proga#2!" << endl;
}

void Number_3()
{
//	cout << "You in proga#3!" << endl;
	int ch = 0, sum = 0, codex = 0, q = 0, N = 0;
	while (true)
	{
		cout << "Введите число(при вводе подряд двух нулей, Вы закончите ввод и будет выведен результат!)\n";
		cin >> codex;
		if (codex == 0 && q == 0) { q++; ch = codex; }
		else if (codex == 0 && q == 1 && ch == codex && N != 0) { cout << "Результат = " << double(sum) / double(N) << endl; break; }
		else if (codex == 0 && q == 1 && ch == codex && N == 0) { cout << "Пусто..." << endl; break; }
		else { sum += codex; N++; ch = codex; }
	}
//	cout << "You went out proga#3!" << endl;
}