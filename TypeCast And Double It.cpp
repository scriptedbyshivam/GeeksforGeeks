#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    // getline use for reading enitre lines include spaces.
    int n;
    n = stoi(num);
    // using stoi to convert string ? int
    cout<<n *2;
    // TypeCast to int double it and print

    return 0;
}

