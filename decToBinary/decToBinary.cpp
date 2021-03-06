// decToBinary.cpp : Takes a decimal input and converts it to binary
#include <iostream>
using namespace std;

void decToBinary(int x)		//function to convert decimal to binary
{
	int array[1000];		//starting size of array
	int i = 0;				//Initalize counter to 0
	while (x != 0)			//while loop for the decimal 
	{
		array[i] = x % 2;		//take modulus of the decimal
		x = x / 2;			//set the decimal to the decimal divided by 2
		i++;				//increment the array space
	}
	for (int j = i - 1; j >= 0; j--)	//for loop to print out the array starting from the end until the beginning
	{
		cout << array[j];		//print out the array component at space j
	}
}

int main()
{
	cout << "Enter a integer input: ";		//Asks user to enter an input
	int x;		//Intializes x variable
	cin >> x;	//Takes input and sets x to it
	decToBinary(x);		//Takes input and passes it to function

	return 0;
}
