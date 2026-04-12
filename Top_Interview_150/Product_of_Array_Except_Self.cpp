#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        vector<int> productExceptSelf(vector<int>& nums){
            int n = nums.size();
            vector<int> answer(n);

            answer[0] = 1;
            for(int i=1; i<n; i++){
                answer[i] = answer[i-1] * nums[i-1];
            }

            int suffix = 1;
            for(int i = n-1; i>=0; i--){
                answer[i] *= suffix;
                suffix *= nums[i];
            }

            return answer;
        }
};
int main(){
    int n;
    cout<<"nhập số lượng phần tử: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"nhập mảng: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    vector<int> result = s.productExceptSelf(nums);
    cout<<"kết quả: ";
    for(int i=0; i<n; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}