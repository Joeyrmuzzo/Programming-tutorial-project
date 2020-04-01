// ---------------------------------------------------------------
// Programming Assignment:	Course Project
// Developer:			________Joey Muzzo______________
// Date Written:			_______3/28/2018_______________
// Purpose: programming tutorial that will teach the user basic programming skills
// ---------------------------------------------------------------
#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

//function prototypes
void week_two();
void week_three();
void week_four();
void week_five();
void week_Six();
void week_Seven();

void main()
{
	int  numThree;
	string name;
	bool valid = false;

	//ifstream inputFile;
	//inputFile.open("saveFile.txt");

	//ofstream outputFile;
	//outputFile.open("saveFile.txt");

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
	cout << "To see the tutorial on arrays press 4.\r\n";
	cout << "To see the tutorial on modules press 5.\r\n";
	cout << "To see the tutorial on working with files press 6.\r\n";
	cout << "To exit the program press 8.\r\n";
	cout << "Please enter the number of the tutorial that you would like to see:  ";
	cin >> numThree;
	cout << "\n";
	while (valid !=8)
	{
		if (numThree > 0 && numThree == 1)//calcultaion tutorial
		{
			week_two();
			
			cout << "\n";
			
		}
		else if (numThree > 0 && numThree == 2)//conditional statement tutorial
		{
			week_three();
			
			
		}
		else if (numThree >0 && numThree == 3)//loop tutorial
		{
			week_four();
			
			
			
		}
		else if (numThree >0 && numThree == 4)//array tutorial
		{
			week_five();
		
			cout <<"\n";

			//for (int val : answers)// displays the contents of answers array making sure that the array is populated properly
			//{
			//	cout << val << endl;
			//}

		}
		else if(numThree >0 && numThree == 5)//week 6 module tutorial
		{
			 week_Six();
			cout <<"\r\n";
			
		}
		else if(numThree >0 && numThree == 6)// week 7 file tutorial
		{
			week_Seven();
			cout <<"\r\n";
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
		cout << "To see the tutorial on arrays press 4.\r\n";
		cout << "To see the tutorial on modules press 5.\r\n";
		cout << "To see the tutorial on working with files press 6.\r\n";
		cout << "To exit the program press 8.\r\n";
		cout << "Please enter the number of the tutorial that you would like to see:  ";
		cin >> numThree;
		cout << "\n";
		
	}
	//inputFile.close();
	//outputFile.close();

	system("pause");
}////////////////////////////////////////////////////////////////////end of main

void week_two()//variable/calculation function
{
	int numOne, numTwo, sum;
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
	//return ;
}
void week_three()//conditional statement function
{
	bool valid = false;
	int number =0;
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
void week_four()// loop function
{
	int number;
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
	cout << "The loop starts over and asks you to guess another number.\r\n";
	cout << "The loop that validates the correct number looks like this: while (number != 7).\r\n";
}
void week_five()//array function
{
	cout << "This tutorial will show you arrays are used." << endl;//array explanation
	cout << "An array allows you to store and work with multiple values of the same data type.\r\n";
	cout << "An array works like a variable that can store a group of values, all of the same type.\r\n";
	cout << "The values are stored together in consecutive memory locations.\r\n";
	cout << "Here is an example definition of an array of integers: int daysOfWeek[7];\r\n";
	cout << "The name of this array is daysOfWeek.\r\n";
	cout << "The number inside the brackets is the array's size declarator.\r\n";
	cout << "It indicates the number of elements, or values, the array can hold.\r\n";
	cout << "The daysOfWeek array can store seven elements, each one an integer.\r\n";
	cout << "\n";
	int score;
	int answers[] = { 1492,1914,1776,1865 };//answers array
	int questions[4] = {};// array to hold user input for questions
	cout << "Quiz Time!\r\n";
	ifstream inputFile;//defines object named inputFile
	inputFile.open("quizScoreSaveFile.txt");//calls the objects open function Passing "saveFile.txt" as agrument

	inputFile >> score;//score read from file
	cout << "Your last score was: ";
	cout <<score <<endl;

	 score = 0;//sets score count to 0
	cout << "Question 1.\r\n";
	cout << "What year did Christopher Columbus sail the ocean blue: ";
	cin >> questions[0];
	if (questions[0] == answers[0])
	{
		cout << "You are correct!\r\n";
		cout << "\n";
		score++;
	}
	else
	{
		cout << "Nice guess, but you are incorrect. The answer is 1492.\r\n";
		cout << "\n";
	}
	cout << "Question 2.\r\n";
	cout << "When did world war 1 start: ";
	cin >> questions[1];
	if (questions[1] == answers[1])
	{
		cout << "You are correct!\r\n";
		cout << "\n";
		score++;
	}
	else
	{
		cout << "Nice guess, but you are incorrect. The answer is 1914.\r\n";
		cout << "\n";
	}
	cout << "Question 3.\r\n";
	cout << "What year was the Declaration of Independence published: ";
	cin >> questions[2];
	if (questions[2] == answers[2])
	{
		cout << "You are correct!\r\n";
		cout << "\n";
		score++;
	}
	else
	{
		cout << "Nice guess, but you are incorrect. The answer is 1776.\r\n";
		cout << "\n";
	}
	cout << "Question 4.\r\n";
	cout << "What year was slavery abolished in North America: ";
	cin >> questions[3];
	if (questions[3] == answers[3])
	{
		cout << "You are correct!\r\n";
		cout << "\n";
		score++;
	}
	else
	{
		cout << "Nice guess, but you are incorrect. The answer is 1865.\r\n";
		cout << "\n";
	}
	cout << "Your answers were stored in an array called: questions.\r\n";
	cout << "The syntax looks like this: int questions [4]= {};\r\n";
	cout << "The correct answers are stored in an array called: answers.\r\n";
	cout << "The syntax looks like this:  int answers [] = {1492,1914,1776,1865};\r\n ";
	cout << "your answers were tested against the correct answer array using the syntax:if (questions [] == answers [])\r\n ";
	cout << "For every question you got right one point was added to your score.\r\n";
	cout << "\n";

	ofstream outputFile;//defines object named outputFile
	outputFile.open("quizScoreSaveFile.txt");//calls the objects open function passing "saveFile.txt" as argument

	cout << "Your score was: " << score << endl;
	outputFile <<score<<endl;

	inputFile.close();
	outputFile.close();
	cout << "\n";
}
void week_Six()//module tutorial
{
	cout << "Welcome to the module tutorial!" << endl;
	cout << "Modules break a programs code up into sections." << endl;
	cout << "This makes it easy to modify the code and it keeps the code organized." << endl;
	cout << "Modules works using functions." << endl;
	cout << "First you create a function header above main." << endl;
	cout << "The function header for this tutorial looks like this:  void week_Six();" << endl;
	cout << "Then you write the contents of the function below main." << endl;
	cout << "First you state the name of the function, then you write the contents inside curly brackets." << endl;
	cout << "Here is an example: void week_Six();" << endl;
	cout << "{" << endl;
	cout << "This is where you write the code for the function." << endl;
	cout << "}" << endl;
	cout << "Then you call the function inside of main. This calls all of the code in the function to be executed." << endl;
	cout << "The function call looks like this: void week_Six();" << endl;
	cout << "All of the text you read in this tutorial was stored in a function called  week_Six" << endl;
}
void week_Seven()//file tutorial
{
	
	int number1,number2,number3;
	cout << "Welcome to the file tutorial!" << endl;
	cout << "Files allow you to store information after the program closes." << endl;

	cout << "The numbers you entered last time were: ";

	ifstream inputFile;//defines object named inputFile
	inputFile.open("saveFile.txt");//calls the objects open function Passing "saveFile.txt" as agrument

	inputFile >> number1;//read number1 from file
	cout << number1 <<endl;//display number1

	inputFile >> number2;//read number2 from file
	cout << number2 << endl;//display number1

	inputFile >> number3;//read number3 from file
	cout << number3 << endl;//display number3

	ofstream outputFile;//defines object named outputFile
	outputFile.open("saveFile.txt");//calls the objects open function passing "saveFile.txt" as argument
	
	cout << "Please enter three whole numbers." <<endl;
	cout << "Number 1: ";
	cin >> number1;
	cout << "Number 2: ";
	cin >> number2;
	cout << "Number 3: ";
	cin >> number3;


	//writes three numbers to saveFile
	outputFile <<number1 <<endl;
	outputFile <<number2 <<endl;
	outputFile <<number3 <<endl;
	cout << "The numbers were saved to a file.\r\n";

	inputFile.close();
	outputFile.close();
	
}




