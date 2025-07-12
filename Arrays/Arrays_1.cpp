#include <bits/stdc++.h>
using namespace std;
// ********************************************************************************
// Printing an array: ✅
// Reverse of an Array: ✅
// Largest element in an array: ✅
// Second Largest element in an array: ✅
// Second Smallest element in an array: ✅
// Check if array is sorted or not:
// Remove duplicates from a sorted array:
// Left rotate an array by one place:
// Left rotate an array by 'D' places:
// Right rotate an array by one place:
// Right rotate an array by 'D' places:
// Move zeros to the end:

// *********************************************************************************

void print(vector<int> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(20);
    v.push_back(15);
    v.push_back(9);
    v.push_back(7);
    v.push_back(3);
    v.push_back(6);
    v.push_back(50);
    v.push_back(44);
    v.push_back(29);

    // Printing an array:
    cout << "Printing the original array:" << endl;
    print(v, 10);
    cout << endl;

    // // Reverse of an Array:
    // cout << "Printing the reversed array:" << endl;
    // reverse(v , 10);
    // print(v , 10);
    // cout << endl;



    // Largest element in an array:
    // // Brute Force: Simply sort the array and return the last element
    // int size = v.size();
    // sort(v.begin() , v.end());
    // int l_element = v[size-1];
    // cout << "The largest element is: " << l_element << endl;

    // // optimal solution: Iterate throught the array once and store the largest value in it initially assume largest value equal to INT_MIN;
    // int largest = INT_MIN;
    // for(int i=0 ; i<v.size() ; i++){
    //     if(v[i] > largest){
    //         largest = max(largest , v[i]);
    //     }
    // }
    // cout << "The largest value in the whole array is:" << largest << endl;



    // Second Largest/Smallest element in an array:
    // // Brute Force: First sort the array and then last value is larget element then starting from the right end whichever first element is not equal to the last element that will be my 2nd largest element:
    // int slargest = -1;
    // int largest;
    // sort(v.begin(),v.end());
    // for(int i=v.size()-1 ; i>=0 ; i--){
    //     largest = v[v.size()-1];
    //     if(v[i] != largest){
    //         slargest = v[i];
    //         break;
    //     }
    // }
    // cout << "The second largest element in the array was:" << slargest << endl;

    // // optimal Solution: I will iterate through the array once and will assume my first element as the largest element and as i found any member greater than that i will update my largest and the previous largest will become my 2nd largest
    // int largest = v[0];
    // int slargest = -1;
    // for(int i=0 ; i<v.size() ; i++){
    //     if(v[i] > largest){
    //         slargest = largest;
    //         largest = v[i];
    //     }
    //     if(v[i] < largest && v[i] > slargest){
    //         slargest = v[i];
    //     }
    // }
    // cout << " The second largest elemnt of the array is:" << slargest << endl;



    // Second smallest element:
    // // Brute Force: First sort the array and then first value is smallest element then starting from the left end whichever first element is not equal to the first element that will be my 2nd smallest element:
    // int ssmallest = -1;
    // int smallest;
    // sort(v.begin(),v.end());
    // for(int i=0 ; i<=v.size()-1 ; i++){
    //     smallest = v[0];
    //     if(v[i] != smallest){
    //         ssmallest = v[i];
    //         break;
    //     }else{
    //         cout << "There is no 2nd smallest element. All elements are equal"<< endl; 
    //     }
    // }
    // cout << "The second smallest element in the array was:" << ssmallest << endl;

    //  // optimal Solution: I will iterate through the array once and will assume my first element as the largest element and as i found any member greater than that i will update my largest and the previous largest will become my 2nd largest
    // int smallest = v[0];
    // int ssmallest = INT_MAX;
    // for(int i=0 ; i<v.size() ; i++){
    //     if(v[i] < smallest){
    //         ssmallest = smallest;
    //         smallest = v[i];
    //     }
    //     if(v[i] > smallest && v[i] < ssmallest){
    //         smallest = v[i];
    //     }
    // }
    // cout << " The second smallest elemnt of the array is:" << ssmallest << endl;

    

    // Check if array is sorted or not:
    // Remove duplicates from a sorted array:
    // Left rotate an array by one place:
    // Left rotate an array by 'D' places:
    // Right rotate an array by one place:
    // Right rotate an array by 'D' places:
    // Move zeros to the end:

    // *****************************************************************************

    // Linear Search:
    // First Occurance in an array:
    // Last Occurance in an array:

    // Union of two given sorted array:
    // Intersection of two given sorted arrays:

    return 0;
}