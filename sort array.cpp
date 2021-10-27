#include <iostream>
using namespace std;

bool arraySortedOrNot(int a[], int n)
{
    if (n == 1 || n == 0)
	{
		return true;
	}

	return a[n - 1] >= a[n - 2] && arraySortedOrNot(a, n - 1);
}

int main()
{
    int size_array;
    cout<<"Enter size of Array : ";
    cin>>size_array;
    int* my_array = new int[size_array];
    for(int i=0; i<size_array; i++)
    {
        cout<<"array["<<i<<"] : ";
        cin>>my_array[i];
    }
	if (arraySortedOrNot(my_array, size_array))
	{
		cout << "it is sorted" << endl;
	}
	else
	{
		cout << "it is not sorted" << endl;
	}

	return 0;
}

