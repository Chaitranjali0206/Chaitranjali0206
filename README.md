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
  
  OUTPUT:
  Enter the First Number : a =  4
Enter the Second Number : b =  5
The Values Before Swapping: a = 4 and b = 5
The Result After Swapping : a = 5 and b = 4
------------------------------------------------------------------------------------------------------------------------------
  
  #include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if((n1 >= n2) && (n1 >= n3))
        cout << "Largest number: " << n1;
    else if ((n2 >= n1) && (n2 >= n3))
        cout << "Largest number: " << n2;
    else
        cout << "Largest number: " << n3;
    
    return 0;
} 
  
OUTPUT:
  
  Enter three numbers:
 2.3
4.5
0.2
Largest number: 4.5
------------------------------------------------------------------------------------------------------------------------------
  
  #include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}
  
  
  OUTPUT:
  
  Enter a year: 2020
2020 is a leap year.
  
  
  Enter a year: 2021
2021 is not a leap year.
  --------------------------------------------------------------------------------------------------------------------------------
  
  
  
