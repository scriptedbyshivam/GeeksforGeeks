// #include <cmath>

bool isPrime(int n)
{
    if(n<2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    
    
}

int nextPrime(int n) {
    // if (n <= 1)
    //     return 2; // first prime number

    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}


/*

while(!isPrime(next)) { next++; }
Jab tak next prime nahi hota, tab tak next ko 1-1 badhate jao.
isPrime(next) check karta hai ki kya current number prime hai ya nahi.
Jaise hi prime milta hai, loop ruk jaata hai.




working flow of loop with bool

nextPrime() function ke andar, isPrime(next) har baar check karta hai ki next wali value prime hai ya nahi.
Agar wo prime nahi hoti ? to next++ hota hai (next number check hota hai).
Jab tak prime number milta nahi, tab tak ye loop chalta rehta hai.

*/
