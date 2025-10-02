class Stackusingarray{
    int *data;
    int nextindex;
    int capacity;
    public:
    Stackusingarray(int Totalsize){
        data = new int [Totalsize];
        nextindex=0;
        capacity = Totalsize;
    }
    Stackusingarray(){
        data = new int [4];
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
    void push(int val){
        if(nextindex== capacity) {
            // cout<<"Stack is full \n";
            // return;
            int * newdata = new int [ 2* capacity];
            for(int i=0;i<capacity ; i++) newdata[i]=data[i];
            delete [] data;
            data=newdata;
            capacity*=2;
        }
        data[nextindex]=val;
        nextindex++;
    }
    int pop(){
        if(isempty()){
            cout<<"Stack is empty\n";
            return INT_MIN ;
        }
        return data[--nextindex];
    }
    int top(){
        if(isempty()){
            cout<<"Stack is empty\n";
            return INT_MIN; 
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
