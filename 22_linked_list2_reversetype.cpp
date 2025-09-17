#include <bits/stdc++.h>
using namespace std;
#include "21_node.cpp"
node * takeinput(){
    node* head=NULL, *tail=NULL;
    int data;cin>>data;
    while(data!=-1){
        node * n = new node(data);
        if(head==NULL ){
            head=n;tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
void print(node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
    return;

}
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

//-------------------------BEST APPROACH (RECURSIVE) ---------------------
// node * reverse3( node * head){          // HERE TAIL IS ACUTALY NEXT OF HEAD 
//     if(head->next == NULL || head==NULL) {
//         return head;    
//     }
//     node * h2=reverse3(head->next);
//     node * tail =head -> next;
//     tail->next=head;
//     head->next=NULL;
//     return h2;  
// }
// int main(){
//     node  * head = takeinput();
//     head = reverse3(head);
//     print(head);
// }


//-----------------------ITERATIVE APPROACH --------------
node * reverse(node * head){
    node * prev=head, * temp = head->next; prev->next=NULL;
    while(  temp!=NULL){
        node * temp2=temp;
        temp=temp->next;
        temp2->next=prev;
        prev=temp2;
    }
    return prev;
}
int main(){
    node  * head = takeinput();
    head = reverse(head);
    print(head);
}