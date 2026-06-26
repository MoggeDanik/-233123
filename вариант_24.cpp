#include <iostream>
#include <ctime>
#include <string>

std::string getCurrentDate() {
    time_t now = time(nullptr);
    tm* local = localtime(&now);
    
    char buffer[100];
    const char* months[] = {"января", "февраля", "марта", "апреля", "мая", "июня",
                            "июля", "августа", "сентября", "октября", "ноября", "декабря"};
    
    sprintf(buffer, "%02d/%s/%04d", local->tm_mday, months[local->tm_mon], local->tm_year + 1900);
    return std::string(buffer);
}

int main() {
    std::string date = getCurrentDate();
    std::cout << "Текущая дата: " << date << std::endl;
    
    return 0;
}
