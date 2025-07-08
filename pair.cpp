#include<utility>
#include<string>
#include<iostream>

using namespace std;

int main(){

    //initialization
    pair<int,string> p1;
    p1.first = 10;
    p1.second = "hello";

    pair<int,double> p2(43,2.332);

    auto p3 = make_pair("key",13);

    pair<char,bool>p4{'a',true};
    
    return 0;
}