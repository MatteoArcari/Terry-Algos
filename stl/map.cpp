#include <map>
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main() {

    // la chiave può essere un qualunque tipo comparabile
    map<char, int>  m;
    unordered_map<int, string> um;

    m['c'] = 300;
    m['a'] = 100;
    m['b'] = 200;

    // la mappa è ordinata per chiave crescente
    // in questo caso con i caratteri secondo il valore ascii

    for (auto [key, value] : m) {
        cout << key << " vale " << value << endl; 
    }
    // a vale 100
    // b vale 200
    // c vale 300

    // l'unordered_map ha accesso in O(1) in media
    // anche con valori sparsi
    um[0] = "ciao";
    um[2000000000] = "mondo";

    cout << um[0] << " " << um[2000000000] << endl;
    // ciao mondo

    return 0;
}

