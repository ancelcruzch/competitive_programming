#include <iostream>
#include <map>

using namespace std;

int main() {

    string line;
    map<char, int> diccionario;

    //valores para cada letra..
    diccionario['A'] = 0;
    diccionario['B'] = 1;
    diccionario['C'] = 2;
    diccionario['D'] = 3;
    diccionario['E'] = 0;
    diccionario['F'] = 1;
    diccionario['G'] = 2;
    diccionario['H'] = 0;
    diccionario['I'] = 0;
    diccionario['J'] = 2;
    diccionario['K'] = 2;
    diccionario['L'] = 4;
    diccionario['M'] = 5;
    diccionario['N'] = 5;
    diccionario['O'] = 0;
    diccionario['P'] = 1;
    diccionario['Q'] = 2;
    diccionario['R'] = 6;
    diccionario['S'] = 2;
    diccionario['T'] = 3;
    diccionario['U'] = 0;
    diccionario['V'] = 1;
    diccionario['W'] = 0;
    diccionario['X'] = 2;
    diccionario['Y'] = 0;
    diccionario['Z'] = 2;
    
    //algoritmo..
    while (cin >> line) {
        int last = -1;
        for (auto i : line) {
            if (diccionario[i] and diccionario[i] != last) {
                cout << diccionario[i];
                last = diccionario[i];
            }
            if (!diccionario[i]) {
                last = diccionario[i];
            }
        }
        cout << endl;
    }
}
