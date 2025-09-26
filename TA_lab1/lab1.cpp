#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x1, y1, x2, y2, x3, y3, z1, z2, z3, a, b, c, m_a, m_b, m_c;

    cout << "������ ���������� ������� A(x y z): ";
    cin >> x1 >> y1 >> z1;
    cout << "������ ���������� ������� B(x y z): ";
    cin >> x2 >> y2 >> z2;
    cout << "������ ���������� ������� C(x y z): ";
    cin >> x3 >> y3 >> z3;

    a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2) + pow(z2 - z3, 2)); // ������� BC
    b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2) + pow(z1 - z3, 2)); // ������� AC
    c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2)); // ������� AB

    if(a + b > c && a + c > b && b + c > a) {
           
    } else {
        cout << "��������� �� ����" << endl;
        return 0;
	}
    m_a = 1.0 / 2.0 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2));
    cout << "������, ��������� �� ������� a: " << m_a << endl;
    m_b = 1.0 / 2.0 * sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2));
    cout << "������, ��������� �� ������� b: " << m_b << endl;
    m_c = 1.0 / 2.0 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2));
    cout << "������, ��������� �� ������� c: " << m_c << endl;

    return 0;
}