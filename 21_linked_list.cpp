#include <bits/stdc++.h>
using namespace std;
#include "21_node.cpp"

void print(node * head){
    node * temp=head;
    while(temp!=NULL){
        cout<<(*temp).data<<" ";
        temp=temp->next;
    }}

// node* takeinput(){
//     int data;cin>>data;
//     node * head=NULL;
//     while(data !=-1){
//         node * newnode = new node ( data);  //we use dynamically allocated node as static one gets delete after its every iteration of while loop as scope = while loop
//         if(head == NULL){
//             head=newnode;
//         }
//         else{
//             node* temp = head;
//             while(temp->next != NULL){
//                 temp=temp->next;
//             }
//             temp->next=newnode;
//         }
//         cin>>data;
//     }
//     return head;
// }
node * takeinput(){
    int data;
    cin>>data;
    node * head = NULL, *tail= NULL;
    while(data != -1){
        node * n = new node (data);
        if(head==NULL){
            head=n;tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }
    return head;
}
int main() {
    //-------------statically--------------
    // node n1(1);
    // node n2(2);
    // node n3(3);
    // node n4(4);
    // node n5(5);
    // node *head = &n1;
    // n1.next= &n2;
    // n2.next= &n3;
    // n3.next= &n4;
    // n4.next= &n5;
    // // cout<<n1.data<<" "<<n2.data<<endl;
    // print(head);


    //-------------dynamically--------
    // node * n3 = new node (3);
    // node * n4 = new node (4);
    // n3-> next  =n4;
    node *head; head= takeinput();
    print(head);

    return 0;
}