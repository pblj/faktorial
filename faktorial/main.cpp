#include<iostream>
#include<cmath>
using namespace std;
//#define Faktorial;
//#define POW
#define taskASCII

void main() {

	setlocale(LC_ALL, "");

#ifdef Faktorial

	int number, i;
	unsigned long long previousValue = 0, result = 1;

	cout << "������� ����� ��� ������� ����������: "; cin >> number;

	for (i = 1; i <= number; i++) {

		result *= i;
		if (result < previousValue) //����� ������������ ������ ����� �������������
		{
			cout << "������� ������� ������� �����, ��������� ��������� �� ��������." << endl;
			result = 0;
			break;
		}
		previousValue = result;
	}

	cout << "���������: " << result;

#endif // Faktorial

#ifdef POW

	int  i, degree;
	double inputNumber, result;

	cout << "������� ����� ���������: "; cin >> inputNumber; cout << endl;
	cout << "������� �������: "; cin >> degree; cout << endl;
	result = inputNumber;

	for (i = 1; i < degree; i++) {
		result *= inputNumber;
	}

	cout << result;

#endif // POW

#ifdef taskASCII

	char ASCII[256];
	int ch = 0;
	for (int l = 0; l < 16; l++)
	{
	
		for (int i = 0; i < 16; i++)
		{
			ASCII[ch] = ch;
			cout  << ch << " = " << ASCII[ch] << "\t";
			ch++;
		}
		cout << endl;
	}


#endif // ASCII


}