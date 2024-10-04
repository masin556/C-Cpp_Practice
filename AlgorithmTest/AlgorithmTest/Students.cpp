#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct Student {
	// 기본적으로 구조체는 기본적으로 public 
	string name;
	int age;
	string studentId;

	// 구조체 변수 초기화 
	Student(string n, int a, string id) : name(n), age(a), studentId(id) {}
};

class StudentManager {
public:
	void AddStudent(const string& name, int age, const string& studentId) {
		vStudents.emplace_back(name, age, studentId); // 객체내 인자만받아 함수 내에서 객체 생성해 삽입 - emplace_back 생성자 한번만 호출
	}
	/*width() 또는 iomanip/ setw()로 정리*/
	void DisplayStudents() const {
		for (const auto& student : vStudents)
		{
			cout << "| " << "Name: " << student.name << " |" << setw(6) << "Age: " << student.age << " |" << setw(13) << "Student ID: " << student.studentId << " |" << endl;
		}
		
	}

private:
	// 공개가 필요없는
	vector<Student> vStudents;
};


int main()
{
	StudentManager manager;

	manager.AddStudent("홍길동", 20, "20230001");
	manager.AddStudent("인프런", 21, "20230002");
	manager.AddStudent("감자  ", 25, "20230003");

	cout << "학생정보: " << endl;
	manager.DisplayStudents();

	return 0;
}