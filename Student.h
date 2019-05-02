#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int score;
public:
    Student(string);
    void addScore(int);
    int getScore();
    string getName();
};