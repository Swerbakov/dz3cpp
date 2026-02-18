#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;
    
    // Находим максимальное число
    int max1 = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    
    // Находим минимальное число
    int min1 = (a <= b && a <= c) ? a : (b <= a && b <= c) ? b : c;
    
    // Находим среднее число (которое не является ни max, ни min)
    int mid = (a != max1 && a != min1) ? a : 
              (b != max1 && b != min1) ? b : c;
    
    cout << "Результат: " << max1 << " " << mid << " " << min1 << endl;
    
    return 0;
}

