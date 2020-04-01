// ---------------------------------------------------------------
// Programming Assignment:	Course Project
// Developer:			________Joey Muzzo______________
// Date Written:			_______3/25/2018_______________
// Purpose: programming tutorial that will teach the user basic programming skills
// ---------------------------------------------------------------
#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

void main()
{
	int  number, numOne, numTwo, numThree, sum;
	string name;
	bool valid = false;

	cout << "Joey Muzzo Programming Tutorial\n";
	cout << "\n";

	cout << "Please enter you name: ";
	cin >> name;
	cout << "\n";

	cout << "Welcome to the Programming tutorial " << name << endl;
	cout << "\n";

	cout << "What tutorial would you like to see?\r\n";//asks the user what tutorial they want to see
	cout << "To see the variable and calculation tutorial press 1.\r\n";
	cout << "To see the conditional statement tutorial please press 2.\r\n";
	cout << "To see the loop tutorial please press 3.\r\n";
	cout << "To exit the program press 8.\r\n";
	cout << "Please enter the number of the tutorial that you would like to see:  ";
	cin >> numThree;
	cout << "\n";
	while (valid !=8)
	{
		if (numThree > 0 && numThree == 1)
		{
			//week 2 tutorial using variables
			cout << "This tutorial will show you how a program uses variables and does calculations.\r\n";
			cout << "\n";
			cout << "Please enter a whole number: ";
			cin >> numOne;
			cout << "\n";
			cout << "The number you entered will be stored as a variable called numOne.\r\n";
			cout << "\n";

			cout << "Please enter a second whole number: ";
			cin >> numTwo;
			cout << "\n";
			cout << "The second number you entered will be stored as a variable called numTwo.\r\n";

			cout << "Now we will show how a calculation is performed.\r\n";
			cout << "\n";
			cout << "The program will take the numbers you entered which are stored as variables and add them together.\r\n";
			cout << "The code that performs this action looks like this: sum = numOne + numTwo \r\n";
			sum = numOne + numTwo;
			cout << "\n";

			cout << "The sum of the two numbers you entered is: " << sum << endl;// end of variable tutorial
			cout << "\n";
			
		}
		else if (numThree > 0 && numThree == 2)
		{
			cout << "This tutorial will show you an example of a conditional statement.\r\n";//week 3 tutorial using conditional statements
			cout << "\n";

			cout << "Conditional statements test user input using a relational operator such as \r\n";//explanation
			cout << "the greater than symbol, the less than symbol, or the equals symbol.\r\n";
			cout << "\n";

			cout << "If the user input makes the conditional statement true, then a certain action is performed.\r\n";//explanation
			cout << "If the user input makes the conditional statement false, then a different action is performed.\r\n";
			cout << "\n";

			cout << "Please enter a number between 1 and 10:  ";// gets user input
			cin >> number;
			cout << "\n";
			while (valid == false)//validation loop
			{
				if (number >= 1 && number <= 10)//conditional statement
				{
					valid = true;
					cout << "The number you entered was tested against\r\n";
					cout << "the conditional statement: if (number >= 1 && number <= 10).\r\n";
					cout << "\n";

					cout << "If the number was within the range then you will see this dialog.\r\n";
					cout << "If the number was outside of the range, then you will be prompted to re-enter a number.\r\n";
					cout << "\n";

					cout << "The number you entered is: " << number << endl;//when conditional statement is true
				}
				else
				{
					cout << "The number you entered was outside the range of 0-10. please enter a number\r\n";//when conditional statement is false
					cout << "between 1 - 10: ";
					cin >> number;
					cout << "\n";
				}

			}
			
		}
		else if (numThree >0 && numThree == 3)//loop tutorial
		{
			cout << "This tutorial will show you how to use loops to validate user input.\r\n";
			cout << "\n";

			cout << "Please guess a number between 1 and 10:  ";
			cin >> number;
			while (number != 7)
			{

				cout << "Please try again \r\n";
				cout << "Please guess another number between 1 and 10:  ";
				cin >> number;
			}

			cout << "you guessed the correct number!\r\n";
			cout << "The loop takes the number you guessed and while it is not equal to 7.\r\n";
			cout<< "The loop starts over and asks you to guess another number.\r\n";
			cout << "The loop that validates the correct number looks like this: while (number != 7).\r\n";
			
			
		}
		else if (numThree == 8)//exits the program
		{
			cout << "You are leaving the programming tutorial. Have a good day!\r\n";
			break;
		}
		else
		{
			cout << "you entered an invalid menu number.\r\n";//lets the user know they enter an invalid number
		}
		cout << "What tutorial would you like to see?\r\n";//asks the user what tutorial they want to see
		cout << "To see the variable and calculation tutorial press 1.\r\n";
		cout << "To see the conditional statement tutorial please press 2.\r\n";
		cout << "To see the loop tutorial please press 3.\r\n";
		cout << "To exit the program press 8.\r\n";
		cout << "Please enter the number of the tutorial that you would like to see:  ";
		cin >> numThree;
		cout << "\n";
		
	}
	system("pause");
}//end of main