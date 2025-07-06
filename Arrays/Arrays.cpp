#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr , int size){
    int start = 0;
    int end = size-1;
    while (start <= end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void print(vector<int> arr , int size){
    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    vector <int> v;

    v.push_back(10);
    v.push_back(2);
    v.push_back(4);
    v.push_back(69);
    v.push_back(43);
    v.push_back(9);
    v.push_back(1);
    v.push_back(7);
    v.push_back(8);
    v.push_back(6);


    // Printing the vector:
    // print(v,10);
    cout << endl;





    //LARGEST ELEMENT IN AN ARRAY:
    // Brute Force:
    // int size = v.size();
    // sort(v.begin(),v.end());
    // int Largest = v[size-1];
    //     cout << "The largest value in the whole array is: "<< Largest;


    //Optimal Solution:
    // int largest = v[0];
    // int size = v.size();
    // for(int i=0 ; i<size ; i++){
    //     if(v[i] > largest){
    //         largest = v[i];
    //     }
    // }
    // cout << "The largest value in the whole array is: " << largest;





    // SECOND LARGEST ELEMENT IN AN ARRAY:
    // Brute Force:
    // Step1: sort the array:
    // int size = v.size();
    // sort(v.begin() , v.end());
    //sep2:Last value will be my largest value and value just lower than the largest value is my ans:
    // int Largest_1 = v[size-1];
    // int Largest_2;
    // for(int i=0 ; i<size ; i++){
    //     if(v[size-1-i] < Largest_1){
    //         Largest_2 = v[size-1-i];
    //         break;
    //     }
    // }
    // cout << "The value of 2nd Largest element is:" << Largest_2;


    // Optimal Solution:
    // int Largest2 = INT_MIN;
    // int Largest1 = v[0];
    // int size = v.size();
    // for(int i=0 ; i<size ; i++){
    //     if(v[i] > Largest1){
    //         Largest2 = Largest1;
    //         Largest1 = v[i];
    //     }else if(v[i] < Largest1 && v[i] > Largest2){
    //         Largest2 = v[i];
    //     }
    // }
    // cout << "My Second largest element in the array is:" << Largest2;





    //  SECOND SMALLEST ELEMENT IN AN ARRAY:
    // int smallest = v[0];
    // int ssmallest = INT_MAX;
    // int size = v.size();
    // for(int i=0 ; i<size ; i++){
    //     if(v[i] < smallest){
    //         ssmallest = smallest;
    //         smallest = min(v[i] , smallest);
    //     }else if((v[i] > smallest) && (v[i] < ssmallest)){
    //         ssmallest = v[i];
    //     }
    // }
    // cout << " The second smallest Number in the array is: " << ssmallest;





    // CHECK IF ARRAY IS SORTED OR NOT:
    // int num = v[0];
    // int size = v.size();
    // for(int i=1 ; i<size ; i++){

    //     if(v[i] <= v[i=1]){
    //         cout << "The array is sorted" << endl; 
    //     }else{
    //         cout<<"The array is not sorted"<<endl;
    //         break;
    //     }
    // }





    // REMOVE DUPLICATES FROM THE SORTED ARRAY:
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(3);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(6);

    // print(v,10);
    // cout<< endl;

    // Brute Force: Making use of a set data-sturcture
    // set<int> s;
    // int size = v.size();
    // for(int i=0 ; i<size ; i++){
    //     s.insert(v[i]);
    // }
    // int index = 0;
    // int set_size = s.size();
    // for (auto it : s){
    //     v[index] = it;
    //     index++;
    // }
    // print(v,10);


    // Optimal solution:
    // int i = 0;
    // int size = v.size();
    // for(int j = i+1 ; j<size ; j++){
    //     if(v[i] != v[j]){
    //         v[i+1] = v[j];
    //         i++;
    //     }
    // }
    // print(v,10);





    //LEFT ROTATE AN ARRAY BY ONE PLACE:
    // int temp1 = v[0];
    // int size = v.size();
    // for(int i=1 ; i<size ; i++){
    //     v[i-1] = v[i];
    // }
    // v[size-1] = temp1;
    // cout << "Left rotated array by 1 place:" << endl;
    // print(v , 10);
    // cout << endl;





    //LEFT ROTATE AN ARRAY BY D PLACE:
    // vector<int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(6);
    // print(arr,6);
    // cout <<endl;
    // // step1: Number of places we have to rotate = d%N;
    // int d = 3;
    // int n = arr.size();


    // // step2: copying vector in a temp upto d places:
    // vector<int> temp;
    // for(int i=0 ; i<d ; i++){
    //     temp.push_back(arr[i]);
    // }   
    // // print(temp,3);

    // // step3: Shifting:
    // for(int i=0 ; i<d ;i++){
    //     arr[i] = arr[d+i];
    // }
    // // print(arr , 3);
    // cout << endl;

    // //step4: Pushing back temp:
    // for(int i=d ; i<n ; i++){
    //     arr[i] = temp[i-d];
    // }
    // print(arr,6);





    // MOVE ZEROS TO THE END:
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(1);
    print(arr,10);
    cout <<endl;

    // Brute Force:
    // int size = arr.size();
    // vector<int> ans;
    // for(int i=0 ; i<size ; i++){
    //     if(arr[i] != 0){
    //         ans.push_back(arr[i]);
    //     }
    // }
    // cout << "The non zero values are:" << endl;
    // for(int i=0 ; i<ans.size() ;i++){
    //         arr[i] = ans[i];
    // }
    // for(int i=ans.size() ; i<size ; i++){
    //     arr[i] = 0;
    // }
    // cout <<"Finally moved aeros are:" << endl;
    // print(arr ,10);


    // Optimal Solution:
    // int j = -1;
    // int size = arr.size();
    // for(int i=0 ; i<size-1 ; i++){
    //     if(arr[i] == 0){
    //         j = i;
    //         break;
    //     }
    // }
    // // swap j from the next non zero element
    // for(int i=j+1 ; i<size ; i++){
    //     if(arr[i] != 0){
    //         swap(arr[i] , arr[j]);
    //         j++;
    //     }
    // }
    // print(arr , 10);




    
    // UNION OF TWO GIVEN ARRAYS:



    return 0;
}