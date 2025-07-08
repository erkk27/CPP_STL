#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> m;
    m["banana"] = 1;
    m["apple"] = 2;
    m.insert({"orange",3});
    m.insert(pair<string,int>("mango",4));
    m.emplace("grape",5);

    int val1 = m["banana"];
    int val2 = m.at("apple");

    if(m.find("apple") != m.end()){
        cout << "apple is" <<m["apple"]<<endl;
    }

    

    return 0;
}