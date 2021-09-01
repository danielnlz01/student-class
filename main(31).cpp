#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int Student::numberOfQuizzes = 0;

int main() 
{
	Student *s1 = new Student("Daniela", 345);
	cout << "name: " << s1->getName() << endl;
	cout << "total quiz score: " << s1->getTotalScore() << endl;
	s1->addQuiz();
	s1->addQuiz();
	s1->addQuiz();
	s1->addQuiz();
	s1->addQuiz();
	cout << "average score is of " << s1->getAverageScore() << " for " << Student::numberOfQuizzes << " quizzes taken" << endl;
  return 0;
} 