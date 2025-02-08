#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int MAX_AMOUNT = 150000; 
    vector<int> denominations = { 5000, 2000, 1000, 500, 200, 100 }; 
    vector<int> count(denominations.size(), 0); 

    int N;
    cout << "Введите сумму для обналичивания (в рублях): ";
    cin >> N;

    
    if (N > MAX_AMOUNT) {
        cout << "Ошибка: сумма не может превышать 150000 рублей." << endl;
        return 1;
    }

    
    if (N % 100 != 0) {
        cout << "Ошибка: сумма должна быть кратна 100." << endl;
        return 1;
    }

    
    for (size_t i = 0; i < denominations.size(); ++i) {
        if (N >= denominations[i]) {
            count[i] = N / denominations[i]; 
            N %= denominations[i]; 
        }
    }

    
    cout << "Выданные купюры:" << endl;
    for (size_t i = 0; i < denominations.size(); ++i) {
        if (count[i] > 0) {
            cout << count[i] << " по " << denominations[i] << " рублей" << endl;
        }
    }

    
    if (N > 0) {
        cout << "Ошибка: невозможно выдать сумму ровно " << N << " рублей." << endl;
    }

    return 0;
}

//Объяснение кода:
//
//1. Мы определяем максимальную сумму, которую можно выдать, и вектор доступных купюр.
//2. Пользователь вводит сумму, которую он хочет обналичить.
//3. Программа проверяет, не превышает ли сумма 150000 рублей и кратна ли она 100.
//4. С помощью цикла мы определяем, сколько купюр каждого номинала нужно выдать, начиная с наибольшего.
//5. Программа выводит количество купюр каждого номинала, которые будут выданы.Если осталась сумма, которую нельзя выдать, выводится сообщение об ошибке.