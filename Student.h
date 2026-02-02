#include <string>
#include <iostream>

// separate into cpp file if this exercise gets more complicated
class Student {
    public:
        Student() {
            std::cout << "Student object created!" << std::endl;
        }
        
        ~Student() {
            std::cout << "Student object destroyed!" << std::endl;
        }

        // setters
        void setName(const std::string s) {
            name = s;
        }

        void setAge(int i) {
            age = i;
        }

        // getters
        std::string getName() const { return name; }
        int getAge() const { return age; }


    private:
        std::string name;
        int age;
};