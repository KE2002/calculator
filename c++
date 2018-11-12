//basic calculator!!
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, result;
	char oper;
	cout << "Enter the values of a and b:" << endl;
	cin >> a >> b;
	cout << "Enter the operation:" << endl;
	cin >> oper;
	if (oper == '+')
	{
		result = a + b;
		cout << "Ans:" << a + b << endl;
	}
	else
		if (oper == '-')
		{
			result = a - b;
			cout << "Ans:" << a - b << endl;
		}
		else
			if (oper == '*')
			{
				result = a * b;
				cout << "Ans:" << a * b << endl;
			}
			else
				if (oper == '/')
				{
					result = a / b;
					cout << "Ans:" << a / b << endl;
				}
				else
					if (oper == &)
					{
						result = pow(a, b);
						cout << "Ans:" << endl;
					}
	
	system("pause");
	return 0;
	

}
