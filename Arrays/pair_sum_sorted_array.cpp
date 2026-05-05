//two pointer apparoach
#include<iostream>
using namespace std;
vector<int> pairSum(vector<int>nums,int target){
    vector<int>ans;
    int n=nums.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(target==nums[i]+nums[j])
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        else if(target<nums[i]+nums[j])
        {
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={2,7,11,15};
    // vector<int>nums;
    // nums.push_back(2);
    // nums.push_back(7);
    // nums.push_back(11);
    // nums.push_back(15);
    int target=9;

    vector<int>ans=pairSum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;

}