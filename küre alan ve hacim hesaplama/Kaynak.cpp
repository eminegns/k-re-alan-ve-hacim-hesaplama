#include <iostream>
using namespace std;

const double pi = 3.14;

class Kure {
public:
    float r;
    double hacim();
    double alan();
};

double Kure::hacim() {
    return (r * r * r * 4 * pi / 3);
}
double Kure::alan() {
    return (4 * pi * r * r);

}
int main() {
    Kure k;
    float r;
    cout << "Yaricapi giriniz: ";
    cin >> r;
    k.r = r;
  cout << "Hacim= " << k.hacim() << endl;
  cout << "Alan= " << k.alan() << endl;



    return 0;
}