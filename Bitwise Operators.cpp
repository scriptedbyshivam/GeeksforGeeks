#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int d = a^a;
    int e = c^b;
    e = ~e;
    int f = a&b;
    int g = c|(d);
    
    cout<<d<<" "<<e<<" "<<f<<" "<<g<<endl;
    
    /*
    In C+, Bitwise Operators are the operators that are ,
    used to perform bit-level operations on the integers. While performing
    these operations, integers are considered as sequences of binary digits
    */
    
    
    //here using of Binary numbers
    
    // Bitwise XOR (^)
    //Bitwise OR (|)
    //Bitwise AND (&)
    //Bitwise NOT (~)
    //Left Shift (<<) : do zero add karna hai left side  isme agar a=1,b=2; 
    //a<<b toh a*(b^b) yaha ^ --> power hai 
    //yese hi hoga Right Shift (>>)
    //isme right side zero add karna hai jitni digit hai di hogi
    //if a=16 and b=2 then a>>b = 4
    //isme a/(b^b)     --> yaha b ki power b hai


    return 0;
}
