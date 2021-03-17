#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int array[3];
    array[0]=15;
    array[1]=20;
    cout<<array[0] <<"  " << array[1]<<endl;
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(30);
    vec.push_back(45);
    for(int v:vec){
        cout<<v<<" ";
    }
    puts("");
    cout << vec[0]<<"\n";
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

}