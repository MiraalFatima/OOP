#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
	string name;
	string ID;
	int age;

public:
	Person(string name, string ID, int age)
		: name(name), ID(ID), age(age) {}

	string getName() const {
		return name;
	}
	string getID() const {
		return ID;
	}
	int getAge() const {
		return age;
	}
};

class Student : public Person {
protected:
	float cgpa;
	string rollNumber;

public:
	Student(string name, string ID, int age, float cgpa, string rollNumber)
		: Person(name, ID, age), cgpa(cgpa), rollNumber(rollNumber) {}

	float getCGPA() const {
		return cgpa;
	}
	string getRollNumber() const {
		return rollNumber;
	}
};

class Undergraduate : public Student {
private:
	string fyp_name;

public:
	Undergraduate(string name, string ID, int age, float cgpa, string rollNumber, string fyp_name)
		: Student(name, ID, age, cgpa, rollNumber), fyp_name(fyp_name) {}

	string getFYPName() const {
		return fyp_name;
	}
};

class Graduate : public Student {
private:
	string thesis_topic;
	string supervisor_name;

public:
	Graduate(string name, string ID, int age, float cgpa, string rollNumber, string thesis_topic, string supervisor_name)
		: Student(name, ID, age, cgpa, rollNumber), thesis_topic(thesis_topic), supervisor_name(supervisor_name) {}

	string getThesisTopic() const {
		return thesis_topic;
	}
	string getSupervisorName() const {
		return supervisor_name;
	}
};

int main() {
	Undergraduate undergrad_student("Mahroosh", "22L-6192", 19, 3.65, "12345", "FYP Topic");

	cout << "Name: " << undergrad_student.getName() << endl;
	cout << "ID: " << undergrad_student.getID() << endl;
	cout << "Age: " << undergrad_student.getAge() << endl;
	cout << "CGPA: " << undergrad_student.getCGPA() << endl;
	cout << "Roll Number: " << undergrad_student.getRollNumber() << endl;
	cout << "FYP Name: " << undergrad_student.getFYPName() << endl;

	Graduate grad_student("Ali", "6198", 25, 3.8, "12345", "Thesis Project", "Muhammad Ali");

	cout << "Name: " << grad_student.getName() << endl;
	cout << "ID: " << grad_student.getID() << endl;
	cout << "Age: " << grad_student.getAge() << endl;
	cout << "CGPA: " << grad_student.getCGPA() << endl;
	cout << "Roll Number: " << grad_student.getRollNumber() << endl;
	cout << "Thesis Topic: " << grad_student.getThesisTopic() << endl;
	cout << "Supervisor Name: " << grad_student.getSupervisorName() << endl;


}