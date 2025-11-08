#include <iostream>
using namespace std;

int fibonacci(int n) {
      if (n == 0) {
        cout << 0;
        return 0;
    }
    if (n == 1) {
        // cout << 1;
        return 1;//idar agar cout kara diya toh return value+ cout value dono add hokar print ho rahi hai
    }

    int a = 0, b = 1, c;
    
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}


/*

remember 

So the Fibonacci series starts like this:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, …

*/
