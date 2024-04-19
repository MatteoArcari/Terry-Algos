#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

void print(vector<int> &a) {
    for (auto x:a) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {

    vector<int> a = {10, 20, 30, 0, 100, 70, 40};

    // ordino l'array crescente
    sort(a.begin(), a.end());
    print(a);

    // ordino l'array decrescente
    sort(a.rbegin(), a.rend());
    print(a);

    // riempio l'array con 0
    fill(a.begin(), a.end(), 0);
    print(a);

    // riempio l'array con valori incrementali a partire da 1
    // a = {1, 2, 3, 4, 5, 6, 7}
    // serve #include <numeric>
    iota(a.begin(), a.end(), 1);
    print(a);

    // somma dell'array
    // serve #include <numeric>
    cout << "somma: " << accumulate(a.begin(), a.end(), 0) << endl;

    // massimo dell'array
    cout << "massimo: " << *max_element(a.begin(), a.end()) << endl;

    // minimo dell'array
    cout << "minimo: " << *min_element(a.begin(), a.end()) << endl;

    // SE L'ARRAY È ORDINATO:

    int x = 3;

    // primo alamento maggiore o uguale a x
    cout << *lower_bound(a.begin(), a.end(), x) << endl;

    // primo elemento maggiore di x
    cout << *upper_bound(a.begin(), a.end(), x) << endl;

    // ricerca binaria
    if (binary_search(a.begin(), a.end(), x) == true) {
        cout << "Nell'array è presente " << x << endl;
    } 

    /*
        Quando viene stampato il risultato mettendo prima un *
        significa che l'algoritmo restituisce un iteratore.
        È possibile usare direttamente l'iteratore al posto del
        valore omettendo *
    */

    // es setto -1 tutti i valori maggiori di x
    for (auto it = upper_bound(a.begin(), a.end(), x); it != a.end(); it++) {
        *it = -1;
    }
    print(a);

    return 0;
}

