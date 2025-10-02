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
//-------------------- recursive node finding -----------------------
// int find(node * head, int data , int cnt){
//     if(head->data == data) return cnt;
//     if(head->next==NULL ) {
//         if(head->data == data) return cnt;
//         return -1;
//     }
//     int x= find(head->next , data ,++cnt);
//     if(x>=0) return x;
//     else return -1; 
// }
// int main(){
//     node * head= takeinput();
//     int data;cin>>data;
//     int index= find( head , data , 0);
//     cout<<index<<endl;
// }

//------------------------------ even and odd sort --------------------
// node * sort(node * head){
//     node * etail=NULL,*otail=NULL,* ohead =NULL , *ehead=NULL;
//     while(head!=NULL){
//         if(head->data &1){
//             if(otail==NULL){ otail=ohead=head;}
//             else{
//                 otail->next=head;
//                 otail=head;
//             }
//         }
//         else{
//             if(etail==NULL){ etail=ehead=head;}
//             else{
//                 etail->next=head;
//                 etail=head;
//             }
//         }
//         head=head->next;
//     }
//     if(otail!=NULL) otail->next=ehead;
//     if (etail!=NULL) etail->next=NULL;
//     if(ohead!=NULL) return ohead;
//     else return ehead;
// }
// int main(){
//     node * head= takeinput();
//     head= sort(head);
//     print(head);
// }

//------------------------DELETION OF M NODES AFTER EVERY N NODES------------------
// node * deletion(node * head, int n,int m){
//     if(n==0) return NULL;
//     else if(m==0) return head;
//     node * temp= head, * last= NULL;
//     int flg=1,cnt=n;
//     while(temp!=NULL){
//         if(flg && cnt>0){
//             if(cnt==n && last!=NULL){
//                 last->next=temp;
//             }
//             cnt--;
//             if(cnt==0){
//                 flg=0;
//                 last=temp;
//                 cnt=m;
//             }
//         }
//         else if(!flg && cnt>0){
//             cnt--;
//             if(cnt==0){
//                 flg=1;
//                 cnt=n;
//             }
//         }
//         temp=temp->next;
//     }
//     last->next=NULL;
//     return head;
// }
// int main(){
//     node * head= takeinput();
//     int n,m;cin>>n>>m;
//     head= deletion(head,n,m);
//     print(head);
// }
//--------------------------------------SWAPPING-------------------------
// node * swap(node * head, int i , int j){
//     if((i==0 || j==0 )&& abs(i-j)==1){
//         node * temp=head->next;
//         head->next=temp->next;
//         temp->next=head;
//         return head;
//     }
//     else if(abs(i-j)==1){
//         j=min(i,j);
//         node * temp=head, *prev=head ,*agla=head;
//         while(j--){prev=temp;temp=temp->next;}
//         agla=temp->next;
//         temp->next=agla->next;
//         agla->next=temp;
//         prev->next=agla;
//         return head;
//     }
//     else if(i==0 || j==0){
//         j=max(i,j);
//         node * temp=head, *prev=head;
//         while(j--) {prev=temp;temp=temp->next;}
//         // cout<<temp->data;
//         node* agla=head->next;
//         head->next=temp->next;
//         prev->next=head;
//         temp->next=agla;
//         return temp;
//     }
//     else{
//         int minm=min(i,j),maxm=max(i,j);maxm-=minm;
//         node * curr1 =head, * prev1 =head, *curr2 =head,*prev2=head  ;
//         while(minm--) {prev1=curr1;curr1=curr1->next;}
//         curr2=curr1;
//         while(maxm--){prev2=curr2;curr2=curr2->next;}
//         node * agla= curr1->next;
//         prev1->next=curr2;
//         prev2->next=curr1;
//         curr1->next=curr2->next;
//         curr2->next=agla;
//         return head;
//     }
// }
// int main(){
//     node * head= takeinput();
//     int n,m;cin>>n>>m;
//     head= swap(head,n,m);
//     print(head);
// }


//----------------------K reversal-------------------
// node * reverse(node * head) {
//     if(head==NULL || head->next==NULL) return head;
//     node * head2=reverse(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return head2;
// }
// node * k_reversal(node * head , int k){
//     if(head==NULL || k==0) return head;
//     int i=1;
//     node * h1=head,*t1=head;
//     while(i<k && t1!=NULL){
//         t1=t1->next;
//         i++;
//     }
//     if(t1==NULL) return reverse(h1);
//     node* h2=t1->next;
//     t1->next= NULL;
//     h2=k_reversal(h2,k);
//     node * n=reverse(h1);
//     h1->next=h2;
//     return n;
// }
// int main(){
//     node * head= takeinput();
//     int k;cin>>k;
//     head=k_reversal(head,k);
//     print(head);
// }

//------------------------BUBBLE SORT -----------------
int len(node * head){
    int cnt=0;
    while(head!= NULL){
        head=head->next;
        cnt++;
    }
    return cnt;
}
node * b_sort(node * head){
    if(head==NULL || head->next==NULL) return head;
    int n=len(head);
    for(int i=0; i < n ;i++){
        node * prev=NULL, * curr=head;
        while(curr->next  != NULL) {
            node * next = curr->next;
            if(next->data < curr->data){
                if(prev==NULL){
                    curr->next=next->next;
                    next->next=curr;
                    head=prev=next;
                }
                else{
                    prev->next=next;
                    curr->next=next->next;
                    next->next=curr;
                    prev=next;
                }
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
    }
    return head;
}
int main(){
    node * head=takeinput();
    head=b_sort(head);
    print( head );
}