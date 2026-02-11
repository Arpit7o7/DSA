#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    vector<int> A ={1,-3,-3,0,-13,-6};
    int X = INT_MIN;
    auto max_int=max_element(A.begin(),A.end());
    for (int i = 0; i < A.size(); i++)
    {
        if(A[i]< *max_int){ 
            if(X > A[i]){
                X = X;
            }
            else{
                X = A[i]; 
            }
        }
    }
    cout<< X;
    return 0;
}