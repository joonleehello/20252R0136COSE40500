#include <iostream>
using namespace std;

class Student {
public:
	int id;
	Student(int i) : id(i) {}	

};

int main() {
	Student s1(2020250204);
	cout << "Student ID: " << s1.id << endl;
	return 0;
}