#include<iostream>
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
     Sum(n-2) + n;
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
    int sum = Sum(5);
    cout << "The sum is" << sum;

    



    return 0;
}