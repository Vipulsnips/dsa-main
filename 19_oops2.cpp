#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#include "C:\Users\user\OneDrive\Desktop\c++\c++ begin\oops\class.cpp"
#include "C:\Users\user\OneDrive\Desktop\c++\c++ begin\oops\class_2.cpp"



//-----------SHADOW AND DEEP COPYING--------------------------------
// int main(){
//     int age;cin>>age;
//     char name[]="abcd";
//     int arr[]={1,2};
//     student s1(age,name);
//     s1.print();
 
//     name[3]='e';
//     student s2(age,name);
//     s1.print();        //changes in char array will be reflected afterwards too this is called shadow copying |||| but in deep copying the changes will be made to respective objects 
//     s2.print();               
      
//     student s3(s1);           //copy constructor
//     s1.print();
//     s3.print();
//     return 0;
// }   
  


// int main(){
//     int age;cin>>age;
//     char name[]="abcd";
//     student s1(age,name);
//     s1.print();
//     student s2(s1);           //copy constructor
//     s2.name[0]='V';           //shallow copying in copy constructor
//     s1.print();
//     s2.print();
// }



//---------------------------------------------initialisation list for reference variable and const variable 

// int main(){
    // student s1;                    //gives error at initialisation dues to const int in public area
    // s1.age=40;
    // s1.roll=55;                     //assigning value to read only member gives us our 2nd error



    //creating initialisation list to deal with the above error 
    // student s1(69);           
    // s1.age=40;
    // s1.print1();

    //  INITIALISATIONN

    // student s1(69,40);
    // s1.roll++;                    //error: increment  of read-only member 'student::roll'
    // s1.roll=169;                  //error: assignment of read-only member 'student::roll'
    // s1.print();

// }


//---------------------------------------------------------------------constant objects and their working

// int main(){
//     const fraction f3;                                             // read only function any changes or initialisation will give error 
//     // cout<<f3.getdenom()<<"\t"<<f3.getnum()<<endl;              //gives error as getdenom and num are not const func so value of object can be changed thro them that's why they dontrun
//     // f3.setnum(45);                                             // wont run as we cant change value of const object


//     //  // making get and set function constant; 
//     cout<<f3.getdenom()<<"\t"<<f3.getnum()<<endl;  
//     // f3.setnum(45);                                           //wont run even after making the func const as object is read only
//     f3.print();      
// }

//---------------------static memeber-----------------------

// int main(){
//     student s1;
//     cout<<s1.age<<" "<<s1.roll<<endl;
//     cout<<student :: totalstudents<<endl;
//   // cout<<s1.totalstudents<<endl;                     //logically incorrect

//     // s1.totalstudents=20;                              //logically incorrect
//     // student s2;
//     // cout<<s2.totalstudents<<endl;                      //logically incorrect
 
//     student s2,s3,s4,s5;
//      cout<<student :: totalstudents<<endl;              //counting no of students using construction and incrementing ts by 1 everytime a obj is created
//     cout<<student :: gettotal()<<endl;

// }

//------------------------Operator Overloading-------------------
// int main(){
//     fraction f1(15,2);
//     fraction f2(5,3);
//     fraction f3=f1.add(f2);
//     fraction f4=f1+f2;                             //this is called operator overloading || needs some simple modification and uses "operator+" as func name
//     fraction f5=f1*f2;                              //f1 is this and f2 is argument              
//     f1.print();
//     f2.print();
//     f3.print();
//     f4.print();
//     f5.print();
//     if(f1==f2){
//         cout<<"equal"<<endl;
//     }
//     else{
//         cout<<"Not equal"<<endl;
//     }
// }

//------------------------Operator Overloading 2 ------------------

// int main(){
//     fraction f1( 2,5);
//     f1.print();
//     ++f1;
//     f1.print();
// }


