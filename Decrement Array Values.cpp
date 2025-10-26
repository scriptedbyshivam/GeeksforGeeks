class Solution {
  public:
    int* decrementArrayElements(int arr[], int size) {
        // Code here
        for(int i=0;i<size;i++){
            arr[i]=arr[i]-1;
            // cout<<arr[i]<<" ";
            // return arr[i] " ";
        }
        return arr;
        
    }
};
/*explaination
function ka return type int* (pointer to int) likha hai,
iska matlab compiler expect karega ki, integer array ka address (pointer) return karege.

Lekin  function me koi return statement hi nahi hai,
toh compiler warning/undefined behavior deta hai.






cout << arr[i] << " ";
Ye galat nahi hai, lekin agar question bolta hai "return the array",
toh print nahi karna chahiye — return karna chahiye.





// return arr[i] " ";
Ye syntactically galat hai.
return ek hi value return karta hai, string ya multiple cheeze ek sath nahi.
Agar array return karna hai toh return arr; likhna hota hai,
kyunki arr khud array ka address hota hai.





Final mistake and good approach to solve
1.Function me hum har element ko arr[i] = arr[i] - 1 se 1 kam kar rahe hain.

2.Phir hum same array ka address return arr; se return kar dete hain.
C++ me arrays by address (pointer) ke through pass hote hain.
Matlab agar function ke andar array ko badalte ho,
to original array bhi badal jata hai (copy nahi banti).

3.main() me hum function ko call karte hain,
aur result array ko res pointer me store karte hain.



*/
