#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    //initialize
    vector<int> v;
    vector<int> v2(5);
    vector<int> v3(5, 10);
    vector<int> v4{1, 2, 3, 4, 5};
    vector<int> v5(v4.begin(), v4.end());
    vector<vector<int>> v6(3, vector<int>(2));
    vector<vector<int>> v7;
    v7.push_back({1,2,3});

    //oprate
    v.push_back(1);
    v.pop_back();
    sort(v.begin(), v.end());//ascending
    sort(v.rbegin(), v.rend(),greater<int>());//descending

    //tarverse
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }

    for(auto i:v){
        cout<<i<<" ";
    }

    //find
    auto it=find(v.begin(), v.end(), 2);
    if(it!=v.end()){
        cout<<"found"<<endl;
    }


    return 0;
}