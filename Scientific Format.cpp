#include <iostream>
using namespace std;

int main() {
    double a;
    cin>>a;
    cout.precision(4);
    cout<<fixed<<scientific<<a;
    return 0;
    // code here
    

    return 0;
}

/*
cout.precision(n);
Ye decide karta hai ki number ko print karte waqt kitne digits dikhaye jayenge.
Lekin iska behaviour fixed aur scientific ke sath badal jata hai:

Normal MAi 
Precision = total significant digits

Example:
cout.precision(4);
cout << 123.456;

Output:
123.5








Fixed Ke Sath
Precision = decimal ke baad ke digits

Example:
cout << fixed << setprecision(4);
cout << 123.456;


Output:
123.4560







Fixed Ka Use

fixed = decimal-point format
Number ko normal decimal format me rakhta hai.
Precision ka matlab = decimal ke baad ke digits.


Example:
cout << fixed << setprecision(3);
cout << 12.34567;


Output:
12.346








scientific = scientific notation (exponential form)

Format:
a.bcd × 10^power  
? a.bcde+xx



*/
