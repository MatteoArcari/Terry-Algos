#include <set>
#include <unordered_set>
#include <iostream>
using namespace std;

int main() {

    // la chiave può essere un qualunque tipo comparabile
    set<string>  s;
    unordered_set<int> us;

    // il set non contiene duplicati 

    s.insert("mario");
    s.insert("serena");
    s.insert("mario");
    s.insert("alberto");

    // il set è ordinato per chiave crescente
    // in questo caso le stringhe in ordine lessicografico

    for (auto nome : s) {
        cout << "ciao " << nome << endl;
    }
    // ciao alberto
    // ciao mario
    // ciao serena

    cout << "Ci sono " << s.size() << " elementi" << endl;
    // Ci sono 3 elementi

    // unordered_set come il set ma gli elementi non sono ordinati
    // è mediamente più veloce del set

    return 0;
}

