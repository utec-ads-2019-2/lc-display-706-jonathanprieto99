#include <iostream>
#include <vector>
using namespace std;

//Each line contains two integers s,n
int s;
string n;

vector <string> numeros = {" -     -  -     -  -  -  -  - ","| |  |  |  || ||  |    || || |","       -  -  -  -  -     -  - ","| |  ||    |  |  || |  || |  |"," -     -  -     -  -     -  - "};

void print(int capa) {

    int num;
    int size = n.size();

    for (int i = 0; i < size; ++i) {
        num = n[i] - '0';

        for (int j = 0; j < 3; ++j) {

            if (capa % 2 == 0) {

                if (j % 2 == 0) {

                    cout << numeros[capa][3 * num + j];

                }

                else {

                    for (int k = 0;  k< s; ++k){

                        cout << numeros[capa][3 * num + j];

                    }
                }
            }

            else {

                if (j % 2 == 0) {

                    cout << numeros[capa][3 * num + j];

                }

                else {

                    for (int k = 0; k < s; ++k){

                        cout << numeros[capa][3 * num + j];

                    }
                }
            }
        }

        if (i < size - 1){

            cout << " ";

        }
    }
    cout << "\n";
}

int main() {

    while (cin >> s >> n) {

        if (s == 0 and n == "0"){

            return 0;

        }

        for (int i = 0; i < 5; ++i) {

            if (i % 2 == 0) {

                print(i);

            }

            else {

                //  TAMANO DEL RESULT
                for (int j = 0; j < s; ++j){

                    print(i);

                }

            }
        }
        cout << "\n";
    }

    return 0;
}