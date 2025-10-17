#include <bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode{
    public:
    T data;
    vector < TreeNode <T>* > children;
    // vector < TreeNode * > children;  by default this works too
    TreeNode(T el){
        this->data=el;
    }
    ~TreeNode(){
        for(auto i:children){
            delete i;
        }
        //root gets self deleted after scope ends
    }
};