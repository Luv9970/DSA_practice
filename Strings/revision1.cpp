#include<bits/stdc++.h>
using namespace std;

int main(){
    // string s ="aaaabbbacccc";

    // vector<int> count(26,0);
    // for(int i=0 ; i<s.size() ; i++){
    //     count[s[i]-'a']++;
    // }
    // bool isodd = 0;
    // int ans=0;
    // for(int j=0 ; j<26 ; j++){
    //     if(count[j]%2 == 0){
    //         ans = ans + count[j];
    //     }
    //     else{
    //         ans = ans + (count[j]-1);
    //         isodd=1;
    //     }
    // }

    // if(isodd) cout << ans+1;
    // else cout << ans;





    string s ="leetcode";
    
    vector<char> vowel;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowel.push_back(s[i]);
        }
    }
    sort(vowel.begin() , vowel.end());
    int k=0;
    for(int i=0 ; i<s.size() ; i++){
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        s[i] = vowel[k];
        k++;
       } 
    }
    cout << s << endl;




}