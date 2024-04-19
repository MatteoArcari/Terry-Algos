#include <stack>
#include <iostream>
using namespace std;

int main() {

    ////////////////////
    ///     PILA     ///
    ////////////////////

    stack<int> s;

    // aggiungo un elemento in cima
    s.push(10);
    s.push(20);
    s.push(30);

    // s = {30, 20, 10}
    //      ^
    //     top

    // tolgo l'elemento in cima
    s.pop();

    // leggo l'elemento in cima
    int n = s.top();

    // la pila è vuota?
    if (s.empty() == true) {
        cout << "La pila è vuota" << endl;
    }
}