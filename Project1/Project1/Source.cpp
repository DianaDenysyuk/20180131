//#include<iostream>
//using namespace std;
//int Sum(int x, int y);
//int Sub(int x, int y);
//int Mult(int x, int y);
//double Div(double x, double y);
//int Index(int x, int y);
//int Percent(int x, int y);
//char Compare(int x, int y);
//
//void main()
//{
//	cout << "MENU:" << endl;
//	cout << "1. Addition" << endl;
//	cout << "2. Subtraction" << endl;
//	cout << "3. Multiplication" << endl;
//	cout << "4. Division" << endl;
//	cout << "5. Exponentiation" << endl;
//	cout << "6. Percentage" << endl;
//	cout << "7. Comparison" << endl;
//
//	int menu;
//	cout << "Select menu number = ";
//	cin >> menu;
//	system("cls");
//	switch (menu)
//	{
//	case 1:
//	{
//		int x, y;
//		cout << "Enter first term = ";
//		cin >> x;
//		cout << "Enter second term = ";
//		cin >> y;
//		cout << "Result = " << Sum(x, y) << endl;
//		break;
//	}
//	case 2:
//	{
//		int x, y;
//		cout << "Enter reduced = ";
//		cin >> x;
//		cout << "Enter negative = ";
//		cin >> y;
//		cout << "Result = " << Sub(x, y) << endl;
//		break;
//	}
//	case 3:
//	{
//		int x, y;
//		cout << "Enter first multiplier = ";
//		cin >> x;
//		cout << "Enter second multiplier = ";
//		cin >> y;
//		cout << "Result = " << Mult(x, y) << endl;
//		break;
//	}
//	case 4:
//	{
//		double x, y;
//		cout << "Enter divided = ";
//		cin >> x;
//		cout << "Enter divider = ";
//		cin >> y;
//		cout << "Result = " << Div(x, y) << endl;
//		break;
//	}
//	case 5:
//	{
//		int x, y;
//		cout << "Enter basis of degree = ";
//		cin >> x;
//		cout << "Enter degree of power = ";
//		cin >> y;
//		cout << "Result = " << Index(x, y) << endl;
//		break;
//	}
//	case 6:
//	{
//		int x, y;
//		cout << "Enter number = ";
//		cin >> x;
//		cout << "Enter percent = ";
//		cin >> y;
//		cout << "Result = " << Percent(x, y) << endl;
//		break;
//	}
//	case 7:
//	{
//		int x, y;
//		cout << "Enter first number = ";
//		cin >> x;
//		cout << "Enter second number = ";
//		cin >> y;
//		cout << "Result = " << x << Compare(x, y) << y << endl;
//		break;
//	}
//	default:
//	{
//		cout << "Error!" << endl;
//		break;
//	}
//	}
//}
//
//int Sum(int x, int y)
//{
//return x + y;
//}
//
//int Sub(int x, int y)
//{
//return x - y;
//}
//
//int Mult(int x, int y)
//{
//return x * y;
//}
//
//double Div(double x, double y)
//{
//return x / y;
//}
//
//int Index(int x, int y)
//{
//	int rez = 1;
//	while (y)
//	{
//		rez = rez * x;
//		y--;
//	}
//	return rez;
//}
//
//int Percent(int x, int y)
//{
//		int rez = x * y / 100;
//		return rez;
//}
//
//char Compare(int x, int y)
//{
//	if (x > y)
//	{
//		return '>';
//	}
//	else if (x < y)
//	{
//		return '<';
//	}
//	else
//	{
//		return '=';
//	}
//}