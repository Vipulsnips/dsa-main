#include <bits/stdc++.h>
using namespace std;
#include "25_tree.h"
TreeNode <int> * input(){
    int x;
    cin>>x;
    TreeNode <int> *root=new TreeNode (x);
    queue <TreeNode <int> * > q;
    q.push(root);
    while(!q.empty()){
        TreeNode <int> * front = q.front();
        q.pop();
        int n;cin>>n;
        while(n--){
            int t;cin>>t;
            TreeNode <int> * temp = new TreeNode(t);
            front->children.push_back(temp);
            q.push(temp);
        }
    }
    return root;
}
//------------------------------- finding x---------------------
// bool findx(TreeNode <int> * root , int x) {
//     if(!root) return false;
//     if(root->data == x ) return true;
//     for(auto i:root->children){
//         if(findx(i,x)) {return true;}
//     }
//     return false;
// }
// int main() {
//     TreeNode <int > * root=input();
//     int x;cin>>x;
//     (findx(root,x)==1) ? cout<<"true" : cout<<"false";
//     return 0;
// }



//------------------------------ no of nodes greater than x -----------------------------
// int nodesgreater(TreeNode <int> * root ,int x){
//     if(!root )return 0;
//     int ans=0;
//     if(root->data > x) ans++;
//     for(auto i:root->children){
//         ans+=nodesgreater(i,x);
//     }
//     return ans;
// }
// int main() {
//     TreeNode <int > * root=input();
//     int x;cin>>x;
//     cout<<nodesgreater(root,x)<<endl;
//     return 0;
// }

//---------------------------- max sum of child nodees ------------------
// Pair * maxchildnodes(TreeNode <int> * root){
//     if(!root) { return new Pair(); }
//     Pair * p = new Pair();
//     int sum=0;
//     for(auto i:root->children){
//         sum+=i->data;
//     }
//     p->node= root;
//     p->sum= sum;
//     for(auto i:root->children){
//         Pair * n = maxchildnodes(i);
//         if(n->sum > p->sum) {p->node = n->node; p->sum=n->sum;}
//     }
//     return p;
// }
// int main() {
//     TreeNode <int > * root=input();
//     Pair * ans= maxchildnodes(root);
//     cout<<ans->node->data<<endl;
//     for(auto i:ans->node -> children) cout <<i->data<<" ";
//     return 0;
// }

//---------------------------- Identical trees-------------------------------

// bool identical(TreeNode <int> * t1 , TreeNode <int> * t2){
//     if(  t1->data != t2->data) return false;
//     if(t1->children.size() != t2->children.size()) return false;
//     for(int i=0;i<t1->children.size();i++){
//         bool x= identical(t1->children[i] , t2->children[i]);
//         if(x==0) return false;
//     }
//     return true;
// }

// int main(){
//     TreeNode <int > * t1= input();
//     TreeNode <int > * t2= input();
//     cout<<identical(t1,t2)<<endl;;
// }

//----------------------------- Next larger element than n -------------------------------

// TreeNode <int> * larger(TreeNode <int> * root , int n){
//     if(!root ) return NULL;
//     TreeNode <int> * ans = NULL;
//     if(root->data > n) ans=root;
//     for(auto i:root->children){
//         TreeNode <int> * temp= larger(i,n);
//         if(temp && ans && temp->data < ans->data ) ans=temp; 
//         if(!ans && temp) ans=temp;
//     }
//     return ans;
// }
// int main(){
//     int n;cin>>n;
//     TreeNode <int> * root = input();
//     root=larger(root,n);
//     cout<<root->data<<endl;
// }

//---------------------------- second largest value ------------------------------------------

// pair2 largerst_2nd(TreeNode <int> * root){
//     pair2 ans;
//     ans.m=root->data;
//     for(auto i:root->children){
//         pair2 temp = largerst_2nd(i);
//         if(ans.m >= temp. m){
//             ans.sm=max(ans.sm,temp.m);
//         }
//         else{
//             int x=ans.m;
//             ans.m=temp.m;
//             ans.sm=max(x,temp.sm);
//         }
//     }
//     return ans;
// }
// int main(){
//     TreeNode <int> * root = input();
//     pair2  ans = largerst_2nd(root);
//     cout<<ans.sm<<endl;
// }

//------------------------------ replace with depth -----------------------
void depth(TreeNode <int> * root ,int n){
    root->data = n;
    for(auto i:root->children){
        depth(i ,n + 1);
    }
} 
int main(){
    TreeNode <int > * root = input();
    depth(root,0);
    // if(!root) return;
    queue <TreeNode <int> * > q;
    q.push(root);
    while(!q.empty()){
        TreeNode <int> * curr=q.front();
        q.pop();
        cout<<curr->data<<":";
        for(auto i:curr->children) {cout<<i->data<<",";
        q.push(i);}
        cout<<endl;
    }
}