// User function Template for C++

void invTriangleWall(int s) {

    // Write your code here
    for(int i=s;i>0;i--){
       
        
        for(int j=0;j<i;j++){
             cout<<"* ";
         
        } cout <<endl;
            
            
    }
            
            
}


/*
remember how this loop working and syntax (>)
for(int i=s;i>0;i--)
*/









//alternate solution for alternate problem but topic is same 


/*

class Solution {
  public:
    void printPattern(int n) {
        // code here
        for(int i=n;i>0;i--){
            for(int j=1;j<=i;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};

*/