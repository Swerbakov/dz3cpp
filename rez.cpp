#include <iostream>

int main() {
    int a, b, c;
    int first, second, third;
    
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;
    
    // Находим максимальное число
    first = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
    
    // Находим минимальное число
    third = (a <= b) ? ((a <= c) ? a : c) : ((b <= c) ? b : c);
    
    // Находим среднее число
    second = (a != first && a != third) ? a : 
             (b != first && b != third) ? b : 
             (c != first && c != third) ? c : 
             // Если все числа равны или два равны
             (a == first && b == third) ? c :
             (a == first && c == third) ? b : a;
    
    std::cout << "Результат: " << first << " " << second << " " << third << std::endl;
    
    return 0;
}
