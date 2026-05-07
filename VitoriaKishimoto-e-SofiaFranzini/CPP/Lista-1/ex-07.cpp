#include <iostream>
using namespace std;

int main() {
    int quantidade;
    float altura, soma = 0, media;

    cin >> quantidade;

    for (int i = 1; i <= quantidade; i++) {
        cin >> altura;
        soma += altura;
    }

    media = soma / quantidade;

    cout << "Media das alturas: " << media << endl;

    return 0;
}
