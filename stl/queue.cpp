#include <queue>
#include <iostream>
using namespace std;

int main() {

    ////////////////////
    ///     CODA     ///
    ////////////////////

    queue<int> q;

    // aggiungo un elemento in coda
    q.push(10);
    q.push(20);
    q.push(30);

    // q = {10, 20, 30}
    //      ^   
    //    front 

    // tolgo l'elemento in testa
    q.pop();

    // leggo l'elemento in testa
    int n = q.front();

    // la coda è vuota?
    if (q.empty() == true) {
        cout << "la coda è vuota" << endl;
    }

    return 0;
}

