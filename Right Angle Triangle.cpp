// User function Template for C++

void triangleWall(int s) {
    for (int i=0;i<s;i++){
        
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }cout<<endl;
    }

    // Write your code here
    
}



//alternate solution for alternate problem but topic is same 

/*

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // print right angle triangle of size n
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }cout<<endl;
    }

    return 0;
}



*/