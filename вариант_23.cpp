#include <iostream>
#include <string>

struct Date {
    int day, month, year;
};

Date parseDate(const std::string& date) {
    Date d;
    d.day = std::stoi(date.substr(0, 2));
    d.month = std::stoi(date.substr(3, 2));
    d.year = std::stoi(date.substr(6, 4));
    return d;
}

int compareDates(const Date& d1, const Date& d2) {
    if (d1.year != d2.year) return d1.year - d2.year;
    if (d1.month != d2.month) return d1.month - d2.month;
    return d1.day - d2.day;
}

int main() {
    std::string date1, date2;
    std::cout << "Введите первую дату (dd/mm/yyyy): ";
    std::cin >> date1;
    std::cout << "Введите вторую дату (dd/mm/yyyy): ";
    std::cin >> date2;
    
    Date d1 = parseDate(date1);
    Date d2 = parseDate(date2);
    
    int cmp = compareDates(d1, d2);
    if (cmp < 0) {
        std::cout << date1 << " раньше " << date2 << std::endl;
    } else if (cmp > 0) {
        std::cout << date1 << " позже " << date2 << std::endl;
    } else {
        std::cout << date1 << " и " << date2 << " одинаковые" << std::endl;
    }
    
    return 0;
}
