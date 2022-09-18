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




	//ссылки на переменные
	/*int* pn = &n;

	cout << "*pn = " << *pn << '\n'; //разыменование неудобно

	int& refn = n;

	cout << " refn =  " << refn << '\n';

	refn = 20;

	cout << "Новая n =" << n << '\n';*/


	cout << n << ' ' << m << '\n'; // 10, 15
	//my_swap(n, m);// не работает, тк параметры это копии
	//pswap(&n, &m); // не удобно, тк передаем адреса
	refswap(n, m); //идеально, удобно и красиво
	cout << n << ' ' << m << '\n';
	



	//задача. создать функцию, меняющую значение двух переменных местами
	/*cout << n << ' ' << m << '\n'; // 10, 15
	//my_swap(n, m);// не работает, тк параметры это копии
	pswap(&n, &m);
	cout << n << ' ' << m << '\n';*/


	// указатели на переменные
	/*cout << "Адрес n = " << &n << '\n';

	int* pn; // объявляем указатель pn

	pn = &n; // направляем указатель на переменную n

	cout << "pn =      " << pn << '\n'; //выводим значение pn

	cout << "n = " << n << '\n';
	cout << "*pn = " << *pn << '\n'; // используя разыменование, выводим pn

	*pn = 20; // используя разыменование, меняем значение n

	cout << "Новая n = " << n << '\n';

	pn = &m; //перенаправляем указатель на адрес m

	cout << "адрес m = " << &m << '\n';
	cout << "     pn = " << pn << '\n';

	int* pm = &m; // создаем еще один указатель и направляем его на m

	cout << "pm = " << pm << '\n';*/

	// указатели на массивы
	/*int mass[5]{5, 8, 0, 11, 7};

	int* pm2 = &mass[2];

	cout << *pm2 << '\n';

	pm2++;

	cout << *pm2 << '\n';
	cout << mass << '\n'; // адрес первого элемента массива
	pm2 = mass;
	cout << *pm2 << '\n'; //5

	cout << "Массив:\n";
	for (int i = 0; i < 5; i++)
		//cout << mass[i] << ", ";
		cout << *(pm2 + i) << ", ";
	cout << "\b\b.\n";*/

	



	return 0;
}