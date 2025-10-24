// User function Template for C++

int gcd(int a, int b) {
    // code here to calculate and return gcd of a and b
   if(b==0){
       return a;
       
       
   }
   return gcd(b,a%b);
}


/*
to solve this problem using Euclid’s Algorithm

Jab tak b 0 nahi hota, hum a ko b se replace karte hain,
aur b ko a % b (remainder) se replace karte hain.
Jab b finally 0 ho jata hai, a hi GCD hota hai.




return gcd(b, a % b);
Ye line recursion use karti hai.
Matlab function khud ko dubara call karta hai — lekin naye arguments ke sath.
Pehle hum a aur b le rahe the.
Ab hum call karte hain gcd(b, a % b)
b ban gaya naya 
a % b (remainder) ban gaya naya b

Yeh process tab tak chalta rahta hai jab tak b == 0 na ho jaye.
*/
