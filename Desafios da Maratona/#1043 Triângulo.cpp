#include <bits/stdc++.h>
using namespace std;

int main() {

double A,B,C;
cin >> A >> B >> C;

if((A + B > C)&&(A + C > B) &&(B + C > A)){
    double perimetro = A + B + C;
    cout << fixed << setprecision(1);
    cout << "Perimetro = " << perimetro << endl;
} else {
    double area = ((A+B)*C)/2;
    cout << fixed << setprecision(1);
    cout << "Area = " << area << endl;
}



    return 0;
}
