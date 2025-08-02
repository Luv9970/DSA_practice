#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr, int size){
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " "; 
    }
}

void printSubarrays(int arr[], int n) {
    for (int i = 0; i < n; i++){
        for (int j=i; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int EqualSumSubarrayIndex(vector<int> arr){
    int n = arr.size();
    for(int i=0 ; i<n-1 ; i++){
        int sum1 = 0;
        int sum2 = 0;
        // Sum of the first half:
        for(int j=0 ; j<=i ; j++){
            sum1 += arr[j];
        } 
        // Sum of the second half of the array:
        for(int j=i+1 ; j<n ; j++){
            sum2 += arr[j];
        }
        if(sum1 == sum2) return i;
    }
    return -1;
}

int main(){
// ******************************* LECTURE-28 (Coder army)*********************************
    // Segregate 0's and 1's:
    // vector<int> v={1,1,1,0,0,1,0,1,0,1};
    // int start = 0;
    // int end = v.size()-1;
    // while(start < end){
    //     if(v[start] == 0){
    //         start++;
    //     }
    //     else{
    //         if(v[end] == 0){
    //             swap(v[start] , v[end]);
    //             start++;
    //             end--;
    //         }
    //         else{
    //             end--;
    //         }
    //     }
    // }
    // printArr(v , 10);



    // Two Sum Problem:
    // Method-1 : make use of two for loops:
    // Method-2 : iterate for a single time and use Binary Search:
    // Method-3 : Two pointer approach:
    // vector<int>v1 = {1,23,46,23,74,36,44,76,58,53,40,56,34,2,1,3,7};
    // sort(v1.begin() , v1.end());
    // printArr(v1 , 17);
    // cout << endl;
    // vector<int> ans;
    // int target = 100;
    // int start = 0;
    // int end = v1.size()-1;
    
    // while(start < end){
    //     if(v1[start] + v1[end] == target){
    //         ans.push_back(start);
    //         ans.push_back(end);
    //         start++;
    //         end--;
    //     }
    //     else if(v1[start] + v1[end] > target){
    //         end--;
    //     }
    //     else{
    //         start++;
    //     }
    // }
    // for(int i=0 ; i<ans.size() ; i++){
    //     cout << ans[i] << " ";
    // }




    // Pair with given difference:
    // vector<int> arr={5,10,3,2,50,80};
    // int diff = 45;
    // sort(arr.begin() , arr.end());
    // int start = 0;
    // int end = start+1; 

    // for(int i=0 ; i<arr.size(); i++){
    //     if(arr[end] - arr[start] == diff){
    //         cout << "The two numbers are: " << arr[end] <<" "<< arr[start];
    //         return 0;
    //     }
    //     else{
    //         if(arr[end] - arr[start] > diff){
    //             start++;
    //         }
    //         else if(arr[end] - arr[start] < diff){
    //             end++;
    //         }
    //     }
    // }
    // cout << "There was no such pair present in the array" << endl;



    // Two Product:
    // vector<int> arr={5,10,3,2,50,80};
    // sort(arr.begin() , arr.end());
    // int product = 150;
    // int start = 0;
    // int end = arr.size() -1;
    // vector<int> ans;
    // while(start < end){
    //     if(arr[start] * arr[end] == product){
    //         ans.push_back(start);
    //         ans.push_back(end);
    //         break;
    //     }else{
    //         if(arr[start] * arr[end] > product){
    //             end--;
    //         }else{
    //             start++;
    //         }
    //     }
    // }
    // for(int i=0 ; i<ans.size() ; i++){
    //     cout << ans[i] << " ";
    // }


    // ***************************************LECTURE-29 *************************************
    // Print all the subarrays:
    // Approach: Explanation of Each Loop:
        // Outer loop: picks the starting index of the subarray.
        // Middle loop: picks the ending index of the subarray.
        // Inner loop: prints elements from start to end.

    // int arr[] = {1, 2, 3};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // printSubarrays(arr, n);



    // Subarray with the given sum:
    // vector<int> ans = {3,4,-2,5,8,20,-10,8};
    // int n = EqualSumSubarrayIndex(ans);
    // if(n >= 0){
    //     cout << "The index at which the sum is equal is: " << n << endl;
    //     return 0;
    // }
    // cout << "There is no such index for which the sum of the 2 subarrays are equal";


    
    // Largest Sum Contiguous Subarray:
    // vector<int> v1={4,-6,2,8};
    // int n = v1.size();
    // METHOD-1 : BROTE FORCE:
    // int max_sum = 0; 
    // for(int start=0 ; start<n ; start++){
    //     for(int end=start ; end<n ; end++){
    //         int sum=0;
    //         for(int k=start ; k<=end ; k++){
    //             sum += v1[k];
    //             max_sum = max(max_sum , sum);
    //         }
    //     }
    // }
    // cout << "The maximum sum of the subarray is: " << max_sum << endl; 



    // METHOD-2: BETTER SOLUTION:
    // int max_sum = INT_MIN;
    // for(int start=0 ; start<n ; start++){
    //     int sum=0;
    //     for(int end=start ; end<n ; end++){
    //          sum += v1[end];
    //          max_sum = max(max_sum , sum); 
    //     }
    // }
    // cout << "The maximum value of sum is: " << max_sum; 



    // METHOD-3: KADANE'S ALGORITHM
    // int sum=0;
    // int max_sum=INT_MIN;
    // for(int i=0 ; i<n ; i++){
    //     sum += v1[i];
    //     max_sum = max(sum , max_sum);

    //     if(sum < 0) sum=0;
    // }
    // cout << "The maximum value of sum is: " << max_sum; 



    // Maximum Difference between 2 elements:
    // vector<int> v2={9,5,8,12,2,3,7,4};
    // int n=v2.size();

    // vector<int> ans(n,0);
    // ans[n-1] = v2[n-1];
    // for(int i=0 ; i<n-1 ; i++){
    //     int value=0;
    //     for(int j=i+1 ; j<n ; j++){
    //         int val2 = v2[j];
    //         value = max(value, val2); 
    //     }
    //     ans[i] = abs(v2[i] - value); 
    // }
    // int max_value = 0;
    // for(int i=0 ; i<ans.size()-1 ; i++){
    //     int val = ans[i];
    //     max_value = max(max_value , val);
    // }
    // cout << "The maximum difference is :" << max_value;
    return 0;
}