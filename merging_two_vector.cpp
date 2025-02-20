#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
    //  **********3ms********
//   class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
//         double med;
//         nums1.insert(nums1.end(),nums2.begin(),nums2.end());
//         sort(nums1.begin(),nums1.end());
//         if (nums1.size()%2==0){
//             med=nums1[nums1.size()/2]+
//             med=med+nums1[(nums1.size()/2)-1]/2;
//         }
//         else{
//             med=nums1[nums1.size()/2];
//         }
//     }
//     return med;
// };



    //  ******0ms*********
//       class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
//         double med;
//         nums1.insert(nums1.end(),nums2.begin(),nums2.end());
//         sort(nums1.begin(),nums1.end());
//         if (nums1.size()%2==0){
//             med=nums1[nums1.size()/2]+
//             med=med+nums1[(nums1.size()/2)-1]/2;
//             return(double) (nums1[nums1.size()/2]+nums1[(nums1.size()/2)-1])/2;
//         }
//         else{
//             return(double) nums1[nums1.size()/2];
//         }
//     }
// };



    // ******8ms*******
//     double med;
//     double num1;
//     double num2;
//     vector<int> nums1={1,2,5,6,7,8,9,10,11,12};
//     vector<int> nums2={17};
//     nums1.insert(nums1.end(),nums2.begin(),nums2.end());
//     sort(nums1.begin(),nums1.end());
//     if (nums1.size()%2==0){
//         num1=nums1[nums1.size()/2];
//         num2=nums1[(nums1.size()/2)-1];
//         med=(num1+num2)/2;
//     }
//     else{
//         med=nums1[nums1.size()/2];
//     }
//     cout<<fixed<<setprecision(5)<<med;
  