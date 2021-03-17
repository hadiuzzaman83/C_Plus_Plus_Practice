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
    int arr[5];
    cout<<"Enter the Element:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"The Numbers Are:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    list<int>mylist(arr,arr+5);
    list<int>::iterator it;
    //it=mylist.begin();
    //it++;
    //cout<<*it<<endl; 
    //mylist.insert(it,7);
    it=find(mylist.begin(),mylist.end(),3);
 
    if(it==mylist.end()){
        cout<<"not found"<<endl;;
    } 
    else{
        cout<<"found"<<endl;
        cout<<*it<<endl;
    }
    mylist.insert(it,7);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }


    return 0;


}