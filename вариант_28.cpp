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
        std::cin >> child.grade;
        
        std::cout << "\nИнформация о школьнике:" << std::endl;
        std::cout << "ФИО: " << child.person.fullName << std::endl;
        std::cout << "Дата рождения: " << child.person.birthDate.day << "/" 
                  << child.person.birthDate.month << "/" << child.person.birthDate.year << std::endl;
        std::cout << "Школа: " << child.schoolName << std::endl;
        std::cout << "Класс: " << child.grade << std::endl;
    } else if (type == 2) {
        Student student;
        std::cout << "Введите ФИО: ";
        std::getline(std::cin, student.person.fullName);
        std::cout << "Введите дату рождения (день месяц год): ";
        std::cin >> student.person.birthDate.day >> student.person.birthDate.month >> student.person.birthDate.year;
        std::cin.ignore();
        std::cout << "Введите название вуза: ";
        std::getline(std::cin, student.university);
        std::cout << "Введите факультет: ";
        std::getline(std::cin, student.faculty);
        std::cout << "Введите название группы: ";
        std::getline(std::cin, student.groupName);
        
        std::cout << "\nИнформация о студенте:" << std::endl;
        std::cout << "ФИО: " << student.person.fullName << std::endl;
        std::cout << "Дата рождения: " << student.person.birthDate.day << "/" 
                  << student.person.birthDate.month << "/" << student.person.birthDate.year << std::endl;
        std::cout << "Вуз: " << student.university << std::endl;
        std::cout << "Факультет: " << student.faculty << std::endl;
        std::cout << "Группа: " << student.groupName << std::endl;
    } else {
        std::cout << "Неверный выбор" << std::endl;
    }
    
    return 0;
}
