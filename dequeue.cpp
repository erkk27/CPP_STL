#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> dq = {1,2,3,4,5};

    dq.push_front(0);
    dq.push_back(6);

    cout<<"Deque: front"<<dq.front()<<" back"<<dq.back()<<endl;

    dq.pop_front();
    dq.pop_back();

    cout<<"Deque: front"<<dq.front()<<" back"<<dq.back()<<endl;

    return 0;
}