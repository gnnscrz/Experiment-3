#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{

int min, max, sum=0;
const int num=10;
int a[num];
float ave;

cout << "Enter 10 integers below.\n" ;

for (int i = 0; i < 10; i++)
{
cout << "\nEnter integer " << i +1 << ":" << " ";
	cin >> a[i];
}

min = a[0];
max = a[0];

for (int i = 1; i < 10; i++)
{
if (min > a[i])
{
min = a[i];
}
else if (max < a[i])
{
max = a[i]; 
}

}

for (int i = 0; i < 10; ++i)
{
sum = sum + a[i];
}

ave = sum / 10;


cout << "\nLargest integer: " << max << endl;
cout << "Smallest integer: " << min << endl; 
cout << "Total: " << sum << endl; 
cout << "Average: " << ave << endl; 

_getch();
return 0;

}