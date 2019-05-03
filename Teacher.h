#include <iostream>
#include "Student.h"
using namespace std;

class Teacher {
private:
    string name;

public:
    Teacher(string);

    string getName();

    void giveScore(Student, int);

    void giveScore(Student*, int);
};