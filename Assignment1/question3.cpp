#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int total=0;
    int high=0;
    int low=INT32_MAX;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        total+=arr[i];
        arr[i]>high?high=arr[i]:high+=0;
        arr[i]<low?low=arr[i]:low+=0;
    }
    float avg=total/10.0;
    int count=0;
    for(int i=0;i<10;i++){
        if((float)arr[i]>avg) count++;
    }
    cout<<"Highest Marks "<<high<<endl;
    cout<<"Lowest Marks "<<low<<endl;
    cout<<"Average Marks "<<avg<<endl;
    cout<<"No of students above average "<<count<<endl;
    cout<<"No of students below average "<<10-count<<endl;

    return 0;
}