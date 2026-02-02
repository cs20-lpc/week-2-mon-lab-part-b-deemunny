#include <iostream>
#include "Student.h"
#include <string>

int main() {
Student* s1 = new Student();
Student* s2 = new Student();
Student* s3 = new Student();
Student* s4 = new Student();
Student* s5 = new Student();

std::string tempString;
int tempInt;

for (int i = 0; i < 5; i++) {
    std::cout << "Enter the name for student #" << i+1 << ":" << std::endl;
    std::cin >> tempString;
    std::cout << "Enter the age for student #" << i+1 << ":" << std::endl;
    std::cin >> tempInt;
}

delete s1;
delete s2;
delete s3;
delete s4;
delete s5;

}