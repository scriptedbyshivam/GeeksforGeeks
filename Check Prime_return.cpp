#include <iostream>
#include<cmath>
using namespace std;

int main() {
    // code here
    int n;
    cin>>n;
    
    if(n<=1){
        cout<<"False";
        return 0;
    }
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            cout<<"False";
            return 0; //Yahan loop aur program dono yahin ruk jaayenge
            
        }
    }
    cout<<"True";
    return 0;
}

/*
Misktakes in loop 
maine i<sqrt(n) chalaya tha, lekin loop 

return ke baare analysis
So, return likhne par loop nahi chalta rahega — program usi waqt ruk jaata hai.

break--> Loop ko rokta hai, Sirf loop se bahar aata hai

yaha sare condition ke liye loop work kar raha hai
eg: 9
sqrt(9)=3
loop 3 tak chalega
n%i==0;
9%2!=0
then, 9%3==0
condition right.


*/



