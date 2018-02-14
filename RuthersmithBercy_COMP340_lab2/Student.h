#include <list>

class Student
{

private:
	std::string studentID;
	std::list<int> grades;
	float average;

public:
	Student(std::name, std::email,std::id);
	~Student();

	std::string GetStudentId(){
		return studentID;
	}

	float GetAverage(){
		return average;
	}

	void ComputeAverage(){

	}

	void AddGrade(int grade){
		
	}
	
};