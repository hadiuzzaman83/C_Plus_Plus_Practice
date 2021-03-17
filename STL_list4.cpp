#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>
#include<vector>
#include<iterator>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    list<int>mylist(arr,arr+5);
    //list<int>mylist;
    if(mylist.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Filled"<<endl;
    }
    list<int>::iterator it;
    mylist.pop_front();
    mylist.pop_back();
    mylist.pop_front();
    mylist.pop_back();
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }
    return 0;

}