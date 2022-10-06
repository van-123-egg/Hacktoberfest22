#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j =0;
        int i = nums1.size()-1;
        while(j<n && i>=0)
        {
            if(nums1[i]>nums2[j]){  
                swap(nums1[i],nums2[j]);
                i--;
                j++;
            }
            else{
                break;
            }
        }
        sort(nums1.begin(),nums1.end()); 
        sort(nums2.begin(),nums2.end());
        
        for(int i = 0;i<m;i++)
        {
            cout<<nums1[i]<<" ";
        }
        for(int j=0;j<n;j++)
        {
            cout<<nums2[j]<<" ";
        }
    }



int main()
{
    vector<int>nums1={1,3,5,7,9};
    vector<int>nums2={2,4,6};
    int m = nums1.size();
    int n = nums2.size();
    merge(nums1,m,nums2,n);



    return 0;
}