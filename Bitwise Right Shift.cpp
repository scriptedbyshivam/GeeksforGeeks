void rightShift(int a, int b) {

    // just complete below statement
    int ans =a>>b;

        // print the result
        cout << ans << endl;
}
/*
Right shift operator:
Number ke bits ko right side shift karta hai.
Har shift ka matlab hota hai — divide by 2 (for positive numbers).

Right shift (>> n) ˜ Divide by 2^n (for positive numbers)
a>>b;
arthmetic form
a/(2^b)   yaha  ^   power hai.

Each right shift moves bits ek step right side aur leftmost bit me
0 fill hota hai (for unsigned or positive numbers).


*/
