#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main (){
    
    int res[] = {1,2,2,2,2,2,5,6,9};

    unordered_map<int,int> freq;
    for(int num : res){
        freq[num]++;

    }
    return 0;
}