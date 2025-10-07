// User function Template for C++
// Question Asking:- Find karo ki n din pehle kaunsa day tha, agar aaj d hai.

int nthDay(int d, int n) {
return (d-(n % 7)+7)%7;


/*n % 7: 
Because the week repeats every 7 days, going back n days is 
the same as going back n % 7 days.
Example: Going back 19 days is the same as going back 19 % 7 = 5 days.*/

// d - n: dino ko peeche le jaata hai

// +7: negative hone se bachata hai

// %7: taaki answer 0 se 6 ke beech hi aaye


    // write your code here
    
}
