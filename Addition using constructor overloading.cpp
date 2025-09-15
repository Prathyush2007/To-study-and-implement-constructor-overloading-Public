//Name : Prathyush Nimmagadda
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;
class Sum {
public:
    Sum(int x, int y) {
        cout << "Integer Sum (2 numbers) = " << (x + y) << endl;
    }
    Sum(float x, float y) {
        cout << "Float Sum = " << (x + y) << endl;
    }
    Sum(int x, int y, int z) {
        cout << "Integer Sum (3 numbers) = " << (x + y + z) << endl;
    }
};
int main() {
    int a, b, c;
    float p, q;
     cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter two floats: ";
    cin >> p >> q;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "\nResults:" << endl;
    Sum s1(a, b);      
    Sum s2(p, q);      
    Sum s3(a, b, c);   

    return 0;
}
