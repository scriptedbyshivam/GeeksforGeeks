
class Solution {
  public:
    string compareNum(int A, int B) {
        // code here
        if(A>B){
            return to_string(A) +" is greater than "+ to_string(B);
        }
        else if(A==B){
            return to_string(A) +" is equal to "+to_string(B);
        }
        else if(A<B){
            return to_string(A) +" is less than "+to_string (B);
        }
    }
};


/*
remember
to_string() ek function / method hota hai jo non-string 
data (jaise number, list, object, etc.) ko string (text) me convert karta hai.


uses
Jab number ko text ke sath print karna ho
cout << "Value is " + to_string(num);
Jab kisi function ko string input chahiye, par hamare paas number ho
and jab kisi string ke sath jodna ho text ya string banake


+ ka use
yaha + ka use string concatenation (strings ko jodne) ke liye use hota hai


*/

