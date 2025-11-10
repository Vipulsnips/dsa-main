#include <bits/stdc++.h>
using namespace std;
#include "26_BinartTree.h"
TreeNode <int>  * input(){
    int data; cin>>data;
    if(data==-1) return NULL;
    TreeNode <int> * root = new TreeNode <int> (data);
    queue <TreeNode <int > * > q;
    q.push(root);
    while(!q.empty()){
        TreeNode <int> * curr= q.front();
        q.pop();
        int leftdata,rightdata;
        cin>>leftdata;
        if(leftdata!=-1) {
            TreeNode <int> * leftchild = new TreeNode <int> (leftdata);
            curr->left= leftchild;
            q.push(leftchild);
        }
        cin>>rightdata;
        if(rightdata!=-1) {
            TreeNode <int> * rightchild = new TreeNode <int> (rightdata);
            curr->right= rightchild;
            q.push(rightchild);
        }
        
    }
    return root;
}
int sum(TreeNode <int> * root){
    if(!root) return 0;
    return root->data + sum(root->left) +sum(root->right);
}
//------------------------------level wise printing----------------------------
void print(TreeNode <int> * root){
    if(!root) return;
    queue <TreeNode <int> * > q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode <int> * curr=  q.front();
        q.pop();
        if(curr==NULL) {
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
        cout<<curr->data<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
        }
    }
}
//--------------------------------------balanced tree O(n)------------------------
pair<int,int> balanced(TreeNode <int> * root){
    if(!root) return {0,1};
    pair <int,int> left= balanced(root->left);
    pair <int,int> right= balanced(root->right);
    if(left.second ==0 || right.second==0){
        return {max(left.first , right.first) +1, 0 };
    }
    int x= abs(left.first - right.first);
    pair <int,int >ans;
    ans.first =max(left.first , right.first) +1;
    if(x<=1) ans.second = 1;
    else ans.second =0;
    return ans;
}
//------------------------------------------remove leaf nodes---------------------
TreeNode <int> * removeleaf(TreeNode <int> * root){
    if(!root) return NULL;
    if(!root->left && !root->right) {
        root=NULL;
        return root;
    }
    root->left=removeleaf(root->left);
    root->right=removeleaf(root->right);
    return root;
}

//-------------------------------------------level wise linkedlist --------------------------
vector <node * > printlinkedlist(TreeNode <int> * root){
    vector <node * > v;
    if(!root  ) return v;
    queue <TreeNode <int> *> q ;
    q.push(root);
    q.push(NULL);
    node * head= NULL, * tail=NULL;
    while(!q.empty()){
        TreeNode <int> * curr= q.front();
        q.pop();
        if(curr==NULL){
            v.push_back(head);
            head=NULL,tail=NULL;
            if(!q.empty()) q.push(NULL);
        }
        else{
            node * n = new node (curr->data);
            if(head==NULL){
                head=tail=n;
            }
            else {
                tail->next=n;
                tail=n;
            }
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
    return v;
}
void printll(vector <node *> v){
    for(int i=0;i<v.size();i++){
        node * head= v[i];
        while(head){
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
}
//----------------------------------Zigzag printing-------------------
void zigzag(TreeNode <int> * root){
    stack <TreeNode <int> *> s1,s2;
    s1.push(root);
    int flg=1;
    while(!s1.empty() || !s2.empty()){
        if(flg){
            while(!s1.empty()){
                TreeNode <int> * top= s1.top();
                cout<<top->data<<" ";
                s1.pop();
                if(top->left ) s2.push(top->left);
                if(top->right ) s2.push(top->right);
            }
            cout<<endl;
            flg=0;
        }
        else{
            while(!s2.empty()){
                TreeNode <int> * top= s2.top();
                cout<<top->data<<" ";
                s2.pop();
                if(top->right) s1.push(top->right);
                if(top->left) s1.push(top->left);
            }
            cout<<endl;
            flg=1;
        }
    }
}
int main(){
    TreeNode <int > * root =input();
    //-------------------balance---------------------
    // cout<<sum(root)<<endl;
    // pair <int, int > ans= balanced (root);
    // cout<<ans.first<<" "<<ans.second<<endl;

    //-------------------level wise input--------------------
    // print(root);
    //-------------------remove lead node------------

    // root=removeleaf(root);
    // print(root);

    //------------------- level wise input linked list-----------------
    // vector <node *> input= printlinkedlist(root);
    // printll(input);
    zigzag(root);
    delete(root);
}