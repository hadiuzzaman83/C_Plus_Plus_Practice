#include<bits/stdc++.h>
using namespace std;
int main(){


    //lower-bound

    vector<int> v={3,4,5,7,8,10};
   // vector<int>::iterator it;
   // auto it;
    auto it=lower_bound(v.begin(),v.end(),11);

    //cout<<*it<<endl;
    if(it==v.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<*it<<endl;
        cout<<"found"<<endl;
    }
    cout<<distance(v.begin(),it)<<endl;
    cout<<(it-v.begin())<<endl;

/*
    //upper bound

    vector<int> v={3,4,5,7,8,10};
    auto it=upper_bound(v.begin(),v.end(),10);
    if(it==v.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<*it<<endl;
        cout<<"found"<<endl;
    }
    cout<< ((it==v.end()) ? "Not Found" : to_string(*it)) <<endl;

    cout<<distance(v.begin(),it)<<endl;
    cout<<(it-v.begin())<<endl;
    //cout<<distance(v.begin()+1,it)<<endl;
    //cout<<(it-v.begin()-1)<<endl;

    //using set
    vector<int> v={3,4,5,7,8,10};
    set<int> s (v.begin(),v.end());
    auto it=s.lower_bound(5);
    cout<< ((it==s.end()) ? "Not Found" : to_string(*it))   <<endl;
*/
    return 0;


}
