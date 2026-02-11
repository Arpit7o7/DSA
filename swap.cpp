#include <iostream>
#include<vector>
#include<utility>
 using namespace std ;
 int main(){
    vector<int> A= {1,2,3,4,5,6};
    int start = 0;
    int end = A.size()-1;
    while (end>start){
        swap(A[start],A[end]);
        start++;
        end--;
    }
    for (int i =0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    return 0;
 }