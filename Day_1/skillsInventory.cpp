// Author: Fedor Polyanskiy 
// Fall 2023
// Written 09/18/2023

#include <iostream>
#include <string>
#include <vector>

using namespace std; // this lets me skip writing std:: many times

// this is a class that represents a student
class Student {
    private: // students are defined by a name (string) and a gpa (float)
        string name;
        float gpa;
    public: // constructor, getters, and setters
        Student(string name, float gpa) {
            this->name = name;
            this->gpa = gpa;
        }

        string getName() {
            return name;
        }

        float getGPA() {
            return gpa;
        }

        void setName(string name) {
            this->name = name;
            cout << "Set " << this->name << "'s name." << endl;
        }

        void setGPA(float gpa) {
            this->gpa = gpa;
            cout << "Set " << this->name << "'s GPA " << "to " << gpa << endl;
        }
};

Student createStudent() {
    // prompt and set student's name and gpa
    string name;
    cout << "Give a name for the student:" << endl;
    cin >> name;
    cout << "Set student name to " << name << "." << endl;

    float gpa = 0.0;
    cout << "Give the student a GPA: " << endl;
    cin >> gpa;
    cout << "Set student's GPA to " << gpa << "." << endl;

    Student student(name, gpa); // creates student object with given name and gpa

    cout << "Created student object with name " << name << " and gpa " << gpa << "." << endl;

    return student; // returns created student object

}

// test function
void printHello() {
    cout << "Hello!" << endl;
}


// this shows some simple operations in C++
int main() {
    vector< Student > students; // this contains Student objects

    Student jerry("Jerry", 3.3); // create 3 students; Jerry, Rachel, and Michael
    Student rachel("Rachel", 3.8);
    Student michael("Michael", 2.3);

    michael.setGPA(2.4); // set Michael's GPA

    Student student = createStudent(); // prompt user to create a student

    cout << student.getGPA() << endl;
	// print the student's GPA and name
    cout << student.getName() << endl;

    students.push_back(jerry); // push students to vector, appending to the end of vector
    students.push_back(rachel); // push_front can be used to append to front
    students.push_back(michael);
    students.push_back(student);

    // inform user that 4 students have been added the vector.
    cout << "Populated students vector with " << students.size() << " students" << endl; 

    // prints hello
    printHello();
}
