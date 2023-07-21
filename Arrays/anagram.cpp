/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 
*/

#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
   int c=0;

    for(int i=0;i<s.length();i++){
        if(s[i] != t[i]){
            c=-1;         
        }
        else{
            c=1;
        }
    }    if(c==-1){
        cout<<"not anagram";
    }    else{
        cout<<"anagram";
    }
}