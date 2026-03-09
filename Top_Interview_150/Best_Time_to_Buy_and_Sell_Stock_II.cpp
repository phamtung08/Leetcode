#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        int maxProfit(vector<int>& prices){
            int profit = 0;
            for(int i=1; i<prices.size(); i++){
                if(prices[i]>prices[i-1]){
                    profit += prices[i] - prices[i-1];
                }
            }
            return profit;
        }
};
int main(){
    int n;
    cout<<"nhập số lượng: ";
    cin>>n;
    vector<int> prices(n);
    cout<<"nhập giá theo ngày: ";
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    solution s;
    int k = s.maxProfit(prices);
    cout<<"tổng lợi nhuận: "<<k;
}
