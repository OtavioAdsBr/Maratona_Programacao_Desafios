#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo, quantidade;
    double preco;

    cin >> codigo >> quantidade;

    switch (codigo) {
        case 1:
            preco = 4.00;
            break;
        case 2:
            preco = 4.50;
            break;
        case 3:
            preco = 5.00;
            break;
        case 4:
            preco = 2.00;
            break;
        case 5:
            preco = 1.50;
            break;
        default:
            preco = 0.0;
            break;
    }

    double total = preco * quantidade;

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
