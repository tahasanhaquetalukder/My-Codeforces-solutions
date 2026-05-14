#include<bits/stdc++.h>
using namespace std;
vector<int> findErrorNums(vector<int>& nums) {
         vector<int>vec;
         int n=nums.size();
         int check=1;
         for(int i=0;i<n;i++)
         {
            if(nums[i]!=check && nums[i-1]==nums[i])
            {
                vec.push_back(nums[i]);
                vec.push_back(check);
            }
            check=check+1;
         }
         return vec;
}
int main()
{
   vector<int> v={1,1};
   vector<int>se=findErrorNums(v);
   for(int &x: se)
   {
    cout<<x;
   }
   return 0;

}