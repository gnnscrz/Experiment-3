#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	char n[50];	
	int size;
	
	cout << "Enter a charcter array: "; 
	cin>> n;
	size = 0;
	
	while(n[size] !='\0') size++;
	
	cout << "\ Reverse array: ";
	for(int j=size-1;j>=0;j--)
	{
		cout << n[j];
	}

	cout<< "\n\ Size of  array: "<< size;
	
	_getch();
	return 0;
}
