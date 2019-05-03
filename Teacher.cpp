#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

Teacher::Teacher(string name) {
    this->name = name;
}

string Teacher::getName() {
    return name;
}

void Teacher::giveScore(Student student, int score) {
    if (score >= 0) {
        student.addScore(score);
    }
}

void Teacher::giveScore(Student* student, int score) {
    if (score >= 0) {
        student->addScore(score);
    }
}