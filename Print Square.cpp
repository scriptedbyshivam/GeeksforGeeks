// User function Template for C++

void square(int s) {
    // code here
    // int i;
    // int j;
    for(int i=0; i<s;i++){
        for(int j=0; j<s; j++){
            if(i==0||i==s-1||j==0||j==s-1){
                // return "*";
                cout<<"* ";
            }
            else{
                // return " ";
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


/*
Explaination of code-->

for(int i = 0; i < s; i++) {
Ye outer loop hai — ye har row ke liye chalega.
i 0 se s-1 tak jaayega.

for(int j = 0; j < s; j++) {
Ye inner loop hai — ye har column ke liye chalega har row ke andar.
j 0 se s-1 tak jaayega.

if(i == 0 || i == s-1 || j == 0 || j == s-1)
Ye condition border check karti hai:
i == 0 ? first row
i == s-1 ? last row
j == 0 ? first column
j == s-1 ? last column
Agar haan, toh border ke star print karo.

else { cout << " "; }
Agar hum border pe nahi hain (yaani andar ke cells hain), 
toh do spaces " " print karo.
Isse pattern hollow dikhega.


cout << endl;
Har row ke baad ek nayi line mein jaane ke liye endl use kiya gaya hai.
*/
