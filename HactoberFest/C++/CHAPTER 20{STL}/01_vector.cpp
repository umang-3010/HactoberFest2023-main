#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {2,4,5,3,10};
    v.push_back(20);
    v.push_back(30);   
    v.pop_back();
    // for(int x:v){
    //     cout<<x<<endl;
    // }

    vector<int> ::iterator it;
    for(it = v.begin() ; it!=v.end() ; it++){
        cout<<*it<<endl;
    }
     
    return 0;
}