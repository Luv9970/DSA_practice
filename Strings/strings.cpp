#include<bits/stdc++.h>
using namespace std;


int size_of(string s){
    int i=0;
    while(s[i] != '\0'){
        i++;
    }

    return i;
}

// rotate clockwise by 2-places:
void rotate_clockwise(string& s){
    string str;
    int n = s.size();
    // Copying first 2 elements:
    for(int i=0 ; i<2 ;i++){
        str = str + s[i];
    }

    // Shifting Process:
    for(int i=2 ; i<n ; i++){
        s[i-2] = s[i]; 
    }

    // Copying process:
    for(int i=0 ; i<str.size() ; i++){
        s[n-2+i] = str[i]; 
    }    
}

// Chat GPT:
void rotate_clockwise1(string& s){
    if (s.size() < 2) return; // Edge case
    string str = s.substr(0, 2);     // Save first 2 chars
    s = s.substr(2) + str;           // Append them to the end
}

// rotate anti_clockwise by 2 places:
void rotate_anticlockwise(string& s){
    string ans;
    int n =s.size();
    // copying last 2 elements:
    for(int i=n-2 ; i<n ; i++){
        ans = ans + s[i];
    }

    // shifting each element by 2 places foraward:
    for(int i=n-2 ; i>=0 ; i--){
        s[i+2] = s[i]; 
    }

    // Copying the last 2 elements to the first 2 places:
    for(int i=0 ; i<ans.size() ; i++){
        s[i] = ans[i];
    } 
}

int main(){

    // string s = "Rohit Negi";
    // string t = "Luv is a good boy";
    // cout << s << endl;
    // cout << t << endl;



    // Reverse a string:
    // string s= "Rohit";
    // int start=0;
    // int end=s.size() -1;
    // while(start < end){
    //     swap(s[start] ,s[end]);
    //     start++;
    //     end--;
    // } 
    // cout << "The reversed string is : " << s << endl;



    // Calculating length of the string:
    // cout << "The size of the string s is : " << size_of(s) << endl;



    // Check palindrome:
    // string s2 = "naman";
    // int start =0 ; 
    // int end =s2.size()-1;
    // while(start < end){
    //     if(s2[start] != s2[end]){
    //         cout << "The string is not a palindrome" << endl;
    //         return 0;
    //         break;
    //     }
    //     start++;
    //     end--;
    // }
    // cout << "It is a palindrome " << endl;



    // Defanging an IP address:
    // string address ="1.1.1.1.1";
    // string ans = "";
    // for(int i=0 ; i<address.size() ; i++){
    //     if(address[i] != '.'){
    //         ans = ans + address[i];
    //     }else{
    //         ans = ans + "[.]";
    //     }
    // }
    // cout << ans << endl;



    // Check if string is rotated by two places:
    // string s1 = "amazon";
    // string s2 = "azonam";
    // rotate_clockwise(s1);
    // cout << s1 << endl;
    // rotate_anticlockwise(s1);
    // cout << s1 << endl;



    // Check Pangram:
    // string sentence = "thequickbrownfoxjumpsoverthelazydog";
    // vector<int> ans(26,0);
    // // hashing the characters:
    // for(int i=0 ; i<sentence.size() ; i++){
    //     int t = sentence[i] - 'a';
    //     ans[t]++;
    // } 
    // checking if all characters are present:
    // for(int j=0 ; j<26 ; j++){
    //     if(ans[j] == 0){
    //         cout << "The given sentence is not a panogram" << endl;
    //         return 0;
    //     }
    // }
    // cout << "The given sentence is a panogram" << endl;



    // Sort a string:
    // string s1 = "hellosdbvjshvjvsadns";
    // vector<int> hashed_arr(26,0);
    // string ans="";
    // // first iterate on the whole string and count the number of frequency of each characters:
    // for(int i=0 ; i<s1.size() ; i++){
    //     hashed_arr[s1[i] - 'a']++;
    // }
    // // just print that character that many times:
    // for(int j=0 ; j<26 ; j++){
    //     char ch = 'a' + j;
    //     while(hashed_arr[j] != 0){
    //         ans = ans + ch;
    //         hashed_arr[j]--;
    //     }
    // }
    // cout << ans << endl;



    // Longest Palindrome:
    string s2="aaaaaiubibdsicsdcisdcsdicsodcsdocsd";
    vector<int> count(26,0);
    int ans = 0;
   
    cout << "The length of the longest palindrome is : " << ans << endl;


    return 0;
}