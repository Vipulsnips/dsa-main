#include <bits/stdc++.h>
using namespace std;
#include "21_node.cpp"
node * takeinput(){
    node * head=NULL,*tail=NULL;
    int data;cin>>data;
    while(data!=-1){
        node * n = new node(data);
        if(head==NULL){ head=n;tail=n;}
        else {
            tail->next=n;
            tail=n;    
        }
        cin>>data;
    }
    return head;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int findindex(node*head ,int i){
    int cnt=0;
    while(head!=NULL){
        if(head->data==i){ return cnt;}
        cnt++;head=head->next;
    }
    return -1;
}

//----------------------------------QUESTION-1 ---------------------------------
// int main(){
//     int t;cin>>t;
//     while(t--){
//         node *head= takeinput();
//         cout<<"enter element to find\n";
//         int i;cin>>i;
//         cout<<"pos "<<findindex(head,i)<<endl;
//     }
// }

//-----------------------------------QUESTION-2 -----------------------------------
// int countel(node * head){
//     int cnt=0;
//     while(head!=NULL){
//         head=head->next;cnt++;
//     }
//     return cnt;
// }
// node * AppendLastNToFirst(node * head,int i){
//     if(i<=-1) return head;
//     node * temp=head, *temp2= head;
//     while(i--) temp=temp->next;
//     while(temp2->next!=NULL) temp2=temp2->next;
//     temp2->next=head;
//     head=temp->next;
//     temp->next=NULL;
//     return head;
// }
// int main(){
//     int t;cin>>t;
//     while(t--){
//         node *head= takeinput();
//         int n= countel(head);
//         int i;cin>>i;
//         cout<<n<<endl;
//         head=AppendLastNToFirst(head,n-i-1);
//         print(head);
//     }
// }

//-------------------------------QUESTION 3---------------------------
// node * removedupes(node * head){
//     node * last=head,* temp= head->next;
//     while(temp!=NULL){
//         if(temp->data != last->data){
//             last->next=temp;
//             last=temp;
//         }
//         temp=temp->next;
//     }
//     last->next=NULL;
//     return head;
// }

// int main(){
//     int t;cin>>t;
//     while(t--){
//         node *head= takeinput();
//         head=removedupes(head);
//         print(head);
//     }
// }

//------------------------------QUESTION 4----------------------------
// void reverse(node * head){
//     if(head==NULL) return;
//     reverse(head->next);
//     cout<<head->data<<" ";
//     return;
// }
// int main(){
//     int t;cin>>t;
//     while(t--){
//         node *head= takeinput();
//         printReverse(head);cout<<endl;
//     }
// }

//------------------------------QUESTION 5----------------------------
node * reverse(node * head){
    node * prev=NULL,*curr=head;
    while(curr!= NULL){
        node * n= curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
    }
    return prev;
}
node* findMiddleAndSplit(node * head){
    node * fast=head,*slow=head;
    while(fast != NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    node *n =slow->next;
    slow->next=NULL;
    return n;
}
int palindrome(node * head){
    if(head==NULL) return -1;
    node * head2=findMiddleAndSplit(head);
    // print(head);
    // print(head2);
    head2= reverse(head2);
    while(head!=NULL && head2!=NULL){
        if(head->data != head2->data) return 0;
        head=head->next;
        head2=head2->next;
    }
    return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
        node *head= takeinput();
        // cout<<palindrome(head)<<endl;
        palindrome(head)==0?cout<<"false\n":cout<<"true\n";
    }
}