#include <iostream>
#include <conio.h>  
#include <cmath>
using namespace std;
void cm()	
{
	cout << "MENU: " << endl 
		 << "\t1.Add" << endl
		 << "\t2.Subtract" << endl
		 << "\t3.Multiply" << endl
		 << "\t4.Divide" << endl
		 << "\t5.Modulus" << endl;
}


int c1 (int a, int b)
{
	return(a + b); 
}

int c2 (int a, int b)	
{
	return (a - b); 
}

int c3 (int a, int b)	
{
	return(a * b); 
}

int c4 (int a, int b)	
{
	return(a / b); 
}

int c5 (int a, int b)	
{
	return(a % b); 
}

int main()
{
	int op, int1, int2; 
	char cont;
	bool co = false; 
	
	do	{
		cm(); 
		cout << "Enter your choice of operation (1-5):    "; 	cin >> op;
		cout << "Input two integers: ";		cin >> int1 >> int2; cout << endl;

		switch(op)	
		{
 			case 1:
				cout << "Result: " << c1(int1, int2);
				break;
 		
			case 2: 
				cout << "Result: " << c2(int1, int2);
				break;
 		
			case 3:
				cout << "Result: " << c3(int1, int2);
				break;
 		
			case 4:
				cout << "Result: " << c4(int1,int2);
				break;
 
 			case 5:
				cout << "Result: " << c5(int1, int2);
				break;
 
 			default:
				cout << "Invalid";
				break;
    	}
	
		cout << "\n\nContinue? Y or N? (Press Y if yes, N if no)";	cin >> cont;
	
		switch(cont)	
		{ 
			case 'Y':
 			case 'y':
 				 cout << endl;
				break;
 
			default:
 				cout << "\n\nOFF";
				co = true;
				break;
		}
       	
	} while (!co);
  
  	_getch();
	return 0;
}
