// User function Template for C++
bool prime(int num){
    if(num<2){
        return 0;
    }
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0){
            return 0;
        }
    }
    return 1;
    
}

/*boolean ka example 
isprime(5) ? returns 1 (true)
isprime(6) ? returns 0 (false)
*/



int nextPrime(int n) {
    int nxtprime=n+1;
    while(1){
        if(prime(nxtprime)){
            return nxtprime;
        }
        nxtprime++;
        
    }
    
    
    // code here to find next prime number
    // return next prime number
}
    
/*
aproaching a the solution 

nxtprime ko n + 1 se start karte hain (kyuki hume next prime chahiye, 
n khud nahi).
Infinite loop (while(1)): yani yeh loop tab tak chalta rahega jab tak andar se return ya break nahi hota.
Har baar prime(nxtprime) check hota hai.
Agar true (yaani prime) mila, to usi number ko return kar dete hain.
Agar nahi mila, to nxtprime++ karke next number check karte hain.
Yeh loop tab tak chalta rahega jab tak next prime number nahi mil jaata.


analysis-->
Jab ek function dusre function ko condition check ke liye call karta hai,
aur woh condition sirf true/false decide karti hai,
to use function ka return type bool hota hai.
    
*/
    

