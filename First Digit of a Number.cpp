int firstDigit(int n) {
    // code here
    while (n >= 10) {
        n = n / 10;
    }
    
    /*here in code
    while (n >= 10) ka matlab hai:
    Jab tak n 10 ya usse bada hai, tab tak loop chalta rahega.
    jasie hi chota  number aayega loop chalna stop 
    
    loop mai kya ho raha hai;
    Jab hum kisi number ko baar-baar 10 se divide karte hain 
    (integer division), to last digit remove hoti jaati hai.

    EXAMPLE:

    976 / 10 = 97

    97 / 10 = 9

    Ab 9 < 10, to loop ruk jaata hai.
    Is tarah, loop ke baad n ke paas sirf first digit bacha hota hai.
    */
    
    return n;
}
