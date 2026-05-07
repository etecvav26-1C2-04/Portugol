#include <iostream>
using namespace std;

int main() {
    int limite;

    cin >> limite;

    if (limite < 50 || limite > 100) {
        cout << "Numero invalido!" << endl;
        return 0;
    }

    int a = 0;
    int b = 1;
    int proximo;

    cout << a << " " << b << " ";

    proximo = a + b;

    while (proximo <= limite) {
        cout << proximo << " ";

        a = b;
        b = proximo;
        proximo = a + b;
    }

    return 0;
}
