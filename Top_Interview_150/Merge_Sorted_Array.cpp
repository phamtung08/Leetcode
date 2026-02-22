#include <iostream> 
#include <vector>
using namespace std;

class Solution{
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
            int i = m - 1; //cuối phần tử thật của nums1
            int j = n - 1; //cuối phần tử của nums2
            int k = m + n - 1; //cuối phần tử của num1

            while(i >= 0 && j>=0){
                if(nums1[i] > nums2[j]){
                    nums1[k] = nums1[i];
                    i--;
                } else{
                    nums1[k] = nums2[j];
                    j--;
                }
                k--;
            }
            //nếu nums2 còn phần tử 
            while(j>=0){
                nums1[k] = nums2[j];
                j--;
                k--;
            }
            
        }
};

int main(){
    int m,n;
    cout<<"nhập m:";
    cin>>m;
    cout<<"nhập n:";
    cin>>n;
    vector<int> nums1(m+n);
    vector<int> nums2(n);
    cout<<"nhập "<<m<<" phần tử của nums1:";
    for(int i=0;i<m;i++){
        cin>>nums1[i];
    }
    cout<<"nhập "<<n<<" phần tử của nums2:";
    for(int j=0;j<n;j++){
        cin>>nums2[j];
    }
    Solution s;
    s.merge(nums1,m,nums2,n);
    cout<<"mảng sau khi merge:";
    for(int x:nums1){
        cout<<x<<" ";
    }
    return 0;
}