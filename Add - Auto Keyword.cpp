#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    long c;
    cin >> a >> b >> c;
    
    auto ans =a+b+c;
    
    
    // ek yeh bhi tarika hai pr suitable nahi.
    // double ans;
    // ans=a+b+c;

    // add these variables into ans variable

    // printing the ans
    cout << ans << endl;
    return 0;
}

/*

auto C++ mein ek type deduction(natija) keyword hai.

(deduction meaning -->natija,result)

Matlab: compiler khud decide karta hai ki variable ka type kya hona chahiye, 
based on the value you assign.
*/

