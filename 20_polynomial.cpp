#include <iostream>
using namespace std;
class polynomial{
    int *coefficient;
    int capacity;
    public:
    polynomial(){
        this -> coefficient = new int[5];
        this-> capacity =5;
        for(int i=0;i<capacity;i++) coefficient[i] = 0;
    }
    polynomial( polynomial const &p ){
        this->coefficient = new int[p.capacity];
        for(int i=0;i<p.capacity;i++) this->coefficient [i] = p.coefficient[i];
        this->capacity = p.capacity;
    }
    void setcoefficient(int degree, int coeff){
        if(degree>=capacity){
            int x=this->capacity;
            while(degree >= x){
                x*=2;
            }
            int *newcoefficient = new int[x];
            for(int i=0;i<this->capacity;i++)  newcoefficient[i]=this->coefficient[i];
            for(int i=this->capacity;i<x;i++) newcoefficient[i]=0;
            delete [] this->coefficient;
            coefficient = newcoefficient;
            capacity=x;
        }
        coefficient[degree]=coeff;
    }
    polynomial operator+ (polynomial const p)const{
        polynomial pnew;
        pnew.capacity = max(capacity, p.capacity);
        delete [] pnew.coefficient;
        pnew.coefficient = new int[pnew.capacity];
        for(int i=0; i<pnew.capacity; i++) pnew.coefficient[i]=0;
        for(int i=0;i<pnew.capacity;i++){
            int x,y;
            x= i<capacity ? coefficient[i] : 0;
            y= i<p.capacity ? p.coefficient[i] : 0;
            pnew.setcoefficient(i,x+y);
        }
        return pnew;
    }
    polynomial operator- (polynomial const p)const{
        polynomial pnew;
        pnew.capacity = max(capacity, p.capacity);
        delete [] pnew.coefficient;
        pnew.coefficient = new int[pnew.capacity];
        for(int i=0; i<pnew.capacity; i++) pnew.coefficient[i]=0;

        for(int i=0;i<pnew.capacity;i++){
            int x,y;
            x= i<capacity ? coefficient[i] : 0;
            y= i<p.capacity ? p.coefficient[i] : 0;
            pnew.setcoefficient(i,x-y);
        }
        return pnew;
    }
    polynomial operator*(polynomial p){
        polynomial pnew;
        pnew.capacity=capacity * p.capacity;
        delete [] pnew.coefficient;pnew.coefficient =new int [pnew.capacity];
        for(int i=0; i<pnew.capacity; i++) pnew.coefficient[i]=0;
        for(int i=0;i<capacity;i++){
            for(int j=0;j<p.capacity;j++){
                if(coefficient[i]!=0 && p.coefficient[j]!=0){
                    pnew.coefficient[i + j] += coefficient[i] * p.coefficient[j];
                }
            }
        }
        return pnew;

    }
    polynomial& operator=(polynomial  const &p){
        delete [] coefficient;
        this->coefficient = new int[p.capacity];
        this->capacity=p.capacity;
        for(int i=0;i<capacity;i++){
            this->coefficient[i]=p.coefficient[i];
        }
        return *this;
    }
    void print(){
        for(int i=0;i<capacity;i++){
            if(coefficient[i]!=0){
                cout<<coefficient[i]<<"x^"<<i<<" ";
            }
        }
        cout<<endl;
    }
    ~polynomial(){
        delete [] coefficient;
    }
};