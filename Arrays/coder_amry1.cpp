#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr, int size){
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " "; 
    }
}

int main(){

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
    vector<int> arr={5,10,3,2,50,80};
    int diff = 45;
    sort(arr.begin() , arr.end());
    int start = 0;
    int end = start+1; 

    for(int i=0 ; i<arr.size(); i++){
        if(arr[end] - arr[start] == diff){
            cout << "The two numbers are: " << arr[end] <<" "<< arr[start];
            return 0;
        }
        else{
            if(arr[end] - arr[start] > diff){
                start++;
            }
            else if(arr[end] - arr[start] < diff){
                end++;
            }
        }
    }
    cout << "There was no such pair present in the array" << endl;




    return 0;
}