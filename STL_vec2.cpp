#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>


using namespace std;

int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(90);

    for(int i=0;i<5;i++){
        cout<<vec[i]<<"\t";
    }
    //puts("");
    cout<<"\n";
    //it=vec.begin();
    //it++;
    //cout<<*it<<endl;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
    }

}
