// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
bool polindrom(string a)//10
{
	int l = a.length();
	for (int i = 0; i < l / 2; ++i)
	{
		if (a[i] != a[l - i - 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string st;
	cin >> st;
	if (polindrom(st))
	{
		cout << "This is polindrom!";
	}
	else
	{
		cout << "Sorry, this is not polindrom!";
	}
	
	string n;//9
	cin >> n;
	cout << "Hello," << n << "!" << "My neme is C++";
	
	int r;//8
	int d;
	cin >> r;
	d = 2 * r;
	cout << "d=" << d;
	
	int k;//7
	int p;
	cin >> k;
	p = 4 * k;
	cout << "p=" << p;
	
	int f, b, c, s, v;//6
	std::cin >> f >> b >> c;
	s = f * b;
	v = f * b*c;
	cout << "s=" << s << endl;
	cout << "v=" << v << endl;

	const float pi = 3.14;//5
	int R, rad;
	float str;
	cin >> R >> rad;
	str = pi * R*R - pi * rad*rad;
	cout << "s=" << str;

	double a1;//4
	double b1;
	double h;
	double P;
	double g;
	cin >> a1>> b >> h;
	g = sqrt(h*h + ((a1 - b1)*(a1 - b1)) / 2);
	P = a1 + b1 + 2 * g;
	std::cout << "P=" << P;

	double x1;//3
	double x2;
	double y1;
	double y2;
	cin >> x1 >> x2 >> y1 >> y2;
	double S;
	S = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	std::cout << "S=" << S;

	double a2;//2
	double b2;
	double X;
	cin >> a2;
	cin >> b2;
	cout << "X=" << -b2 / a2;

	double V;//1
	double M;
	double p1;
	cin >> V;
	cin >> M;
	p1 = M / V;
	cout << "p=" << p1;

	int x3;//4
	int y3;
	int a3;
	cin >> a3;
	x3 = 12 * (a3*a3) + 7 * a3 - 12;
	y3 = 3 * x3*x3*x3 + 4 * x3*x3 - 11 * x3 + 1;
	cout << "x=" << x3 << endl;
	cout << "y=" << y3 << endl;

	int a4;//3
	cin >> a4;
	int b4;
	cin >> b4;
	int c4;
	cin >> c4;
	cout << c4 << " " << a4<< " " << b4 << endl;

	cout << "1" << " " << "13" << " " << "49"<< endl;//2

	int a5;//1
	cin >> a5;
	cout << "1" << " " << a << " " << "13" << " " << a << " " << "49" << endl;
}
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
