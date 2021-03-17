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
    list<int>::iterator it;

    //it=mylist.begin();
    it=find(mylist.begin(),mylist.end(),3);
    mylist.erase(it);

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }

    return 0;
}