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
*/


