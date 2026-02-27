#include<iostream>
#include<vector>
#include<limits>
using namespace std;

class solution{
    public:
        int maxProfit(vector<int>& prices){
            int minPrice = INT_MAX;
            int maxProfit = 0;

            for(int price: prices){
                if(price < minPrice){
                    minPrice = price;
                }
                else{
                    maxProfit = max(maxProfit, price - minPrice);
                }
            }
            return maxProfit;
        }
};

int main(){
    int n;
    cout<<"nhập số ngày mua bán: ";
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cout<<"nhập giá ngày "<<i<<": ";
        cin>>prices[i];
    }
    solution s;
    int k = s.maxProfit(prices);
    cout<<"giá bán lớn nhất là: "<<k;
    return 0;
}