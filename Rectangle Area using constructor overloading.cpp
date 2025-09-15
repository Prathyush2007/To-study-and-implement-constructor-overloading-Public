//Name : Prathyush Nimmagadda
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;
class Rectangle {
public:
    Rectangle(int length, int width) {
        cout << "Area: " << length * width << endl;
    }
    Rectangle(float length, float width) {
        cout << "Perimeter: " << 2 * (length + width) << endl;
    }
    Rectangle(double length, double width) {
        if (length == width)
            cout << "This is a Square" << endl;
        else
            cout << "This is a Rectangle" << endl;
    }
};
int main() {
    Rectangle r1(10, 5); 
    Rectangle r2(10.5f, 5.5f); 
    Rectangle r3(6.0, 6.0);    
    return 0;
}
