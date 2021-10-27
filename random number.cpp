#include<iostream>
#include<time.h>
using namespace std;


int main()
{
	int number;
	cout<<"enter size array: ";
	cin>>number;
	int Array[number]={0}, X;
	int temp=0;
	srand(time(0));
	
	int j = 0; 
	while (j!=number)
	{
		temp = j;
		
		X = (rand() % 10) + 1;
		for (int i = 0; i<j; i++)
		{
			if (Array[i] == X)
			{
				i = j;
				j--;
			}
		}
		if (temp > j)
		{
			j++;
		}
		if (temp == j)
		{
			Array[j] = X;
			j++;

		}
	
	}
	cout<<"{";
	for (int i = 1; i <=number; i++)
	{
		cout << Array[i] <<",";
	}
	
	cout<<"}";
	
	system("pause");
	return 0;
}
