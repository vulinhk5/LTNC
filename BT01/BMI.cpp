#include <iostream>
using namespace std;
int main() {
    double weight, height, bmi;
    cin>> weight;
    cin>> height;
    bmi=weight / (height * height);
    cout << bmi << endl;
    return 0;
}

