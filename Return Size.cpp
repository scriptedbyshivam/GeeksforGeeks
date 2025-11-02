#include <iostream>
using namespace std;

int main() {
    int x = 2;
    double y = 3.5;
    char z = 'g';
    int a=sizeof(x);
    int b=sizeof(y);
    int c=sizeof(z);

    // store the size of the variables into a, b, c variables;

    // printing the size of the variable x.
    cout << a << " " << b << " " << c << endl;
    return 0;
}

/*
remember agar integer , character , float, double ki size chahiye toh sizeof operator use hota hai

string ke liye sizeof operator use nahi hota hai 
string ke liye stringname.size(); ya stringname.length(); use hota hai

reason:-
sizeof sirf memory size batata hai,
na ki string ke characters ka count.

C++ string ek object hai, jisme pointers aur internal data hote hain —
isliye sizeof us object ka size deta hai, na ki text ka.

*/
