#include <iostream>
using namespace std;

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;

}

void pswap(int *pn1, int *pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;

}


void refswap(int &refn1, int &refn2) {
	int tmp = refn1;
	refn1 = refn2;
	refn2 = tmp; 

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 15;




	//������ �� ����������
	/*int* pn = &n;

	cout << "*pn = " << *pn << '\n'; //������������� ��������

	int& refn = n;

	cout << " refn =  " << refn << '\n';

	refn = 20;

	cout << "����� n =" << n << '\n';*/


	cout << n << ' ' << m << '\n'; // 10, 15
	//my_swap(n, m);// �� ��������, �� ��������� ��� �����
	//pswap(&n, &m); // �� ������, �� �������� ������
	refswap(n, m); //��������, ������ � �������
	cout << n << ' ' << m << '\n';
	



	//������. ������� �������, �������� �������� ���� ���������� �������
	/*cout << n << ' ' << m << '\n'; // 10, 15
	//my_swap(n, m);// �� ��������, �� ��������� ��� �����
	pswap(&n, &m);
	cout << n << ' ' << m << '\n';*/


	// ��������� �� ����������
	/*cout << "����� n = " << &n << '\n';

	int* pn; // ��������� ��������� pn

	pn = &n; // ���������� ��������� �� ���������� n

	cout << "pn =      " << pn << '\n'; //������� �������� pn

	cout << "n = " << n << '\n';
	cout << "*pn = " << *pn << '\n'; // ��������� �������������, ������� pn

	*pn = 20; // ��������� �������������, ������ �������� n

	cout << "����� n = " << n << '\n';

	pn = &m; //�������������� ��������� �� ����� m

	cout << "����� m = " << &m << '\n';
	cout << "     pn = " << pn << '\n';

	int* pm = &m; // ������� ��� ���� ��������� � ���������� ��� �� m

	cout << "pm = " << pm << '\n';*/

	// ��������� �� �������
	/*int mass[5]{5, 8, 0, 11, 7};

	int* pm2 = &mass[2];

	cout << *pm2 << '\n';

	pm2++;

	cout << *pm2 << '\n';
	cout << mass << '\n'; // ����� ������� �������� �������
	pm2 = mass;
	cout << *pm2 << '\n'; //5

	cout << "������:\n";
	for (int i = 0; i < 5; i++)
		//cout << mass[i] << ", ";
		cout << *(pm2 + i) << ", ";
	cout << "\b\b.\n";*/

	



	return 0;
}