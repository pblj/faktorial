#include<iostream>
#include <iomanip> // для форматирования вывода
using namespace std;

//#define Faktorial;
//#define POW
//#define taskASCII
//#define FIBONACHY
//#define SIMPLE_SERIES
//#define PERFECT_SERIES
#define multiplication_table 


void main() {

	setlocale(LC_ALL, "");

#ifdef Faktorial

	int number, i;
	unsigned long long previousValue = 0, result = 1;

	cout << "Введите число для расчета факториала: "; cin >> number;

	for (i = 1; i <= number; i++) {

		result *= i;
		if (result < previousValue) //пошло переполнение расчет можно останавливать
		{
			cout << "Введено слишком большое число, вычислить факториал не возможно." << endl;
			result = 0;
			break;
		}
		previousValue = result;
	}

	cout << "Результат: " << result;

#endif // Faktorial

#ifdef POW

	int  i, degree;
	double inputNumber, result;

	cout << "Введите число основание: "; cin >> inputNumber; cout << endl;
	cout << "Введите степень: "; cin >> degree; cout << endl;
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
			cout <<"|" << ch << " = " << ASCII[ch] << "|";
			ch++;
		}
		cout << endl;
	}


#endif // ASCII


#ifdef FIBONACHY

	int n, t1 = 0, t2 = 1, nextTerm = 0;

	cout << "Введите предел ряда Фибоначчи: ";
	cin >> n;

	cout << "Ряд Фибоначчи: ";
	

	cout << "0 ";
	if (n > 0) {
		cout << "1 ";
	}

	while (t1 + t2 < n)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		
		cout << nextTerm << " ";
	}

	int n, t1 = 0, t2 = 1, nextTerm = 0;
	cout << "Введите количество цифр ряда Фибоначчи, которые необходимо вывести на экран:";
	cin >> n;

	cout << "Ряд Фибоначчи: ";
	int i = 1;
	cout << "0 ";
	if (n > 0) {
		cout << "1 ";
		i++;
	}

	for (i; i < n; i++)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		cout << nextTerm << " ";
	}

#endif // FIBONACHY

#ifdef SIMPLE_SERIES

	int n;
	cout << "Введите предел для выводимого ряда простых чисел: "; cin >> n;

	for (int i = 2; i < n; i++)
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			else if (i == j + 1)
				cout << i << " ";

		}

#endif // SIMPLE_SERIES

#ifdef PERFECT_SERIES

	int n;
	cout << "Введите предел для выводимого ряда совершенных чисел: "; cin >> n;
	

	for (int num = 2; num <= n; num++)
	{	
		int sum = 1; // 1 является делителем для всех чисел
		int sqrtNum = sqrt(num);

		for (int i = 2; i <= sqrtNum; i++) {
			if (num % i == 0) {
				sum += i;
				int divisor = num / i;
				if (divisor != i) {
					sum += divisor;
				}
			}
		}
		if (sum == num) {
			cout << num << endl;
		}
		
	}

#endif // PERFECT_SERIES

#ifdef multiplication_table

	const int size = 10;
	cout << "Таблица умножения " << size << "x" << size << ":\n\n";

	cout << setw(3) << "x" << " |";
	for (int i = 1; i <= size; ++i) {
		cout << setw(4) << i;
	}
	cout << "\n";

	// Вывод разделительной линии
	cout << string(4 * (size + 1) + 1, '-') << "\n";

	// Вывод основной части таблицы
	for (int i = 1; i <= size; ++i) {
		cout << setw(3) << i << " |"; // Вывод номера строки
		for (int j = 1; j <= size; ++j) {
			cout << setw(4) << i * j;
		}
		cout << "\n";
	}

#endif // multiplication_table

}