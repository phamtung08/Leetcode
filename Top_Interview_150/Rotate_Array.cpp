#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
        void rotateArray(vector<int>& nums, int k){
            int n = nums.size();
            k = k%n;
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());
        };
};

int main(){
    int n,k;
    cout<<"nhập số lượng phần tử mảng: ";
    cin>>n;
    cout<<"nhập số lượng cần đảo: ";
    cin>>k;
    vector<int> nums(n);
    cout<<"nhập mảng: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    solution s;
    s.rotateArray(nums,k);
    cout<<"mảng sau khi xử lý là: ";
    for(int x:nums){
        cout<<x<<" ";
    };
    return 0;
}