#include <iostream>
#include <string>
using namespace std;

void Cases1(int n, string words)
{
	switch (n)
	{
	case 1:
		cout << words;
		break;
	case 2:
		cout << "Sorry, wrong answer... next question";
		break;
	default:
		cout << "Sorry, wrong answer... next question";
		break;
	}
	cout << '\n';
	system("pause");
	system("CLS");
}

void Cases2(int n, string words)
{
	switch (n)
	{
	case 1:
		cout << "Sorry, wrong answer... next question";
		break;
	case 2:
		cout << words;
		break;
	default:
		cout << "Sorry, wrong answer... next question";
		break;
	}
	cout << '\n';
	system("pause");
	system("CLS");
}

void Cases3(int n, string words)
{
	switch (n)
	{
	case 1:
		cout << "Sorry, wrong answer... next question";
		break;
	case 2:
		cout << "Sorry, wrong answer... next question";
		break;
	case 3:
		cout << words;
		break;
	default:
		cout << "Sorry, wrong answer... next question";
		break;
	}
	cout << '\n';
	system("pause");
	system("CLS");
}

void Counter(int grade, int questions)
{
	cout << "Correct  answer / questions asked: " << grade << "/" << questions << '\n';
}


int main()
{
	int questions = 0;
	int grade = 0;

	cout << "Hello there, your general knowledge will be tested. Are you ready?" << '\n' << '\n';
	system("pause");
	system("CLS");

	cout << "Q1: What color is the sky?" << "\n1. Green\n2.Blue\n3.Ourple\n4.Yellow" << "\n\n" << ">";
	int question1;
	questions += 1;
	string words = "Good, it's blue!";
	cin >> question1;
	Cases2(question1, words);
	if (question1 == 2)
		grade += 1;

	Counter(grade, questions);

	cout << "Q2: Where is Amsterdam?" << "\n1.United States\n2.Canada\n3.The Netherlands\n4.Imagine Dragons?" << "\n\n" << ">";
	int question2;
	string answer2 = "Great Job! It is the capital of the Netherlands!";
	questions += 1;
	cin >> question2;
	Cases3(question2, answer2);
	if (question2 == 3)
		grade += 1;

	Counter(grade, questions);

	cout << "Q3: Who are you?" << "\n1.Me\n2.You\n3.Everyone\n4.Nobody" << "\n\n" << ">";
	int question3;
	string answer3 = "I'm glad you know who you are.";
	questions += 1;
	cin >> question3;
	Cases1(question3, answer3);
	if (question3 == 1)
		grade += 1;

	Counter(grade, questions);

	cout << "Q4: What day was the midterm?" << "\n1.Friday, 7/15/2022\n2.Wednesday\n3.Last Week\n4.Monday" << "\n\n" << ">";
	int question4;
	questions += 1;
	string answer4 = "Indeed";
	cin >> question4;
	Cases1(question4, answer4);
	if (question4 == 1)
		grade += 1;

	Counter(grade, questions);

	if (grade == 4)
		cout << "Aced it!\n";
	else if (grade == 1)
		cout << "There is always later\n";
	else if (grade == 0)
		cout << "Hmmm....\n";
	else
		cout << "Well done!\n";

	system("pause");
}