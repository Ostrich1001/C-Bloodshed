#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) 
{
	int num;
	int remainder = 1;
	
	while (remainder = 1)
	{
		cout << "Enter Number: ";
		cin >> num;	
		remainder = num % 2;	
		cout << remainder << "\n";
	}	

	return 0;
}
