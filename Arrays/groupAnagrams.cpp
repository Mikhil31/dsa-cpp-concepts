// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
// Example 2:

// Input: strs = [""]
// Output: [[""]]
// Example 3:

// Input: strs = ["a"]
// Output: [["a"]]
#include <iostream>

using namespace std;

int main() {
    string set[100], dup[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>set[i];
    }
    for(int i=0;i<size;i++){
        dup[i]=set[i];
    }
    int k=0;
    char temp;
    for(int i=0;i<dup[k].size();i++){
        for(int j=0;j<dup[k].size();i++){
            temp= dup[k][j];
            

        }
     k++;
    }

}

