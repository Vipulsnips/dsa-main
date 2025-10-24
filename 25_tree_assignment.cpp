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
Pair * maxchildnodes(TreeNode <int> * root){
    if(!root) { return new Pair(); }
    Pair * p = new Pair();
    int sum=0;
    for(auto i:root->children){
        sum+=i->data;
    }
    p->node= root;
    p->sum= sum;
    for(auto i:root->children){
        Pair * n = maxchildnodes(i);
        if(n->sum > p->sum) {p->node = n->node; p->sum=n->sum;}
    }
    return p;
}
int main() {
    TreeNode <int > * root=input();
    Pair * ans= maxchildnodes(root);
    cout<<ans->node->data<<endl;
    for(auto i:ans->node -> children) cout <<i->data<<" ";
    return 0;
}