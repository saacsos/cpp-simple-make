#include "Student.h"
using namespace std;

Student::Student(string name) {
    this->name = name;
    score = 0;
}

string Student::getName() {
    return name;
}

void Student::addScore(int score) {
    this->score += (score > 0) ? score: 0;
}

int Student::getScore() {
    return score;
}