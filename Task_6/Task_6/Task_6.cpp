#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int currentDay, currentMonth, currentYear;
    int birthDay, birthMonth, birthYear;

    
    std::cout << "Введите текущую дату (день месяц год): ";
    std::cin >> currentDay >> currentMonth >> currentYear;

    
    std::cout << "Введите дату рождения (день месяц год): ";
    std::cin >> birthDay >> birthMonth >> birthYear;

    
    int age = currentYear - birthYear;

   
    if (age > 18 || (age == 18 && (currentMonth > birthMonth || (currentMonth == birthMonth && currentDay > birthDay)))) {
        std::cout << "Можно" << std::endl;
    }
    else {
        std::cout << "Нельзя" << std::endl;
    }

    return 0;
}

//Работа программы:
//1.Мы запрашиваем у пользователя текущую дату и дату рождения.
//2.Вычисляем возраст, вычитая год рождения из текущего года.
//3.Проверяем, достиг ли посетитель 18 лет :
//    Если возраст больше 18, то алкоголь можно продавать.
//    Если возраст равен 18, то проверяем месяц и день.Если текущий месяц больше месяца рождения или текущий месяц равен месяцу рождения и текущий день больше дня рождения, то алкоголь можно продавать.
//4.Выводим результат : "Можно" или "Нельзя".