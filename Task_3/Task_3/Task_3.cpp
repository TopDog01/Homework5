#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int startDayOfWeek; 
    int day; 

    
    std::cout << "Введите номер дня недели, с которого начинается май (1 - понедельник, 7 - воскресенье): ";
    std::cin >> startDayOfWeek;

    
    if (startDayOfWeek < 1 || startDayOfWeek > 7) {
        std::cout << "Некорректный номер дня недели. Пожалуйста, введите число от 1 до 7." << std::endl;
        return 1; 
    }

 
    std::cout << "Введите номер дня мая (от 1 до 31): ";
    std::cin >> day;

    
    if (day < 1 || day > 31) {
        std::cout << "Некорректный номер дня. Пожалуйста, введите число от 1 до 31." << std::endl;
        return 1; 
    }

    
    bool isWeekend = false;

    
    int dayOfWeek = (startDayOfWeek + (day - 1) - 1) % 7 + 1; 

    
    if (dayOfWeek == 6 || dayOfWeek == 7) { 
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