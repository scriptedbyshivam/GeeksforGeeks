void utility(int number) {
    // Write the if, else if, else statements below
    if(number<10){
        cout<<"Small"<<endl;
    }
    else if(10<number&&number<100){
        cout<<"Number"<<endl;
        
    }
    else if(number>100){
        cout<<"Big"<<endl;
    }
}
/*Remember the difference b/w &&,||   */










//alternate solution for alternate problem but topic is same 


/*

#include <iostream>
using namespace std;

int main() {
    // code here
    int i;
    cin>>i;
    
    if(i<10){
        cout<<"Small";
    }
    else if(i>100){
        cout<<"Big";
    }
    else if(10<i<100){
        cout<<"Number";
    }

    return 0;
}

*/