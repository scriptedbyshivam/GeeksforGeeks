#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int a = 3;
    float b = 5.57;

    // calculate typeid for variable a and b in variables id1 and id2.
    string id1 =typeid(a).name() ;
    string id2 = typeid(b).name();

    // printing the typeid's
    cout << id1 << " " << id2 << endl;
}


/*

<typeinfo> — ye header file typeid() function ke liye chahiye hoti hai,
jo kisi variable ka data type batata hai.

typeid(a) — ye function a ke type ka information deta hai. and typeid(a) likhoge — wo ek object deta hai
.name() — ye us type ka ek short name (symbol) return karta hai.


*/
