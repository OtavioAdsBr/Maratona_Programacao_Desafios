#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float N1, N2, N3, N4, media, exame, mediaFinal;

    cin >> N1 >> N2 >> N3 >> N4;

    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    cout << fixed << setprecision(1) << "Media: " << media << endl;

    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << fixed << setprecision(1) << "Nota do exame: " << exame << endl;

        mediaFinal = (media + exame) / 2;

        if (mediaFinal >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }

        cout << fixed << setprecision(1) << "Media final: " << mediaFinal << endl;
    }

    return 0;
}
