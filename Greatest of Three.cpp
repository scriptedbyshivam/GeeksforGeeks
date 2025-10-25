#include <iostream>
using namespace std;

int main() {
    // code here
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<a;
    }
    else if(b>a&&b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }

    return 0;
}
/*
&& mai dono hi condtion sahi hona chahihye tabhi vo loop aage work karega
|| mai agar ek bhi condition sahi hui toh vo loop ko work kar dega
*/

