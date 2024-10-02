#include <iostream>
using namespace std;

class Drob
{
private:
    int x;
    int y;
public:
    Drob() : x(0), y(1) {
    }
    Drob(int a, int b) : x(a), y(b) {
        if (y == 0) {
            y = 1;
            cout << "Denominator cannot be zero. Set to 1." << endl;
        }
    }
    void Print() {
        cout << "Numerator: " << x << "\tDenominator: " << y << endl;
    }
    void Input(int a, int b) {
        x = a;
        y = b;
    }
    void Input() {
        x = rand() % 20;
        y = rand() % 20 + 1;
    }
};

int main() {
    srand(time(0));
    Drob a;
    a.Print();

    Drob b(3, 4);
    b.Print();

    Drob c(5, 0);
    c.Print();
}
