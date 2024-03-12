#include <iostream>
#include <string>
using namespace std;
string FibonacciWord(int n){
    if (n == 0) return "a";
    if (n == 1) return "b";
    string f0= "a";
    string f1= "b";
    string current= "";
    for (int i = 2;i <= n;++i){
        f=f0+f1;
        f0=f1;
        f1=f;
    }
    return f;
}
int main() {
    for (int i = 0; i <= 10; ++i){
        cout<< FibonacciWord(i) << endl;
    }
    return 0;
}

