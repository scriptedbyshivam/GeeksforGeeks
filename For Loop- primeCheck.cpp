class Solution {
  public:
    string isPrime(int n) {

        // Code here
        if(n<=1){
            return "No";
        }

        for (int i = 2; i <= sqrt(n); i++)
        //idar sqrt root is example v49= 7...
        //using for 2 to n-1
        /*
        Check: 5 % 2 -> remainder = 1 -> Not divisible -> skip return false
        Loop ends because next i = 3 -> 3 > 2.236 -> loop condition fails
        isme ek bhi bar loop chalega only for i=2
        */
        {
            if(n%i==0)
            {
                return "No";
            }
            }
            return "Yes";
            
            // Write your logic here
            // Return "Yes" if n is prime, else return "No"
            /*n is prime only if it is not divisible by any i.
            We will not reach till n and 1 is already discarded*/

            // return  Yes if n is a prime number ,else return No
        }
    };
