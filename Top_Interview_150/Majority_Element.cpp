#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        int majorityElement(vector<int>& nums){
            int candidate = 0;
            int count = 0;
            for(int num:nums){
                if(count == 0){
                    candidate = num;
                }
                if(candidate == num){
                    count++;
                }
                else{
                    count--;
                }
            }
            return candidate;
        }
};

int main(){
    int n;
    cout<<"nhập số lượng phần tử mảng: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"nhập mảng: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    solution s;
    int k = s.majorityElement(nums);
    cout<<"số có count > "<<n<<" /2 là:"<<k;
    return 0;
}