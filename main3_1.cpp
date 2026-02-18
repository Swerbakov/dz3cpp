#include <iostream>
#include <iomanip>
using namespace std;

string boolToString(bool value) {
    return value ? "true" : "false";
}

int main() {
    bool values[] = {true, false};
    
    cout << "Оператор: ||" << endl;
    for (bool a : values) {
        for (bool b : values) {
            cout << setw(5) << boolToString(a) << " " 
                 << setw(5) << boolToString(b) << " " 
                 << setw(5) << boolToString(a || b) << endl;
        }
    }
    
    cout << "\nОператор: &&" << endl;
    for (bool a : values) {
        for (bool b : values) {
            cout << setw(5) << boolToString(a) << " " 
                 << setw(5) << boolToString(b) << " " 
                 << setw(5) << boolToString(a && b) << endl;
        }
    }
    
    return 0;
}
