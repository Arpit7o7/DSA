#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> A ={23,34,56,78,90,12};
    int n;
    int count=0;
    int in;
    cout<<"Enter the element to be searched: ";
    cin>>n;
    int len=A.size();
    for(int i =0;i<len;i++){
        if(A[i]==n){
            count++;
            in=i;
            break;
        }
        else{
            count=count;
        }
    }
    if(count!=0){
        cout<<"ELement Found At loc:"<<in;
    }
    else{
        cout<<"Element is not present in array";
    }
    return 0;
}