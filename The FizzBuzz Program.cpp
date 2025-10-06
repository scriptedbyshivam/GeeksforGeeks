#include <iostream>
using namespace std;

int main() {
    // code here
    int i;
    cin>>i;
    if(i%3==0 && i%5==0){
        cout<<"FizzBuzz";
    }
    else if(i%3==0){
        cout<<"Fizz";
    }
    else if(i%5==0){
        cout<<"Buzz";
    }
    else{
        cout<<i;
    }
    return 0;
}





// void fizzBuzz(int number) {


//      if(number % 3 == 0 && number % 5 == 0){
//     cout<<"FizzBuzz"<<endl;

    
// }

// else if(number % 3 == 0 )
// {
//     cout<<"Fizz"<<endl;
// }


// else if(number % 5 == 0 )
// {
//     cout<<"Buzz"<<endl;
// }

 

// else{
//     cout<<number<<endl;
// }

// }

