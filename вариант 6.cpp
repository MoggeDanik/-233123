#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> findLuckyTickets() {
    std::vector<std::string> tickets;
    
    for (int i = 0; i <= 999999; ++i) {
        char buffer[7];
        sprintf(buffer, "%06d", i);
        std::string ticket(buffer);
        
        int sum1 = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
        int sum2 = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');
        
        if (sum1 == sum2) {
            tickets.push_back(ticket);
        }
    }
    return tickets;
}

int main() {
    std::cout << "Поиск счастливых билетов..." << std::endl;
    auto tickets = findLuckyTickets();
    
    std::cout << "Найдено " << tickets.size() << " счастливых билетов" << std::endl;
    std::cout << "Первые 20: ";
    for (int i = 0; i < 20 && i < (int)tickets.size(); ++i) {
        std::cout << tickets[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
