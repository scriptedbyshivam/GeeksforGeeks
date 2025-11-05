#include <iostream>
#include<math.h>
using namespace std;

//Position this line where user code will be pasted.
int main() {
    int a, n;
    cin >> a >> n;
    int r = 2;

    // code here
    double an;
    // int an; integer mai jayda badi value store nahi ho sakti isliye double lena h values ke liye 
    
    an =a*pow(r,n-1);
    cout<<an;

    return 0;
}



/*
remember

pow(x, y) means (x raised to the power y).    ====>x^y

write pow(r, n - 1) inside parentheses.
*/
