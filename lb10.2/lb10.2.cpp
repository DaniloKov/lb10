// lb10.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Трикутник задано координатами вершин 𝐴(0;0),𝐵(𝑖;𝑖−1),𝐶(−𝑖;𝑖+1), де і – номер варіанта.
//Обчислити медіану m(a) та бісектрису w(c).
//завдання 15 тому B(15;14) C(-15;16)

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//спочатку координати переведемо в довжини
	float AB, AC, BC, m, w;
	AB = sqrt(pow((15 - 0), 2) + pow((14 - 0), 2));
	AC= sqrt(pow((-15 - 0), 2) + pow((16 - 0), 2));
	BC= sqrt(pow((-15 - 15), 2) + pow((16 - 14), 2));
	//тепер використаємся формулою медіани
	m = sqrt(  2 * pow(AC, 2) + 2 * pow(AB, 2) - pow(BC, 2))/2;
	//тепер використаємся формулою бісектриси
	w = sqrt(AC * BC * (AC + BC + AB) * (AC + BC - AB)) / (AC + BC);
	//тепер виведемо ці данні на екран з передумовою
	cout << "Данно трикутник з точками A(0;0) B(15;14) C(-15;16)" << endl;
	cout << "Довжиеа його сторін:AB=" << AB << "; AC=" << AC << "; BC=" << BC << "."<< endl;
	cout << "Медіана з точки A=" << m << endl;
	cout << "Бісектриса з точки С=" << w;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
