#include <string>

// this is a class that represents a student

class Student {
    private:
        std::string name;
        float gpa;
    public:
        std::string getName() {
            return name;
        }

        int getGPA() {
            return gpa;
        }
};