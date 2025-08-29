//access modifiers  -->public,private,protected
#include <bits/stdc++.h>
using namespace std;
// class student{

    
//     public: 

//     int age,roll;

//     private:

//     int clgid=2500;
    
//     public:
//     //CREATED CONSTRUCTOR UNLIKE THE DEFAULT ONE
//     //CONSTRUCTOR IS ALWAYS CALLED ONCE WHEN AN OBJECT IS CREATED
//     student(){
//         cout<<"constructor 1 called"<<endl;
//         cout<<"this:"<<this<<endl;
//     }
//     //CONSTRUCTOR WITH ARGUMENT                 PARAMATERIZED CONSTRUCTOR
//     student(int age){
//         cout<<"constructor 2 called"<<endl;
//         cout<<"this:-"<<this<<endl;
//         (*this).age=age;                               //"this" is dereference here as it acts as a pointer and stores address of the obj

//     }
//     student(int a,int c){
//         cout<<"CONSTRUCTOR 3 IS CALLED||"<<endl;
//         age=a;
//         clgid=c;

//     }

//     void call(){  
//         cout<<age<<" \t"<<clgid<<"\t"<<roll<<endl;
//     }
// //          accessing private property
//     int getclgid(){                            //this function is within the class so it can access the private enter
//         return clgid;
//     }  
//     void wriclgid(int a){                     //writing on private properties
//         clgid=a;
//     }

//                                     //importace of private--- you can ask for password for changes or make some constraints
//     // void setclgid(int a,int password){
//     //     if (password!='123'){
//     //         return;
//     //     }
//     //     if(a<1){
//     //         return;
//     //     }
//     //     clgid=a
//     // }

//     //                                                 DESTRUCTOR

//     ~student(){                                         //for deallocating all the dynamically created objects and runs when the scope of object is about to be finished
//         cout<<"Destructor called|| haha"<<endl;
//     }

    
// }; 


//                                                           fraction class

class fraction{
    private:
    int numerator,denominator;
    public:
    fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
     int getnum ()const{
        return numerator;
    }
     int getdenom ()const{
        return denominator;
    }
    void setnum(int n) 
    {
        numerator=n;
    }
    void setdenom(int d)
    {
        denominator=d;
    }
    void print()const{
        cout<<numerator<<"/"<<denominator<<endl;

    }
    fraction(){}
    void simplify(){
        int gcd=1;
        int low=min(numerator,denominator);
        for(int i=1;i<=low;i++){
            if(numerator%i==0 && denominator%i==0){
                gcd=i;
            }
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }
    // void add(fraction f2){                                     //(fraction const &f2)  passed thru ref variable no changes can be made on the original f2
    //     int lcm=denominator*f2.denominator;                  //lcm=this->denominator*f2.denominator;
    //     int x=lcm/denominator;
    //     int y=lcm/f2.denominator;
    //     numerator=(x*numerator)+(y*f2.numerator);              ////numerator=(f2.denominator*numerator)+(denominator*f2.numerator);
    //     denominator=lcm;
    //     simplify();
    // }
    fraction add(fraction const &f2) const {                 //(fraction const &f2)  passed thru ref variable no changes can be made on the original f2
        int lcm=denominator*f2.denominator;                  //lcm=this->denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        fraction f3(x*numerator+y*f2.numerator,lcm);
        f3.simplify();
        return f3;
    }
    fraction operator*(fraction const &f2)const{            //we added const here as we are not changing "this" value
        int n=this->numerator*f2.numerator;
        int d=this->denominator*f2.denominator;
        fraction fnew(n,d);
        fnew.simplify();
        return fnew;
    }
    bool operator==(fraction const &f2) const{              //we added const here as we are not changing "this" value            
        return (numerator==f2.numerator && denominator==f2.denominator);
    }
    fraction operator+(fraction const &f2) const{             //we added const here as we are not changing "this" value                                   
        int lcm=denominator*f2.denominator;                
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        fraction f3(x*numerator+y*f2.numerator,lcm);
        f3.simplify();
        return f3;
    }
    // void multiply(fraction const &f2){                      //using ref variable &
    //     numerator=numerator*f2.numerator;
    //     denominator=denominator*f2.denominator;
    //     simplify();
    // }
    void multiply(fraction const *f2){
        numerator=numerator*(*f2).numerator;
        denominator=denominator*(*f2).denominator;             //using pointers 
        simplify();
    }
    // pre increment
    // void operator++(){
        //     this->numerator += this-> denominator;
        //     simplify();
        // }    
    // fraction& operator++ (){
    //     this->numerator += this-> denominator;
    //     simplify();
    //     return *this;
    //     }
    // };


    //----------------post increment
    fraction operator++(int){
        fraction fnew(numerator,denominator);
        numerator+=denominator;
        simplify();
        fnew.simplify();
        return fnew;
    }
    //-------------------+= operator --------------------
    fraction& operator+=( fraction const &fnew){
        int lcm=denominator * fnew.denominator;
        int x=lcm/denominator;
        int y=lcm/fnew.denominator;
        numerator = (x*numerator + y *fnew.numerator);
        denominator= lcm;
        simplify();
        return *this;
    }

};