#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    int n = 10;

    // vector grande n con tutti gli elementi inizializzati a 2
    vector<int> v(n,2); 

    // la dimensione del vector diventa 20
    v.resize(2*n);

    // il vector diventa grande 6 e contiene gli elemeni 2 3 4 5 1 6
    v = {2,3,4,5,1,6};

    // scorro gli elementi per copia
    // x è una copia dei valori di v
    for (auto x:v) {
        cout << x << " ";
    }
    cout << endl;

    // scorro gli elementi per riferimento
    // x è un riferimento (quindi modificabile) ai valori di v
    for (auto &x:v) {
        x = -1;
    }
    // tutti gli elementi ora sono -1
    
    // aggiungo un 6 alla fine
    v.push_back(6);

    // tolgo l'ultimo elemento
    v.pop_back();

    // .size() -> dimensione attuale
    for (int i = 0; i < v.size(); i++) {
        v[i] = 10 * i;
        cout << v[i] << " ";
    }

    cout << endl;
    
    return 0;
}