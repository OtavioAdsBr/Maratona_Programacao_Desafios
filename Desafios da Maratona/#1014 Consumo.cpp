#include <bits/stdc++.h>

using namespace std;

int main() {
    int X;
    float Y;
    cin >> X >> Y;
    float consumo_medio = X / Y;
    cout << fixed << setprecision(3) << consumo_medio << "km/l" << endl;

    return 0;
}
