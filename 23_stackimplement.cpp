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
//     Stackusingarray s;
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
int main(){
    // using different dataypes as required, better than making new classes for each dataype
    // Pair <int> p1;
    // p1.setx(10);
    // p1.sety(1);
    // cout<<p1.getx()<<" "<<p1.gety()<<endl;
    Pair <char,char> p2;
    p2.setx('v');
    p2.sety('r');
    cout<<p2.getx()<<" "<<p2.gety()<<endl;
    Pair <int,float> p3;
    p3.setx(100.3);                       //implicit conversion will occur here
    p3.sety(100.3);
    cout<<p3.getx()<<" "<<p3.gety()<<endl;
}