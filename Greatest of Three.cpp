// User function Template for C++

int find_greatest_number(int a, int b, int c) {
    // Write your code here..
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else {
        return c;
    }
}
// remember the >= to condtion 
// example: input: 10
//                 10
//                 4






//alternate way but prefer above one








// #include <iostream>
// using namespace std;

// int main() {
//     // code here
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>b&&a>c){
//         cout<<a;
//     }
//     else if(b>a&&b>c){
//         cout<<b;
//     }
//     else{
//         cout<<c;
//     }

//     return 0;
// }



/*
&& mai dono hi condtion sahi hona chahihye tabhi vo loop aage work karega
|| mai agar ek bhi condition sahi hui toh vo loop ko work kar dega
*/


