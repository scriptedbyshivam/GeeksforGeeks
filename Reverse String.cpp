// User function Template for C++

// complete the function
// the function should return the reversed string
string reverseString(string &s) {
    // code here
    string reverse;
    for(int i = s.size()-1; i>=0;i--){
        reverse += s[i];
    }
    return reverse;
}

/*
Method to Solve -->

Hum ek naya string variable reverse bana rahe hain jisme hum ,
original string ka reversed version store karenge.


Ye loop piche se aage ki taraf chalega.
s.size() - 1 ka matlab hai last index.
Loop chalta rahega jab tak i >= 0 ho, yaani shuru se pehle tak.
i-- har baar index ko ek step piche le jata hai.

Har iteration mein, hum current character (s[i]) ko reverse ,
string ke end mein add kar rahe hain.
+= ka matlab hota hai append karna.


also remember the difference between ++ and +=

++  is a increment operator, yeh value ko badata hai.    
example: a = b ++        -->   if b =10
so a stores 10 and then b value is 11
Pehle a ko b ki value milti hai, fir b increment hota hai.


if a=  ++b;
agar b=10 hai toh,
isme a ki value 11 hogi aur b ki bhi value  11 hogi...

complex example by using prfix increament (++b) and postfix increment (b++)
example:
        int x = 5;
        x++; // x becomes 6
        int y = ++x; // x becomes 7, y becomes 7
        int z = x++; // z becomes 7, x becomes 8


+= isme value usssi chiz mai add hoti hai
example: 
        int a = 10;
        a += 5; // a becomes 15 (equivalent to a = a + 5)
        int b = 20;
        b += 3; // b becomes 23 (equivalent to b = b + 3)

        

*/



