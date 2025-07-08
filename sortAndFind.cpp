#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<int> v = {1,2,3,6,5,8,33};

    //sort
    sort(v.begin(),v.end());

    //find element position
    auto it = find(v.begin(),v.end(),8);
    if(it!=v.end()){
        cout<<"found"<<endl;
        cout<<"element positon is "<<(it - v.begin())<<endl;
    }
    return 0;
}