#include <bits/stdc++.h>
using namespace std;
#include "24_queue.cpp"
// int main() {
//     // Queueimplement <int> q (5);
//     Queueimplement <int> q ;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.enqueue(60);
//     cout<<q.front()<<endl;
//     cout<<q.dequeue()<<" "<<q.front()<<" "<<q.getsize()<<" "<<q.isempty()<<endl;
//     cout<<q.dequeue()<<endl;
//     cout<<q.dequeue()<<endl;
//     cout<<q.dequeue()<<" "<<q.front()<<" "<<q.getsize()<<" "<<q.isempty()<<endl;
// }

//--------------linked list-----------;
// int main() {
//     Queue <int> q ;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.enqueue(60);
//     cout<<q.front()<<endl;
//     cout<<q.dequeue()<<" "<<q.front()<<" "<<q.getsize()<<" "<<q.isempty()<<endl;
//     cout<<q.dequeue()<<endl;
//     cout<<q.dequeue()<<endl;
//     cout<<q.dequeue()<<" "<<q.front()<<" "<<q.getsize()<<" "<<q.isempty()<<endl;
// }

//-------------------inbuild------------------
int main() {
    queue <int> q ;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<" "<<q.size()<<" "<<q.empty()<<endl;
    // q.pop();
    // q.pop();
    // cout<<q.front()<<" "<<q.size()<<" "<<q.empty()<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}