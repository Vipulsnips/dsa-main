#include <bits/stdc++.h>
using namespace std;
// class student{
//     public:
//     int age;
//     char *name;
//     int *a;
//     student(int age,char *name){
//         this->age=age;

//         //shallow copying (not recommended)            address of first element is copied
//         // this->name=name;        //pointing towards the address of first index of char array 
//         //deep copying                  //new arr is made that is complete copy of given arr
//         this->name=new char[strlen(name)+1];
//         strcpy(this->name,name);
//     }

//     // creating copy constructor having deep copy
//     student(student const & s  ){             //&[referencing] is done to avoid infinity loop of copy constructor calling copy constructor|||const to avoid any changes such as change in age 
//         this->age=s.age;
//         // this->name=s.name;                //done by inbuilt copy constructor [does shallow coppy]

//         //deep copy

//         this->name=new char[strlen(s.name)+1];
//         strcpy(this->name,s.name);
//     }

//     void print(){
//         cout<<name<<"\t"<<age<<"\t"<<endl;
//     }
// };

// for 3rd main function

    
// class student{
//     public:
//     int age;
//     int const roll;
//     int &x=age;                   // to get int &x=age;

//     //            INITIALISATION LIST CREATION TO CREATE AND ASSIGN VALUES TO CONST VARIABLES;
//     student();
//     student(int r): roll(r){
//     }

//     student (int r,int age): roll(r),age(age),x(this->age){}                  //no need to add this keyword in age format as it is already differentiated

//     void print1(){
//         cout<<age<<"\t"<<roll<<"\t"<<endl;
//     }
//     void print(){
//         cout<<age<<"\t"<<roll<<"\t"<<x<<endl;
//     }

// };


//-----------------------------static member---------------------


class student{

    // static int totalstudents;
    public:
    int roll,age;
    static int totalstudents;                    //static member h totalstudents which means vo sirf class me stored rhega and copy nhi bnegi uski
    static int gettotal(){
        return totalstudents;
    }
    student(){
        totalstudents++;
    }
}; 
int student :: totalstudents=0;                 //initialisation will be done outside the class