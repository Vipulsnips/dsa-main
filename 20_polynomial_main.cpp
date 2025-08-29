#include <bits/stdc++.h>
using namespace std;
#include "20_polynomial.cpp"
int main() {
    int n;cin>>n;
    int a1[n],a2[n];
    for(auto &i:a1) cin>>i; 
    for(auto &i:a2) cin>>i; 
    int m;cin>>m;
    int b1[m],b2[m];
    for(auto &i:b1) cin>>i; 
    for(auto &i:b2) cin>>i; 
    polynomial p1,p2;
for(int i=0;i<n;i++){
    // cout<<"p1: degree="<<a1[i]<<" coeff="<<a2[i]<<endl;
    p1.setcoefficient(a1[i],a2[i]);
}
for(int i=0;i<m;i++){
    // cout<<"p2: degree="<<b1[i]<<" coeff="<<b2[i]<<endl;
    p2.setcoefficient(b1[i],b2[i]);
}

    polynomial p3=p1+p2;
    polynomial p4=p1-p2;
    polynomial p5=p1*p2;
    p1.print();
    p2.print();
    p3.print();
    p4.print();
    p5.print();
    return 0;
}