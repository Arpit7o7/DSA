#include <bits/stdc++.h>
#include<vector> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0;
	int j=0;
	vector<int> res;
	while(i<arr1.size()&&j<arr2.size()){
		if(arr1[i]==arr2[j]){
			res.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
		else{
			i++;
		}
	}
	return res;
}