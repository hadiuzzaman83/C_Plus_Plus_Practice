#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;    
    cout<<"Enter the number of student : ";
    cin>>n;
    int k[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cout<<"Number for student "<<i+1<<":"<<" ";
        cin>>k[i];
        sum=sum+k[i];    
    }
    float avg=0.0;
    avg=(float) sum/n;
    cout<<"The Average Number is: "<<avg<<endl;
    int Max=k[0];
    int Min=k[0];
    for(int i=1;i<n;i++){
        if(Max<k[i]){
            Max=k[i];
        }
        if(Min>k[i]){
            Min=k[i];
        }
    }
    cout<<"Maximum number is: "<<Max<<endl;;
    cout<<"Minimum number is: "<<Min;
    return 0;

    
}
