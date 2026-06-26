#include <iostream>
#include <string>

struct Date {
    int day, month, year;
};

struct Person {
    std::string fullName;
    Date birthDate;
};

struct SchoolChild {
    Person person;
    std::string schoolName;
    int grade;
};

struct Student {
    Person person;
    std::string university;
    std::string faculty;
    std::string groupName;
};

int main() {
    int type;
    std::cout << "Выберите тип молодого человека (1 - школьник, 2 - студент): ";
    std::cin >> type;
    std::cin.ignore();
    
    if (type == 1) {
        SchoolChild child;
        std::cout << "Введите ФИО: ";
        std::getline(std::cin, child.person.fullName);
        std::cout << "Введите дату рождения (день месяц год): ";
        std::cin >> child.person.birthDate.day >> child.person.birthDate.month >> child.person.birthDate.year;
        std::cin.ignore();
        std::cout << "Введите название школы: ";
        std::getline(std::cin, child.schoolName);
        std::cout << "Введите класс: ";
        std::cin >> child.g
