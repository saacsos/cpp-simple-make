#ifndef STUDENT_H // include guard
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string id;
    int score;
public:
    Student(string, string);
    void addScore(int);
    int getScore();
    string getName();
};

#endif