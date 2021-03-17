#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

//bool myfunc(int a , int b){
   // return (a>b);
//}
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    vec.push_back(50);
    vec.push_back(250);
    vec.push_back(100);
    vec.push_back(500);
    vec.push_back(1000);
    vec.push_back(150);

    //sort(vec.begin(),vec.end(),myfunc);
    sort(vec.begin(),vec.end());

    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
    }

}