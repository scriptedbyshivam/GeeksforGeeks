class Solution {
  public:
    void arrayTraversalReverse(int numbers[], int size) {
        // Code here
        for(int i=size-1; i>=0;i--){
            cout<<numbers[i]<<" ";
           
        }
    }
};

/*
Ye loop array ke end se start hota hai (size - 1 )se, aur 0 tak chalta hai.
Hum array ko ulta traverse kar rahe hain — last element se first tak.

Remember the to traversal of array this is also simliar to reverse of string 
same concept
*/
