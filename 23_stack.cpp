#include <bits/stdc++.h>
using namespace std;
template <typename T > 
class Stackusingarray{
    T *data;
    int nextindex;
    int capacity;
    public:
    Stackusingarray(int Totalsize){
        data = new T [Totalsize];
        nextindex=0;
        capacity = Totalsize;
    }
    Stackusingarray(){
        data = new T [4];
        nextindex=0;
        capacity = 4;
    }
    int size(){
        return nextindex;
    }
    bool isempty(){
        // if(nextindex==0) return true;
        // else return false ;
        return nextindex==0;
    }
    void push(T val){
        if(nextindex== capacity) {
            // cout<<"Stack is full \n";
            // return;
            T * newdata = new T [ 2* capacity];
            for(int i=0;i<capacity ; i++) newdata[i]=data[i];
            delete [] data;
            data=newdata;
            capacity*=2;
        }
        data[nextindex]=val;
        nextindex++;
    }
    T pop(){
        if(isempty()){
            cout<<"Stack is empty\n";
            // return INT_MIN ;
            return 0;
        }
        return data[--nextindex];
    }
    T top(){
        if(isempty()){
            cout<<"Stack is empty\n";
            // return INT_MIN; 
            return 0;
        }
        return data[nextindex-1];
    }
};

template <typename T , typename V>
class Pair {
    T x;
    V y;
    public:
    void setx(T x) { this->x = x; }
    void sety(V y) { this->y = y; }
    T getx() { return x; }
    V gety() { return y; }
};


template <typename T>
class node{
    public:
    node <T> * next;
    T data;
    node(T data) : data(data) , next(NULL) {}
};
template <typename T>
class Stack{
    node <T> * head; 
    int size;
    public:
    Stack(){
        size=0;
        head=NULL;
    }
    void push(T data){
        node <T>* n= new node <T>(data);
        n->next= head;
        head= n;
        size++;
    }
    T pop(){
        if(isempty()){
            cout<<"stack is empty";
            return 0;
        }
        node <T> * temp = head;
        head=head->next;
        T x= temp->data;
        size--;
        delete temp;
        return x;
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    T top(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return head->data;
    }
};