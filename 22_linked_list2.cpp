#include <bits/stdc++.h>
using namespace std;
#include "21_node.cpp"
// node * takeinput(){
//     node* head=NULL, *tail=NULL;
//     int data;cin>>data;
//     while(data!=-1){
//         node * n = new node(data);
//         if(head==NULL ){
//             head=n;tail=n;
//         }
//         else{
//             tail->next=n;
//             tail=n;
//         }
//         cin>>data;
//     }
//     return head;
// }
// void print(node * head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<endl;
//     return;

// }
// //---------------------mid element of LL------------------
// // node * midelement(node * head ){
// //     node * fast=head, *slow =head;
// //     while(fast->next !=NULL && fast->next->next != NULL){
// //         slow=slow->next;
// //         fast=fast->next->next;
// //     }
// //     return slow;
// // }
// // int main(){
// //     node * head=takeinput();
// //     node * mid=midelement(head);
// //     print(mid);
// // }

// //----------------------MERGE TWO SORTED LINKED LIST------------------------
// // node * merge(node * h1 , node * h2){
// //     node * head =NULL , * tail=NULL;
// //     while(h1!=NULL && h2!=NULL){
// //         if(h1->data < h2-> data){
// //             if(head==NULL){
// //                 tail=h1;head=h1;
                
// //             }
// //             else{
// //                 tail->next=h1;
// //                 tail=tail->next;
// //             }
// //             h1=h1->next;
// //         }
// //         else{
// //             if(head==NULL){
// //                 tail=h2;head=h2;
                
// //             }
// //             else{
// //                 tail->next=h2;
// //                 tail=tail->next;
// //             }
// //             h2=h2->next;
// //         }
// //     }
// //     while(h1!=NULL ){
// //             if(head==NULL){
// //                 tail=h1;head=h1;
                
// //             }
// //             else{
// //                 tail->next=h1;
// //                 tail=tail->next;
// //             }
// //             h1=h1->next;
// //     }
// //     while(h2!=NULL ){
// //             if(head==NULL){
// //                 tail=h2;head=h2;
                
// //             }
// //             else{
// //                 tail->next=h2;
// //                 tail=tail->next;
// //             }
// //             h2=h2->next;
// //     }
// //     return head;

// // }
// // int main(){
// //     node * h1=takeinput();
// //     node * h2=takeinput();
// //     node * head=merge(h1,h2);
// //     print( head);
// // }

// //-----------------MERGE SORT (LINKED LIST) ------------------------
// node * midelement(node * head ){
//     node * fast=head, *slow =head , *prev=NULL;
//     while(fast->next !=NULL && fast->next->next != NULL){
//         prev=slow;
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     prev=slow->next;
//     slow->next=NULL;
//     return prev;
// }
// node * merge(node * h1 , node * h2){
//     node * head =NULL , * tail=NULL;
//     while(h1!=NULL && h2!=NULL){
//         if(h1->data < h2-> data){
//             if(head==NULL){
//                 tail=h1;head=h1;
                
//             }
//             else{
//                 tail->next=h1;
//                 tail=tail->next;
//             }
//             h1=h1->next;
//         }
//         else{
//             if(head==NULL){
//                 tail=h2;head=h2;
                
//             }
//             else{
//                 tail->next=h2;
//                 tail=tail->next;
//             }
//             h2=h2->next;
//         }
//     }
//     while(h1!=NULL ){
//             if(head==NULL){
//                 tail=h1;head=h1;
                
//             }
//             else{
//                 tail->next=h1;
//                 tail=tail->next;
//             }
//             h1=h1->next;
//     }
//     while(h2!=NULL ){
//             if(head==NULL){
//                 tail=h2;head=h2;
                
//             }
//             else{
//                 tail->next=h2;
//                 tail=tail->next;
//             }
//             h2=h2->next;
//     }
//     return head;
// }
// node * mergesort(node * head){
//     if(head->next == NULL || head==NULL) return head ;
//     node * head2 = midelement(head);
//     head=mergesort(head);
//     head2=mergesort(head2);
//     return merge(head,head2);

// }
// int main(){
//     node * head= takeinput();
//     head=mergesort(head);
//     print(head);
// }


//----------------------------------REVERSE LL (Recursion) O(n^2) ------------------------
// node * reverse(node* head){
//     if(head->next == NULL || head==NULL) {
//         return head;
//     }
//     node * head2=reverse(head->next);
//     node * temp=head2;
//     while(temp->next != NULL) temp=temp->next;
//     temp->next=head;
//     head->next=NULL;
//     return head2;   
// }
// int main(){
//     node  * head = takeinput();
//     head=  reverse(head);  
//     print(head);
// }

//----------------------------REVERSE O(N) (DOUBLE NODE) ---------------- 
// Pair * reverse2( node * head){          //used pair class to return head and tail 
//     if(head->next == NULL || head==NULL) {
//         Pair * p= new Pair(head,head);
//         return p ;
//     }
//     Pair * p2=reverse2(head->next);
//     p2->  tail -> next = head;
//     head->next=NULL;
//     p2->tail=head;
//     return p2;   
// }
// int main(){
//     node  * head = takeinput();
//     Pair * p = reverse2(head);
//     head= p-> head;
//     print(head);
// }

//----------------------- [VARIATION OF LINKED LIST]----------------------------------
//------------------------circular list-------------
// node * takeinput(){
//     node* head=NULL, *tail=NULL;
//     int data;cin>>data;
//     while(data!=-1){
//         node * n = new node(data);
//         if(head==NULL ){
//             head=n;tail=n;
//         }
//         else{
//             tail->next=n;
//             tail=n;
//         }
//         cin>>data;
//     }
//     tail->next=head;
//     return head;
// }
// void print(node * head){
//     node * temp=head;
//     while(1){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//         if(temp== head) break;
//      }
//     cout<<endl;
//     return;
// }
// node * sortinsert(node * head, int val){
//     node * n= new node(val);
//     node * temp=head;
//     if(head->data>val){
//         while(temp->next!=head) temp=temp->next;
//         temp->next=n;
//         n->next=head;
//         // cout<<"help"<<endl;
//         return n;
//     }
//     while(temp->next->data < val && temp->next!=head){
//         temp=temp->next;
//     }
//     n->next=temp->next;
//     // cout<<temp->data<<endl;
//     temp->next=n;
//     return head;
// }
// node * deletenode(node * head, int val){
//     if(head->data == val){
//         node * temp=head;
//         while(temp->next!=head) temp=temp->next;
//         temp->next=head->next;
//         return head->next;
//     }
// }
// int main(){
//     node * head= takeinput();
//     int data;cin>>data;
//     // head=sortinsert(head,data);
//     head=deletenode(head, data);
//     print(head);
// }

//----------------------DOUBLY LINKED LIST--------------------
doublenode * takeinput(){
    doublenode* head=NULL, *tail=NULL;
    int data;cin>>data;
    while(data!=-1){
        doublenode * n = new doublenode(data);
        if(head==NULL ){
            head=n;tail=n;
        }
        else{
            tail->next=n;
            n->prev=tail;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
void print(doublenode * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
    return;
}
doublenode * sortinsert(doublenode* head,int val){
    doublenode * n= new doublenode(val);
    if(head->data > val || head==NULL){
        n->next=head;
        head->prev=n;
        return n;
    }
    doublenode * temp=head;
    while(temp->next!=NULL && temp->next->data < val){
        temp=temp->next;
    }
    // cout<<temp->data<<endl;
    n->next=temp->next;
    if(temp->next!=NULL) temp->next->prev=n;
    temp->next=n;
    n->prev=temp;
    return head;
}
doublenode * deletenode(doublenode * head,int data){
    if(head->data == data){
        head->next->prev=NULL;
        return head->next;
    }
    doublenode * temp= head;
    while(temp->data != data ) temp=temp->next;
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;
    return head;
}
int main(){
    doublenode* head=takeinput();
    int data;cin>>data;
    // head= sortinsert ( head , data);
    head= deletenode( head, data);
    print(head);
}