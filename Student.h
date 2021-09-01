#include <string>

using namespace std;

class Student
{
	private:
		string name;
		double totalQuizScore;
	public:
		Student();
		Student(string name, double totalQuizScore);
		~Student();
		
		static int numberOfQuizzes;
		
		string getName();
		int addQuiz();
		double getTotalScore();
		double getAverageScore();
};

Student::Student()
{
	this->name = "";
	this->totalQuizScore = 0;
}

Student::Student(string name, double totalQuizScore)
{
	this->name = name;
	this->totalQuizScore = totalQuizScore;
}

Student::~Student()
{
	
}

string Student::getName()
{
	return this->name;
}

int Student::addQuiz()
{
	return numberOfQuizzes++;
}

double Student::getTotalScore()
{
	return this->totalQuizScore;
}

double Student::getAverageScore()
{
	return this->totalQuizScore/addQuiz();
}