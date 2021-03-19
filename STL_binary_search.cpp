#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    bool ans=binary_search(v.begin(),v.end(),1);
    if(ans){
        cout<<"found"<<endl;

    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}

