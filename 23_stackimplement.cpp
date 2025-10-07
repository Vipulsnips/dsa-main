#include <bits/stdc++.h>
using namespace std;
#include "23_stack.cpp"
// int main(){
//     int n;
//     cin>>n;
//     Stackusingarray s(n);
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     cout<<s.top()<<" "<<s.size()<<endl;
//     cout<<s.pop()<<" "<<s.isempty()<<endl;
// }
//-----------------------------------------making it dynamic---------------------------
// int main(){
//     Stackusingarray<int> s;
//     //initial size is 4 which gets double after getting full each time
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     cout<<s.top()<<" "<<s.size()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<" "<<s.size()<<" "<<s.isempty()<<endl;
// }

// ------------------------------------------TEMPLATE --------------------------
// int main(){
    // using different dataypes as required, better than making new classes for each dataype
    // Pair <int> p1;
    // p1.setx(10);
    // p1.sety(1);
    // cout<<p1.getx()<<" "<<p1.gety()<<endl;
    // Pair <char,char> p2;
    // p2.setx('v');
    // p2.sety('r');
    // cout<<p2.getx()<<" "<<p2.gety()<<endl;
    // Pair <int,float> p3;
    // p3.setx(100.3);                       //implicit conversion will occur here
    // p3.sety(100.3);
    // cout<<p3.getx()<<" "<<p3.gety()<<endl;

    // ---------------------NESTED PAIR
    // Pair < Pair < int,int >  , int> p1;
    // p1.sety(15);
    // Pair<int,int> p2;
    // p2.setx(5);
    // p2.sety(10);
    // p1.setx(p2);
    // //---------------------------printing out
    // cout<<p1.getx().getx()<<" "<<p1.getx().gety()<<" "<<p1.gety()<<endl;
// }

//--------------------------------stack using linked list------------------------
// int main(){
//     // Stack <int > s1;
//     // s1.push(10);
//     // s1.push(10);
//     // s1.push(10);
//     // s1.push(10);
   
//     // cout<< s1.pop()<<" "<<s1.top()<<" "<<s1.getsize()<<" "<<s1.isempty()<<endl;
//     Stack <char > s1;
//     s1.push(101);
//     s1.push(102);
//     s1.push(65);
//     s1.push(97);
   
//     cout<< s1.pop()<<" "<<s1.top()<<" "<<s1.getsize()<<" "<<s1.isempty()<<endl;
// }

//-----------------------inbuild stack------------
int main(){
    stack <int > s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
   //for inbuild stack pop returns void so u cant print pop value but u can use top
   cout<<s1.top();s1.pop();
    cout<<" "<<s1.top()<<" "<<s1.size()<<" "<<s1.empty()<<endl;
}