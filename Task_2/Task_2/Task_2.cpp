#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int day;

    std::cout << "Введите номер дня мая (от 1 до 31): ";
    std::cin >> day;

    
    if (day < 1 || day > 31) {
        std::cout << "Некорректный номер дня. Пожалуйста, введите число от 1 до 31." << std::endl;
        return 1; 
    }

   
    bool isWeekend = false;

    
    if (day % 7 == 6 || day % 7 == 0) { 
        isWeekend = true;
    }

    
    if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
        isWeekend = true;
    }

    
    if (isWeekend) {
        std::cout << "День " << day << " мая - выходной." << std::endl;
    }
    else {
        std::cout << "День " << day << " мая - рабочий." << std::endl;
    }

    return 0;
}