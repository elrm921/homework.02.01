#include <iostream>

enum month {
    null,
    january,
    febrary,
    marach,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main() {
    int num = 1;

    while (num != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> num;
        month this_month = static_cast<month>(num);
        switch (this_month) {
            case 0:
                std::cout << "До свидания" << "\n";
                break;
            case 1:
                std::cout << "Январь" << "\n";
                break;
            case 2:
                std::cout << "Февраль" << "\n";
                break;
            case 3:
                std::cout << "Март" << "\n";
                break;
            case 4:
                std::cout << "Апрель" << "\n";
                break;
            case 5:
                std::cout << "Май" << "\n";
                break;
            case 6:
                std::cout << "Июнь" << "\n";
                break;
            case 7:
                std::cout << "Июль" << "\n";
                break;
            case 8:
                std::cout << "Август" << "\n";
                break;
            case 9:
                std::cout << "Сентябрь" << "\n";
                break;
            case 10:
                std::cout << "Октябрь" << "\n";
                break;
            case 11:
                std::cout << "Ноябрь" << "\n";
                break;
            case 12:
                std::cout << "Декабрь" << "\n";
                break;
            default:
                std::cout << "Неправильный номер!" << "\n";
                break;
        }
    }
    return 0;
}