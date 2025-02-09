#include <iostream>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");

	int A, B, C;
	std::cout << "Введите размеры первой коробки (A B C): ";
	std::cin >> A >> B >> C;

	int M, N, K;
	std::cout << "Введите размеры второй коробки (M N K): ";
	std::cin >> M >> N >> K;

	int box1[3] = { A, B, C };
	int box2[3] = { M ,N ,K };

	if (box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2]) {
		std::cout << "Первая коробка помещается во вторую." << std::endl;
	}
	else {
		std::cout << "Первая коробка не помещается во вторую." << std::endl;
	}

	return 0;
}