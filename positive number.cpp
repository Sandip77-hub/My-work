#include<iostream>
using namespace std;
int main()
{
	int number,end1;
	cout<<"Enter an integer:";
	cin>>number;
	//checks if  the number is positive
	if (number>0)
	{
		cout<<"You entered a positive integer:"<< number << end1;		
	}
	cout<<"This statement is always executed.";
	return 0;
}
