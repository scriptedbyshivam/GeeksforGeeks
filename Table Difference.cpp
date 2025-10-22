// User function Template for C++

void difference(int n1, int n2) {

    // Write your code here
    int c[10];
    int d[10];
    int j=1;
    int y=1;
    for(int i=0;i<10;i++){
        
        c[i]=n1*j;
        // cout<<c[i]<<" ";
        j++;
        
        d[i]=n2*y;
        // cout<<d[x]<<" ";
        y++;
        
        
         cout<<c[i]-d[i]<<" ";
        
    }    

}

/*
alternate solution

void difference(int n1, int n2) {
    for (int i = 1; i <= 10; i++) {
        cout << (n1 * i - n2 * i);
        if (i != 10) cout << " "; // Avoid space after the last number
    }
}

*/
