#include <iostream>
#include<Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c;
	float m1, m2, m3;
	cout << "������ ������� �: ";
	cin >> a;
	cout << "������ ������� b: ";
	cin >> b;
	cout << "������ ������� c: ";
	cin >> c;
	m1 = 1.0 / 2.0 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)); 
	cout << "������, ��������� �� ������� c: " << m1 << endl;
	m2 = 1.0 / 2.0 * sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2)); 
	cout << "������, ��������� �� ������� b : " << m2 << endl;
	m3 = 1.0 / 2.0 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2));	
	cout << "������, ��������� �� ������� a: " << m3 << endl;
}