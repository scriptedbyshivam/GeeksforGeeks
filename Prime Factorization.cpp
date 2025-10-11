void printPrimeFactorization(int n) {
    // code here
    
    
      if (n <= 1){
        return;
    }
    for (int i = 2; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
            n = n / i;
            i = 1;
        }
    }
}
/*
n <= 1	Chhoti value ka factorization nahi hota
for (i = 2; i <= n; i++)	Har number se divide karna check karte hain
if (n % i == 0)	Agar divide hota hai, toh wo factor hai
n = n / i	Factor hata kar n ko chhota banate hain
i = 1	Wapas 2 se shuru karte hain, same factor baar baar pakadne ke liye*/





//niche wala code bhi sahi ,par gfg isse accept nahi kar pa raha hai

//     if(n<=1){
//         return ;
//     }
//     for (int i = 2; i <= n; i++) {
//         while (n % i == 0) {
//             cout << i << " ";
//             n = n / i;
//         }
//     }
//     cout << endl;
// }


//yaha pr int i for loop
//yaha par while loop tab tak chalta rahega jab tak iski condition false nahi ho jati
//example:- 100 
/* 100%2==0
    phir n=n/i;
again while loop chalega 50%2==0
    phir n=n/i;
agin while loop condition cheack hoga ,25%2!=0;
condition false, now go to for loop again and ab i++ hoga then 
ab i=3 par ayse hi condition check hogi*/

