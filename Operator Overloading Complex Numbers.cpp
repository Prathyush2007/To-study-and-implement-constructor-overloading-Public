//Name : Prathyush Nimmagadda
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;
class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    Complex operator-(Complex &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
    void disp() {
        cout << real << " +i" << imag << endl;
    }
};
int main() {
    Complex c1(20, 15), c2(5, 7);
    Complex c3 = c1 - c2;
    c3.disp();
    return 0;
}
