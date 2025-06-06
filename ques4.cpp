#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        if (nums1.size()%2==0){
            return(double) (nums1[nums1.size()/2]+nums1[(nums1.size()/2)-1])/2;
        }
        else{
            return(double) nums1[nums1.size()/2];
        }
    }
};
int main(){
    Solution s;
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    cout<<s.findMedianSortedArrays(nums1,nums2);
    return 0;
}