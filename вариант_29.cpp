#include <iostream>
#include <string>
#include <vector>

struct Date {
    int day, month, year;
};

struct Person {
    std::string fullName;
    Date birthDate;
};

struct Worker {
    Person person;
    std::vector<std::pair<std::string, int>> professions; // <профессия, категория>
};

struct Programmer {
    Person person;
    std::string university;
    int graduationYear;
    std::vector<std::pair<std::string, int>> languages; // <язык, степень владения>
};

int main() {
    int type;
    std::cout << "Выберите тип сотрудника (1 - рабочий, 2 - программист): ";
    std::cin >> type;
    std::cin.ignore();
    
    if (type == 1) {
        Worker worker;
        std::cout << "Введите ФИО: ";
        std::getline(std::cin, worker.person.fullName);
        std::cout << "Введите дату рождения (день месяц год): ";
        std::cin >> worker.person.birthDate.day >> worker.person.birthDate.month >> worker.person.birthDate.year;
        std::cin.ignore();
        
        int numProfessions;
        std::cout << "Введите количество профессий (до 5): ";
        std::cin >> numProfessions;
        std::cin.ignore();
        
        for (int i = 0; i < numProfessions && i < 5; ++i) {
            std::string prof;
            int cat;
            std::cout << "Профессия " << (i+1) << ": ";
            std::getline(std::cin, prof);
            std::cout << "Категория: ";
            std::cin >> cat;
            std::cin.ignore();
            worker.professions.push_back({prof, cat});
        }
        
        std::cout << "\nИнформация о рабочем:" << std::endl;
        std::cout << "ФИО: " << worker.person.fullName << std::endl;
        std::cout << "Дата рождения: " << worker.person.birthDate.day << "/" 
                  << worker.person.birthDate.month << "/" << worker.person.birthDate.year << std::endl;
        std::cout << "Профессии:" << std::endl;
        for (const auto& p : worker.professions) {
            std::cout << "  " << p.first << " (категория " << p.second << ")" << std::endl;
        }
    } else if (type == 2) {
        Programmer programmer;
        std::cout << "Введите ФИО: ";
        std::getline(std::cin, programmer.person.fullName);
        std::cout << "Введите дату рождения (день месяц год): ";
        std::cin >> programmer.person.birthDate.day >> programmer.person.birthDate.month >> programmer.person.birthDate.year;
        std::cin.ignore();
        std::cout << "Введите название вуза: ";
        std::getline(std::cin, programmer.university);
        std::cout << "Введите год окончания вуза: ";
        std::cin >> programmer.graduationYear;
        std::cin.ignore();
        
        int numLanguages;
        std::cout << "Введите количество языков программирования (до 5): ";
        std::cin >> numLanguages;
        std::cin.ignore();
        
        for (int i = 0; i < numLanguages && i < 5; ++i) {
            std::string lang;
            int level;
            std::cout << "Язык " << (i+1) << ": ";
            std::getline(std::cin, lang);
            std::cout << "Степень владения (1-10): ";
            std::cin >> level;
            std::cin.ignore();
            programmer.languages.push_back({lang, level});
        }
        
        std::cout << "\nИнформация о программисте:" << std::endl;
        std::cout << "ФИО: " << programmer.person.fullName << std::endl;
        std::cout << "Дата рождения: " << programmer.person.birthDate.day << "/" 
                  << programmer.person.birthDate.month << "/" << programmer.person.birthDate.year << std::endl;
        std::cout << "Вуз: " << programmer.university << std::endl;
        std::cout << "Год окончания: " << programmer.graduationYear << std::endl;
        std::cout << "Языки программирования:" << std::endl;
        for (const auto& l : programmer.languages) {
            std::cout << "  " << l.first << " (уровень " << l.second << ")" << std::endl;
        }
    } else {
        std::cout << "Неверный выбор" << std::endl;
    }
    
    return 0;
}
