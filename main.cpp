#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student s1("Tony");
    s1.addScore(30);

    cout << "Name: " << s1.getName() << endl;
    cout << "Score: " << s1.getScore() << endl;
}