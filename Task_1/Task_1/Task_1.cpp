#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    double speed;
    double altitude;

   
    std::cout << "Введите скорость самолета (км/ч): ";
    std::cin >> speed;

    
    std::cout << "Введите высоту полета (метры): ";
    std::cin >> altitude;

    
    if (speed >= 750 && speed <= 850 && altitude >= 9000 && altitude <= 9500) {
        std::cout << "Самолет летит правильным эшелоном." << std::endl;
    }
    else {
        std::cout << "Самолет не соответствует требованиям эшелона." << std::endl;
    }

    return 0;
}