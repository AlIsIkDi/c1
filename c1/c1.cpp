#include <iostream>
#include <bitset>
using namespace std;

// Функция для поразрядного сложения двоичных чисел
string bitwise_add(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); // Преобразование первого числа в целое число
    int n2 = bitset<8>(num2).to_ulong(); // Преобразование второго числа в целое число
    return bitset<8>(n1 + n2).to_string(); // Возвращение суммы двух чисел в двоичном виде
}

// Функция для поразрядного вычитания двоичных чисел
string bitwise_sub(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); // Преобразование первого числа в целое число
    int n2 = bitset<8>(num2).to_ulong(); // Преобразование второго числа в целое число
    return bitset<8>(n1 - n2).to_string(); // Возвращение разности двух чисел в двоичном виде
}

// Функция для поразрядного умножения двоичных чисел
string bitwise_mul(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); // Преобразование первого числа в целое число
    int n2 = bitset<8>(num2).to_ulong(); // Преобразование второго числа в целое число
    return bitset<8>(n1 * n2).to_string(); // Возвращение произведения двух чисел в двоичном виде
}

// Функция для поразрядного деления двоичных чисел
string bitwise_div(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); // Преобразование первого числа в целое число
    int n2 = bitset<8>(num2).to_ulong(); // Преобразование второго числа в целое число
    return bitset<8>(n1 / n2).to_string(); // Возвращение частного двух чисел в двоичном виде
}
int main() {
    string num1 = "1011101"; // Первое двоичное число
    string num2 = "1001011"; // Второе двоичное число

    // Вывод результатов поразрядных операций над числами
    cout << "Bitwise Addition: " << bitwise_add(num1, num2) << endl;
    cout << "Bitwise Subtraction: " << bitwise_sub(num1, num2) << endl;
    cout << "Bitwise Multiplication: " << bitwise_mul(num1, num2) << endl;
    cout << "Bitwise Division: " << bitwise_div(num1, num2) << endl;

    return 0;
}
