#include <iostream>
#include <string>


using namespace std;

/* 
C++에서 문자열을 다루기 위한 클래스 std::string을 제공합니다. 
이 코드에서는 학생 이름을 저장할 때 std::string을 사용합니다.
*/

struct Student {
	string name = "";
	int age = 0;
	double score = 0.0;
};

/*

string은 동적으로 크기가 조정되는 문자열을 저장할 수 있습니다. 
즉, 문자열의 길이가 고정되어 있지 않아서 문자 개수가 늘어나면 자동으로 크기가 조정됩니다.
std::string은 내부적으로 문자들을 저장할 때 char 배열을 사용하지만, 다양한 문자열 처리 기능을 제공합니다. 
예를 들어, 문자열 연결, 잘라내기, 찾기, 변환 등을 쉽게 할 수 있습니다.

*/

//참조를 이용한 학생정보 입력 함수
void inputStudent(Student& stdudent)
{
	cout << "이름 입력: ";
	cin >> stdudent.name;
	cout << "나이 입력: ";
	cin >> stdudent.age;
	cout << "점수 입력: ";
	cin >> stdudent.score;
}

// 학생 정보 출력 함수 (const 참조 사용)
void printStudent(const Student& student)
{
	cout << "\n 학생 정보 " << endl;
	cout << "이름 : " << student.name << endl;
	cout << "나이 : " << student.age << endl;
	cout << "점수 : " << student.score << endl;
}

// const는 해당 객체를 수정하지 않겠다는 의미입니다. 
// 즉, 함수 내부에서 student 객체를 변경할 수 없습니다.
int main()
{
	Student student;
	inputStudent(student);   //참조로 전달
	printStudent(student);  //const 참조로 전달

	return 0;
	
}