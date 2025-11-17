// User function Template for C++

// design a class with two constructor
// one default, the other parameterized

// code here
class User {
    public:
    string name;
    
    User(){
        cout<<"Default";
    }
    User(string name){
        this -> name= name;
       
    }
};