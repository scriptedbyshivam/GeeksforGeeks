class Solution {
  public:
    int factorial(int n) {
        // code here
        int j=1;
        for(int i=1;i<=n;i++){
            
            j=j*i;
        }
        return j;
    }
};






// alternate problem solution++

// int nFactorial(int n) {
//     int ans = 1;

//     // Write your code here
//     for(int i=1;i<=n;i++){
//         ans*=i;
//     }

//     return ans;
// }

