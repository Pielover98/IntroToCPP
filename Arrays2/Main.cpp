#include <iostream>
using namespace std;
int main() 
{

	int values[10];
	int small, big; 
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter value " << i << ": ";
		cin >> values[i];
	}
	big = small = values[0];
	for (int i = 0; i < 10; i++) 
	{
		if (values[i]>big) 
		{
			big = values[i];
		}
		if (values[i]<small) 
		{
			small = values[i];
		}
	}
	cout << "The biggest number is " << big << endl; 
	cout << "The smallest number is " << small << endl; 
	system("pause");
}