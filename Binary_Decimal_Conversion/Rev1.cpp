#include <iostream>
#include<math.h>
using namespace std;

int main(){
    // Decimal to binary conversion:
    int x = 13;

    // ***********************************METHOD-1 *********************************
    // int ans = 0;
    // while(x>0){
    //     int rem = x%2;
    //     ans = ans*10 + rem;
    //     x = x/2;
    // }
    // cout << "The value of ans is:" << ans << endl;
    // // reverse the number obtained:
    // int f_ans = 0;
    // while(ans>0){
    //     int last_digit = ans%10;
    //     f_ans = f_ans*10 + last_digit;
    //     ans = ans /10;
    // }
    // cout << "The value of f_ans is:" << f_ans << endl;


    // ********************************METHOD-2************************************
    // int ans=0;
    // int i=0;
    // int multiply = 1;
    // while(x>0){
    //     int rem = x%2;
    //     ans = rem * multiply + ans;
    //     multiply = multiply*10;
    //     x = x/2;
    // }
    // cout << "The value of ans is:" << ans << endl;


    // Binary to decimal conversion:
    // int binary = 1101;
    // int num = 0;
    // int i=0;
    // while(binary > 0){
    //     int last_digit = binary % 10;
    //     num = num + last_digit*pow(2,i);
    //     i++;
    //     binary = binary/10;
    // }
    // cout << "The value of number is:" << num << endl;



    // ******************Square Root of X*************************
    int n =36;
    int start = 1;
    int end = n;
    while(start < end){
        int mid = (start+end)/2;
        if(mid*mid == n){
            cout << "The SQRT of " << n << " is: " << mid;
            break;
        } 
        if(mid*mid < n){
            start = mid+1;
        }
        else if(mid*mid > n){
            end = mid-1;
        }
    }














    return 0;
}