// User function Template for C++

void utility() {

    // declare the variable count here
    static int count =0;//ise global variable banake bhi use kar sakte hai 

    // increases the value of count by 1
    // for(int i=1;i<=n;i++){
        
    // }
    count++;

    // print count
    cout << count;
}


/*
remember:

Static variable ka matlab:
Ye sirf ek baar initialize hota hai (function ke first call par).
Iska value function ke multiple calls ke beech preserve rehta hai( to wo variable sirf ek hi baar memory me banta hai,
aur uska value function ke multiple calls ke beech bhi yaad rehta hai.).
Matlab agar function baar-baar call hota hai, to count reset nahi hota, balki apni purani value yaad rakhta hai.
*/
