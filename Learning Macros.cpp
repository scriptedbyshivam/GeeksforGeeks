#define MULTI(x,y) (x*y)
void macros(int a, int b) {
    // See the macro defined at the top of the code. Use that macro to find a*b
    // Use only macro to complete this task
    int result = MULTI(a,b);
    /*Defination->Macros are shortcuts or placeholders that the preprocessor replaces before the code is compiled. 
    They are defined using #define and can be used to create constants.
    
    
    Working->
    Ye ek function-like macro hai.

    Jab aap code mein MULTI(a, b) likhte ho, 
    toh compiler isko directly replace kar deta hai:

    ((a) * (b))


    Macro ka fayda ye hai ki aapko baar-baar multiplication 
    ka code likhna nahi padta. Bas macro call kar lo — ho gaya kaam.

    Is macro mein x aur y properly use ho rahe hain. 
    Ye best practice ke according sahi design hai.
    */
    
    cout<<result;
    
    cout << endl;
}
