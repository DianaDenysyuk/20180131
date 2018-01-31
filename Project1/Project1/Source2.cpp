#include<iostream>
using namespace std;
void tringle(int high = 12);

void main()
{
	int high;
	cout << "Enter height ";
	cin >> high;
	system("cls");
	tringle(high);
}

void tringle(int high)
{
		for (int i = 0; i < high; i++)
		{
			if (i == 0)
			{
				cout << "*";
			}
			else if (i == high - 1)
			{
				for (int j = 0; j < high; j++)
				{
					cout << "*";
				}
			}
			else
			{
				cout << "*";
				for (int j = 0; j < i - 1; j++)
				{
					cout << " ";
				}
				cout << "*";
			}
				cout << endl;
		}
}