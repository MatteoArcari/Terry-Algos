#include <queue>
#include <iostream>
using namespace std;

int main() {

    ///////////////////////////////
    ///     CODA A PRIORITÀ     ///
    ///////////////////////////////

    priority_queue<int> pq;

    // aggiungo un elemento in coda
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(100);

    // pq = {100, 30, 20, 10}
    //        ^   
    //       top

    // tolgo l'elemento in cima
    // è il più grande di quelli nella coda
    pq.pop();

    // leggo l'elemento in cima
    // è il più grande di quelli nella coda
    int n = pq.top();

    // la coda è vuota?
    if (pq.empty() == true) {
        cout << "la coda è vuota" << endl;
    } else {
        while (pq.empty() == false) {
            pq.pop();
        }
    }

    // Per ordinare crescente:
    // Opzione 1: inserisco e leggo gli elementi negativi

    int a = 10, b = 20, c = 30;
    pq.push(-a);
    pq.push(-b);
    pq.push(-c);

    // pq = {-10, -20, -30}

    n = -pq.top();
    cout << n << endl; // 10

    // Opzione 2: costruttore della coda

    priority_queue<int, vector<int>, greater<int>> pq_cresc;

    pq_cresc.push(a);
    pq_cresc.push(b);
    pq_cresc.push(c);

    // pq = {10, 20, 30}

    n = pq_cresc.top();
    cout << n << endl; // 10

    return 0;
}

