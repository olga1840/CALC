#include<iostream>
using namespace std;
#define Calculator
#define LuckyTi�ket


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef Calculator;
	double x, y;  // �����, �������� � ����������
	char n;        // ���� ��������
	cout << "������� ������ �����: ";
	cin >> x ;
	cout << "������� ������ �����: ";
	cin >> y;
	cout << "�������� ��������: +, -, *, / :  ";
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
		cout << "������ �����!" << endl;
	}
#endif

#ifdef LuckyTi�ket;
	int number;
	cout << "������� ����� ������: ";
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
		cout << "��� ����� �������� ����������! �����������!" << endl;
	}
	else if (a + b + c != e + d + f)
	{
		cout << "� ���������, ���� ����� �� ������� ����������... � ��������� ��� ����������� �������!" << endl;
	}
	else if (number<1 || number>100000) // ������� ������-�� �� ��������..
	{
		cout << "������ �����! ������� ������������ �����!" << endl;
	}
			
#endif
}





