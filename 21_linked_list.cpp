#include <bits/stdc++.h>
using namespace std;
#include "21_node.cpp"
int main() {
    //-------------statically--------------
    node n1(1);
    node n2(2);
    node *head = &n1;
    n1.next= &n2;
    cout<<n1.data<<" "<<n2.data<<endl;
    node * temp=head;
    while(temp!=NULL){
        cout<<(*temp).data<<" ";
        temp=temp->next;
    }

    //-------------dynamically--------
    node * n3 = new node (3);
    node * n4 = new node (4);
    n3-> next  =n4;
    
    return 0;
}