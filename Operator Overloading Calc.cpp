//Name : Prathyush Nimmagadda
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;
class Calc {
    int value;
public:
    Calc(int v = 0) {
        value = v;
    }
    Calc operator+(const Calc& other) {
        return Calc(value + other.value);
    }
    Calc operator-(const Calc& other) {
        return Calc(value - other.value);
    }
    Calc operator*(const Calc& other) {
        return Calc(value * other.value);
    }
    Calc operator/(const Calc& other) {
        return Calc(value / other.value);
    }
    void show() const {
        cout << value << endl;
    }
};
int main() {
    Calc a(20), b(4);
    Calc sum = a + b;
    Calc diff = a - b;
    Calc prod = a * b;
    Calc quot = a / b;

    cout << "Sum: ";
    sum.show();
    cout << "Difference: ";
    diff.show();
    cout << "Product: ";
    prod.show();
    cout << "Quotient: ";
    quot.show();
    return 0;
}
