#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n/2;k++){
            int j;
            for(j=1;j<=i;j++){
                cout<<j;
            }
            for(;j<=n;j++){
                cout<<" ";
            }
            j--;
            for(;j>i;j--){
                cout<<" ";
            }
            for(;j>=1;j--){
                cout<<j;
            }
        }
        if(n%2==1){
            int j;
            for(j=1;j<=i;j++){
                cout<<j;
            }
            for(;j<=n;j++){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}