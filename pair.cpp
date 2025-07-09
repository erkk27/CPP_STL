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

    //compare: pair.fist then pair.second
    pair<int,int> a(1,10);
    pair<int,int> b(1,6);
    pair<int,int> c(3,3);

    bool res1 = (a < b); //true 
    bool res2 = (a < c); //false 

    //use in function
    pair<int,int> divide(int a,int b);
    pair<int,int> divide(int a,int b){
        return {a / b, a % b};
    }

    std::pair<int, int> result = divide(10, 3);
    return 0;
}