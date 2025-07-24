#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Fun3(int n){
    if(n == 0){
        cout << "Happy Birthday" << endl;
        return;
    }
    cout << n << " Days left for the birthday" << " ";
    cout <<"value of n is " << n << endl;
    Fun3(n-1);
}

void print(int count){
    if(count == 10){
        return;
    }

    count++;
    cout << "The value of count is: " << count << endl;
    print(count);

}

void Func1(int n){
    if(n == 0) return;
    cout << "Hey this is Luv " << "n = " << n << endl;
    Func1(n-1);
}

void Even(int n){
    if(n == 0) return;
    if(n % 2 == 0){
        cout << n << endl;
    }
    Even(n-1);
}

void Odd(int n){
    if(n == 0) return;

    if(n % 2 ==1){
        cout << n << endl;
    }
    Odd(n-1);
}

int Sum(int n){
    if(n == 0) return 0;

    cout << "n -> " << n << endl;
    return Sum(n-1) + n;
}

int Fact(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;

    return n*Fact(n-1);
}

int pow2(int n){
    if(n == 0){
        return 1;
    }

    return 2*pow2(n-1);
}

int s_square(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return n*n + s_square(n-1);
}

int fibonacii(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacii(n-1) + fibonacii(n-2);
}

void printArr(int arr[], int n){
    
}

int main(){

    // Fun3(5);
    // print(0);

    // Reccursion Questions:
    // Print name 5 times:
    // Print linearly from 1 to N:
    // Print linearly from N to 1:
    // Func1(5);



    // Print even numbers from N to 1:
    // Print even numbers from 1 to N:
    // Even(20);



    // Print odd numbers from N to 1:
    // Print odd numbers from 1 to N:
    // Odd(20); 



    // Sum of first N numbers:
    // int sum = Sum(5);
    // cout << "The sum is " << sum;



    // Factorial of N numbers:
    // int ans = Fact(6);
    // cout << "The factorial is " << ans << endl;
    


    // Power of 2:
    // create a general formulae for the power:
    // int ans = pow2(4);
    // cout << " The value of 2**4 is " << ans << endl;



    // Sum of square of N numbers:
    // int ans = s_square(3);    
    // cout << "The value of sum of squares is: " << ans << endl;



    // Fibonacci Sequence:
    // int n =10;
    // int ans = fibonacii(n);
    // cout << "The " << n << "th fibonacii number is : " << ans << endl;


    
    return 0;
}