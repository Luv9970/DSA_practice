#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}



int main()
{

    // Union of two given sorted array:
    //    vector<int> arr1 = {1, 2, 3, 4, 5};
    //    vector<int> arr2 = {2, 3, 5, 6,7};
    //    int m = arr1.size();
    //    int n = arr2.size();

    //     // 2 pointer Approach:
    //     int i=0 , j=0;
    //    vector<int> union_array;
    //    while(i<m && j<n){
    //     if(arr1[i] <= arr2[j]){

    //     }

    //    }



    // Intersection of two given sorted arrays:
    // vector<int> intersection;
    // int i = 0, j = 0;
    // for(int k=0 ; k<min(m,n) ; k++){
    //     if(arr1[i] < arr2[j]){
    //         i++;
    //     }
    //     else if(arr1[i] > arr2[j]){
    //         j++;
    //     }else{
    //         intersection.push_back(arr1[i]);
    //         i++;
    //         j++;
    //     }
    // }
    // print(intersection);



    // Find missing number in an array:
    // we can use 2 approaches for this :
    // 1. Sum approach
    // 2. XOR approach



    // Find the number that appears only once and other number twice:
    // First initialzie the sum with zero and sare elements ka XOR kar do last me we are left with the number which is unique.



    // Maximum consecutive ones:
    // vector<int> v = {1,1,1,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1};
    // int count = 0;
    // int max_count=0;

    // for(int i=0 ; i<v.size() ; i++){
    //     if(v[i] == 1){
    //         count++;
    //         max_count = max(max_count , count);
    //     }else{
    //         count=0;
    //     }
    // }
    // cout << "Maximum number of consecutive ones are:" << max_count;



    // Longest subarray with the given sum:
    // Two sum problem:
    // sort an array of 0's , 1's and 2's:
    // Majority Element:
    // Maximum subarray sum
    // Rearrange array elements by sign:
     
    vector<int> v={1,2,2,1,3};

    vector<vector<int>> ans;
    vector<int> count; 
    vector<int> hashed_arr;

    for(int i=0 ; i<v.size() ;i++){
        hashed_arr[v[i]]++;
    }

    for(int i=0 ; i<hashed_arr.size() ; i++){
        if(hashed_arr[i] != 0){
            count.push_back(i);
            count.push_back(hashed_arr[i]);
            ans.push_back(count);
        }
    }

    print(ans[0]);
    print(ans[1]);
    print(ans[2]);
    print(ans[3]);


    return 0;
}