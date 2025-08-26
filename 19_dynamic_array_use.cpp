#include <bits/stdc++.h>
using namespace std;
#include "C:\Users\vipul\OneDrive\Desktop\dsa main\19_dynamic_array.cpp"

int main() {
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.print();

    DynamicArray d2(d1);                     //shallow copy is done here
    DynamicArray d3;                         
    d3=d1;                                   //shallow copy is done here
    d1.add(0,69);
    // d2.print();
    // d3.print();

    //---------------------after changing the copyconstructor and operator overloaded "=" funciton
    d2.print();
    d3.print();

    return 0;
}