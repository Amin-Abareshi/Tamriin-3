#include <iostream>
using namespace std;
int main() 
{
	int X = 0;
	cout<<"enter size of your snake: "<<'\n';
	cin>>X;
	while(X != 0)
	{
		if(X%2 == 0)
			cout<<"*";
		else if(X%2 != 0)
			cout<<"#";
			
		X--;	
	}
	cout<<endl;
	system("pause");
	return 0;
}
