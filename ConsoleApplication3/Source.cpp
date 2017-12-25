#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <string>
#include <vector>
using namespace std;

void main()
{
start:
	system("cls");
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "Введите номер задания от 1 до 5 : ";
	cin >> nz;

	switch (nz)
	{

	case 1:

	{
		system("cls");
		float a;
		a = 2;

		while (a < 2.8)
		{
			a = a + 0.1;
			cout << a << endl;
		}
		cout << "------------------------------------------------------------------" << endl;
		system("pause");
		goto start;
		break;
	}

	case 2:

	{
		system("cls");
		int p;
		cout << "Введите цену  одного килограмма конфет : ";
		cin >> p;
		for (int i = 1; i <= 20; i++)
		{
			int b = p*i*0.1;
			cout << i << "  грамм конфет стоят: " << b << " тенге" << endl;
		}

		system("pause");
		goto start;
		break;
	}


	case 3:

	{
		system("cls");
		int upr;
		cin >> upr;

		switch (upr)
		{
		case 1:
		{
			system("cls");
			cout << "Найти сумму всех целых чисел от 100 до 500" << endl;
			int  sum, i;
			sum = 100;
			for (i = 100; i <= 500; i++)
			{
				sum = sum + 1;
				cout << sum << endl;
			}
			system("pause");
			goto start;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "Найти сумму всех целых чисел от a до 500 (значение a вводится с клавиатуры; a <= 500)" << endl;
			int i, a;
			cout << "Введите a: ";
			cin >> a;
			for (i = a; i <= 500; i++)
			{
				cout << i << endl;
			}
			system("pause");
			goto start;
			break;
		}
		case 3:
		{
		podz:
			system("cls");
			cout << "Найти сумму всех целых чисел от –10 до b(значение b вводится с клавиатуры; b >= 10)" << endl;
			int i, b, s;
			s = 0;
			cout << "Введите b: ";
			cin >> b;
			if (b >= 10)
			{
				for (i = -10; i = b; i++)
				{
					s = s + 1;
					cout << s << endl;
				}

			}
			else
			{
				cout << "b < 10 повторите попытку " << endl;
				system("pause");
				goto podz;
			}
			system("pause");
			goto start;
			break;

		}
		case 4:
		{
			/* сумму всех целых чисел от a до b (значения a и b вводятся с клавиатуры; b >= a).*/
			int a, b;
			cout << "Введите a: ";
			cin >> a;
			cout << "Введите b: ";
			cin >> b;
			for (int i = a; i >= b; i++)
			{
				cout << i << endl;
			}
			system("pause");
			goto start;
			break;
		}
		default:
			cout << "      !!! Введенного задания не существует !!! " << endl;
			cout << " *** Нажмите ENTER что бы вернуться к выбору задания *** " << endl;
			system("pause");
			goto start;
			break;
		}

		system("pause");
		goto start;
		break;
	}

	case 4:

	{
		system("cls");
		int B = 50;
		int N = 0;
		int way = 0;
		int distance = 0;
		int segment = 12;

		way += B;
		distance += B;

		way += B / 2;
		distance = B / 2;

		cout << "Количество этапов(сколько раз он передумал)?\n";
		cin >> N;
		for (size_t i = 1; i < N; i++)
		{
			if (i % 3 == 0 | i == 1) {
				segment += i;
				way += segment;
				distance += segment;
			}
			if (i % 2 == 0) {
				segment += i;
				way += segment;
				distance -= segment;
			}
		}
		cout << "Всего прошел за " << N << " этапов: " << way << " км\n";
		cout << "После " << N << " этапов, находится на расстоянии " << distance << " км от дома\n";
		system("pause");
		goto start;
		break;
	}


	case 5:

	{
		system("cls");
		int a[100];
		int i, n, c, k, j;
		k = 1;
		cout << "Сколько n = ";
		cin >> n;
		cout << "Введите последовательность = " << '\n';
		for (i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (i = 1; i <= n; i++) {
			cout << a[i] << "   ";
		}
		cout << '\n';


		for (int j = 0; j < n; j++)
		{
			int i;
			for (i = 2; i <= sqrt((double)(a[j])); i++)
			{
				if (a[j] % i == 0) break;
			}
			if (i > sqrt((double)(a[j])));
		}
		system("pause");
		goto start;
		break;
	}



	default:
		system("cls");
		cout << "      !!! Введенного задания не существует !!! " << endl;
		cout << " *** Нажмите ENTER что бы вернуться к выбору задания *** " << endl;
		system("pause");
		goto start;
		break;
	}
}