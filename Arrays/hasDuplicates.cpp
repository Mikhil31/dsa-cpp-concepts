/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

Constraints:
1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/

#include <iostream>
using namespace std;
int main(){
    int nums[40], size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    int st=0;
    for(int i=0;i<size;i++){
     for(int j=0;j<size;j++){
        if(nums[i]==nums[j]&& i!=j){
            st=-1;
            break;
        } else{
            st=0;
        }
     }
    }

    if(st==-1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
