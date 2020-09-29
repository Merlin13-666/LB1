// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
using byte =  char;
int main()
{
	int x;//exe 1.1
	int y;
	cin >> x;
	cin >> y;
	if ((x % 2 != 0) & (y % 2 != 0))
	{
		cout << "Condichion is true"<<endl;
	}
	else
	{
		cout << "Condichion is false"<<endl;
	}
	cin >> x;//exe 1.2
	cin >> y;
	if (((x < 20) && (y >= 20))|| ((x>=20) && (y < 20)))
	{
		cout << "Condichion is true" << endl;
	}
	else
	{
		cout << "Condichion is false" << endl;
	}
	cin >> x;//exe 1.3
	cin >> y;
	if ((x==0) || (y==0))
	{
		cout << "Condichion is true" << endl;
	}
	else
	{
		cout << "Condichion is false" << endl;
	}
	int z;//exe 1.4
	cin >> x;
	cin >> y;
	cin >> z;
	if ((x < 0) & (y < 0)&(z<0))
	{
		cout << "Condichion is true" << endl;
	}
	else
	{
		cout << "Condichion is false" << endl;
	}
	cin >> x;//exe 1.5
	cin >> y;
	cin >> z;
	if (((x%5==0) && (y%5!=0) &&(z%5!=0))|| ((x % 5 != 0) && (y % 5 == 0) && (z % 5 != 0))|| ((x % 5 != 0) && (y % 5 != 0) && (z % 5 == 0)))
	{
		cout << "Condichion is true" << endl;
	}
	else
	{
		cout << "Condichion is false" << endl;
	}
	cin >> x;//exe 1.6
	cin >> y;
	cin >> z;
	if ((x >100) || (y >100) || (z >100))
	{
		cout << "Condichion is true" << endl;
	}
	else
	{
		cout << "Condichion is false" << endl;
	}
	
	pair<byte, byte> positionA;//exe 2
	cin >> positionA.first >> positionA.second;
	pair<byte, byte> positionB;
	cin >> positionB.first >> positionB.second;
	if ((positionA.first == positionB.first) || (positionA.second == positionB.first))//exe2.1
	{
		cout << "The rook can go like that"<<endl;
	}
	else
	{
		cout << "The rook can't go like that!!!"<<endl;
	}
	cin >> positionA.first >> positionA.second;//exe2.2
	cin >> positionB.first >> positionB.second;
	if (abs(positionA.first - positionB.first) && abs(positionA.second - positionB.second))
	{
		cout << "An elephant can go like this" << endl;
	}
	else
	{
		cout << "The elephant can't go like this!!!" << endl;
	}
	
	cin >> positionA.first >> positionA.second;//exe2.3
	cin >> positionB.first >> positionB.second;
	if ((abs(positionA.first - positionB.first)==1) || (abs(positionA.second - positionB.second)==1))
	{
		cout << "The king can go like this" << endl;
	}
	else
	{
		cout << "The king can't go like this!!!" << endl;
	}
	cin >> positionA.first >> positionA.second;//exe2.4
	cin >> positionB.first >> positionB.second;
	if ((abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second)) || (positionA.second == positionB.second) || (positionA.second == positionB.second))
	{
		cout << "The queen can go like this" << endl;
	}
	else
	{
		cout << "The queen cannot go like this!!!" << endl;
	}
	cin >> positionA.first >> positionA.second;//exe2.5.1
	cin >> positionB.first >> positionB.second;
	if ((positionA.second +1 == positionB.second && positionA.first== positionB.first)||(positionA.second+2== positionB.second && positionA.first== positionB.first))
	{
		cout << "The pawn can go like this" << endl;
	}
	else
	{
		cout << "The pawn can't go like that!!!" << endl;
	}
	cin >> positionA.first >> positionA.second;//exe2.5.2
	cin >> positionB.first >> positionB.second;
	if ((positionA.second + 1 == positionB.second && positionA.first - 1 == positionB.first) || (positionA.second + 1 == positionB.second && positionA.first + 1 == positionB.first))
	{
		cout<<"Pawn eating" << endl;
	}
	for (int i = 1; i < 10; i++)//exe 3.1
	{
		cout << i << " x7=" << i * 7 << endl;
	}
	int n;//exe 3.2
	cin >> n;
	for (int i = 1; i < 10; i++)
	{
		cout << i << " x " << n << " = " << i * n << endl;
	}
	int p;//exe 4.1
	for (int i = 8; i < 16; i++)
	{
		p *= i;
	}
	cout << p << endl;
	int a, p1 = 1;//exe4.2
	cin >> a;
	for (a;a<20;a++)
	{
		p1 *= a;
	}
	int b, p2 = 1;//exe 4.3
	cin >> b;
	1 < b < 20;
	for (int i = 1; i < b; i++)
	{
		p2 *= i;
	}
	cout << p2 << endl;
	int a1, b1, p3 = 1;//4.4
	cin >> a1 >> b1;
	for (a1; a1 < b1; a1++)
	{
		p3 *= a1;
	}
	cout << p3 << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
