//Name : Prathyush Nimmagadda
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    float add(float a, float b) {
        return a + b;
    }
};
int main() {
    Calculator calc;
    cout << "Integer Sum: " << calc.add(5, 10) << endl;
    cout << "Float Sum: " << calc.add(5.5f, 2.5f) << endl;   

    return 0;
}
