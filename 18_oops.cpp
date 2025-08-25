#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#include <C:\Users\user\OneDrive\Desktop\c++\c++ begin\oops\class.cpp>
//basic value putting printing and some function running|| making object dynamically and statically


// int main(){
//     //object creation statically

    
//     student s1;
//     s1.age=45;
//     cout<<s1.age<<endl;
//     s1.call();                             //function calling from an object      function is in public modifier 

//     //OBJECT CREATION DNAMICALLY                               created in heap memory
    
//     student *s2=new student;
    
//     (*s2).age=18; 
//     (*s2).roll=6568;
//     (*s2).call();   

//     student s69(69);
//     s69.call();

//     student *sdawd=new student(4,34);
//     sdawd->call();


//     s2-> age=69;

//     s2-> call();

//     cout<<(*s2).age<<"\n"<<(*s2).roll<<endl;
//     delete s2,sdawd;
 
//     return 0;
// }

//running functions and giving variables to the functions in a class

// int main(){
//     student s1;
//     student *s2=new student;
//     s1.wriclgid(45);                      //clg id is a private property so we retrieve its value from the functions in the public property
//     cout<<"clgid="<<s1.getclgid()<<endl;
//     int id=s1.getclgid();
//     cout<<"yo"<<id<<"yo"<<endl;
//     s1.call();
//     s2->wriclgid(69);
//     cout<<"clgid"<<s2->getclgid()<<endl;
//     (*s2).call();
// }

// CONSTRUCTOR

// int main(){
    // student s1;
    // s1.call();

    // student s2;

    // student *s3=new student;
    // (*s3).call();

    // cout<<"PARAMATERIZED CONSTRUCTOR CALLED"<<endl;            //takes arguement
    // student s4(18);
    // s4.call();
     
    // student *s5=new student(20);
    // s5->call();

    // student *s6=new student(19,69696);

    // no matching constructor error* 
    // student s4;                    //when created constructor with no argument is commented out 
    

    // // THIS KEYWORD AND ADDRESS OF OBJECT
    // student s1(4500);
    // cout<<"the address of s1 is : "<<&s1<<endl;

// }

// int main(){
    // student s1(69,8008);
    // cout<<"s1 \t"; 
    // s1.call();
    // student s2(s1);              //copying s1 data into s2 using copy constructor  (only works when object is created)
    // cout<<"s2 \t"; 
    // s2.call();

    // student *s3=new student(19,101);
    // cout<<"s3\t";
    // s3->call();
    // student *s4=new student(*s3);
    // cout<<"s4\t";
    // s4->call();
    // student s5(*s3);
    // student *s6=new student(s5);
    // delete s3,s4,s6;

    // // copying values after the object is already created

    // student s1(10,101);
    // cout<<"s1:\t";
    // s1.call();
    // student s2(20,102);
    // cout<<"s2:\t";
    // s2.call();
    // student *s3=new student(30,103);         //student *s3=new student (s1);
    // cout<<"s3:\t";
    // (*s3).call();
    // s2=s1;
    // cout<<"s2:\t";
    // s2.call();
    // *s3=s1;
    // cout<<"s3:\t";
    // (*s3).call();
    // s2=*s3;
    // delete s3;                   //for deallocating s3 dynamically created
 

    //        // DESTRUCTORS


// } 

// int main(){

//     //      OOPS RECAP

//     student s1;               //constructor 1 is called
//     student s2(58);           //constructor 2 is called
//     student s3(58,1425);      //constructor 3 is called

//     student s4(s1);           // copy constructo r is called

//     s3=s1;                    // copy assignment operator used

//     student s5=s1;            // copy constructor is called

// }  



// //             FRACTION CLASSS

int main(){
    fraction f1(4,2);
    f1.simplify();
    fraction f2(3,2);
    f1.add(f2);
    f1.print();
    f2.print();
    cout<<"new"<<endl;

    // f1.multiply(f2);
    // f1.print();
    // f2.print();


    f1.multiply(&f2);
    f1.print();
    f2.print();

}
