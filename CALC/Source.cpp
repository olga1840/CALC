#include<iostream>
using namespace std;
#define Calculator
#define LuckyTiсket


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef Calculator;
	double x, y;  // Числа, вводимые с клавиатуры
	char n;        // Знак действия
	cout << "Введите первое число: ";
	cin >> x ;
	cout << "Введите второе число: ";
	cin >> y;
	cout << "Выберите действие: +, -, *, / :  ";
	cin >> n;

	switch (n)
	{
	case '+':
		cout << x << "+" << y << " = " << x + y << endl;
		break;
	
	case '-':
		cout << x << "-" << y << " = " << x - y << endl;
		break;
	
	case '*':
		cout << x << "*" << y << " = " << x * y << endl;
		break;
	
	case '/':
		cout << x << "/" << y << " = " << x / y << endl;
		break;
	
	default:
		cout << "Ошибка ввода!" << endl;
	}
#endif

#ifdef LuckyTiсket;
	int number;
	cout << "Введите номер билета: ";
	cin >> number;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	a = number % 10;
	b = (number / 10) % 10;
	c = (number / 100) % 10;
	d = (number / 1000) % 10;
	e = (number / 10000) % 10;
	f = (number / 100000) % 10;
	if (a + b + c == e + d + f)
	{
		cout << "Ваш билет является счастливым! Поздравляем!" << endl;
	}
	else if (a + b + c != e + d + f)
	{
		cout << "К сожалению, этот билет не явлется счастливым... В следующий раз обязательно повезет!" << endl;
	}
	else if (number<1 || number>100000) // Условие почему-то не работает..
	{
		cout << "Ошибка ввода! Введите шестизначный номер!" << endl;
	}
			
#endif
}





