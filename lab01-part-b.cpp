#include <iostream>
#include "Student.h"
#include <string>

static int NUMSTUDENTS = 5;

int main() {

Student* students[NUMSTUDENTS];

for (int i = 0; i < NUMSTUDENTS; ++i) {
    students[i] = new Student();
}

std::string tempString;
int tempInt;

// this should probably be a separate function outside of main
for (int i = 0; i < NUMSTUDENTS; ++i) {
    std::cout << "Enter the name for student #" << i+1 << ":";
    std::cin >> tempString;
    students[i]->setName(tempString);
    std::cout << "Enter the age for student #" << i+1 << ":";
    std::cin >> tempInt;
    students[i]->setAge(tempInt);
}

for (int i = 0; i < NUMSTUDENTS; ++i) {
    std::cout << "Student #" << i+1 << std::endl;
    std::cout << "    Name: " << students[i]->getName() << std::endl;
    std::cout << "    Age: "  << students[i]->getAge()  << std::endl << std::endl;
}

for (int i = 0; i < NUMSTUDENTS; i++)
{
    delete students[i];
}

}