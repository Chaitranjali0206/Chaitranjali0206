/*
* FILE NAME : swapping.cpp
* AUTHOR    : Chaitranjali H M
*/

#include<iostream>
using namespace std;
int main()
{
	int a, b, temp;
	
	cout << "\n Enter the First Number : a =  ";
	cin >> a;
	
	cout << "\n Enter the Second Number : b =  ";
	cin >> b;
	
	cout << "\nThe Values Before Swapping: a = "<< a << " and b = " << b;
	
	temp = a;
	a = b;
	b = temp;
	
	cout << "\nThe Result After Swapping : a = "<< a << " and b = " << b;

 	return 0;
}
