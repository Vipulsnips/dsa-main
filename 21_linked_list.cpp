#include <bits/stdc++.h>
using namespace std;
#include "21_node.cpp"

void print(node * head){
    node * temp=head;
    while(temp!=NULL){
        cout<<(*temp).data<<" ";
        temp=temp->next;
    }
}
//--------------------------o(n^2) time complexity---------------------------
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

//---------------------O(n) time complexity-------------------------
node * takeinput(){
    int data;
    int cnt=0;
    cin>>data;
    node * head = NULL, *tail= NULL;
    while(data != -1){
        cnt++;
        node * n = new node (data);
        if(head==NULL){
            head=n;tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    cout<<"size of ll is "<<cnt<<endl;
    return head;
}
int getindex(node * head, int i){
    while(head->next!=NULL && i>0){
        i--;
        head=head->next;
    }
    if(head==NULL) return -1;
    else return head->data;
}
// int main() {
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
    //-----------------------TAKING INPUT AND PRINTING THE VALUES-----------------------------
//     node *head; head= takeinput();
//     print(head);
//     cout<<"value at index 3 is "<<getindex(head,3)<<endl;
//     return 0;
// }

//---------------------------  INSERTING NODE AT I INDEX -----------------------------

node * setll(node * n,node *head, int i){
    node *temp= head;
    if(i==0){
        head=n;n->next=temp;
        return head;
    }
    i--;
    while(temp !=NULL && i>0){
        temp=temp->next;
        i--;
    }
    // node * temp2=temp->next;      //2 ways of inserting
    // temp->next=n;
    // n->next=temp2;
    if(temp!=NULL){
        n->next=temp->next;
        temp->next=n;
    }

    return head;
}
int main(){
    node* head =takeinput();
    cout<<"NEW data and index"<<endl;
    int data,i;cin>>data>>i;
    node *n= new node(data);
    head=setll(n,head,i);
    print(head);
}