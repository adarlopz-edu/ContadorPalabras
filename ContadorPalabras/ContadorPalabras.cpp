#include <iostream>

using namespace std;

int main()
{
    char f[100];
    int p{}, x{}, cd, uc;

    cout << "Ingrese una frase (maximo 100 caracteres): ";
    cin.getline(f, 100);
    cd = strlen(f);
    uc = strlen(f) - 1;

    if (cd == 0 || f[x] == ' '){
        p = 0;
        cout << "Palabras: " << p;
    }
    else {
        if (f[uc] == ' ') {
            for (x; x < strlen(f); x++) {
                if (f[x] == ' ')
                    p++;
            }
            cout << "Palabras: " << p;
        }
        else {
            for (x; x < strlen(f); x++) {
                if (f[x] == ' ')
                    p++;
            }
            p = p + 1;
            cout << "Palabras: " << p;
        }
    }
}
