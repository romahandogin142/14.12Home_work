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
	cout << "������� ����� ������� �� 1 �� 5 : ";
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
		cout << "������� ����  ������ ���������� ������ : ";
		cin >> p;
		for (int i = 1; i <= 20; i++)
		{
			int b = p*i*0.1;
			cout << i << "  ����� ������ �����: " << b << " �����" << endl;
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
			cout << "����� ����� ���� ����� ����� �� 100 �� 500" << endl;
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
			cout << "����� ����� ���� ����� ����� �� a �� 500 (�������� a �������� � ����������; a <= 500)" << endl;
			int i, a;
			cout << "������� a: ";
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
			cout << "����� ����� ���� ����� ����� �� �10 �� b(�������� b �������� � ����������; b >= 10)" << endl;
			int i, b, s;
			s = 0;
			cout << "������� b: ";
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
				cout << "b < 10 ��������� ������� " << endl;
				system("pause");
				goto podz;
			}
			system("pause");
			goto start;
			break;

		}
		case 4:
		{
			/* ����� ���� ����� ����� �� a �� b (�������� a � b �������� � ����������; b >= a).*/
			int a, b;
			cout << "������� a: ";
			cin >> a;
			cout << "������� b: ";
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
			cout << "      !!! ���������� ������� �� ���������� !!! " << endl;
			cout << " *** ������� ENTER ��� �� ��������� � ������ ������� *** " << endl;
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

		cout << "���������� ������(������� ��� �� ���������)?\n";
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
		cout << "����� ������ �� " << N << " ������: " << way << " ��\n";
		cout << "����� " << N << " ������, ��������� �� ���������� " << distance << " �� �� ����\n";
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
		cout << "������� n = ";
		cin >> n;
		cout << "������� ������������������ = " << '\n';
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
		cout << "      !!! ���������� ������� �� ���������� !!! " << endl;
		cout << " *** ������� ENTER ��� �� ��������� � ������ ������� *** " << endl;
		system("pause");
		goto start;
		break;
	}
}