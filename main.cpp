#include <iostream>
#include "Student.h"
#include "Teacher.h"    // include Student.h again

using namespace std;

int main() {
    Student s1("Tony", "6110401234");
    s1.addScore(30);

    cout << "Student Name: " << s1.getName() << endl;
    cout << "Score: " << s1.getScore() << endl;

    cout << "--------------------------------" << endl;

    Teacher t1("Stan");
    
    cout << "-------- Pass by value --------" << endl;
    t1.giveScore(s1, 30); // pass by value
    cout << "Student Name: " << s1.getName() << endl;
    cout << "Score: " << s1.getScore() << endl;

    cout << "------- Pass by reference ------" << endl;
    t1.giveScore(&s1, 30); // pass by reference
    cout << "Student Name: " << s1.getName() << endl;
    cout << "Score: " << s1.getScore() << endl;
}