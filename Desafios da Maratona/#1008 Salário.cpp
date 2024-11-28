#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numero_funcionario, horas_trabalhadas;
    double valor_hora, salario;

    cin >> numero_funcionario >> horas_trabalhadas >> valor_hora;

    salario = horas_trabalhadas * valor_hora;

    cout << "NUMBER = " << numero_funcionario << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}
