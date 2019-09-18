#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int>v(n);
int main(){
    int k;
    scanf("%d",&k);
    int x;
    int temp=0,sum=-1;
    int tempindex=0;
    int left=0,right=k-1;
    for(int i=0;i<k;i++){
        scanf("%d",&x);
        v.push_back(x);
        temp += x;
        if(temp < 0){
            temp=0;
            tempindex=i+1;
        }else if(temp > sum){
            sum=temp;
            left=tempindex;
            right=i;
        }
    }
    // 注意一下全部值都是负数的情况
    if(sum<0)sum=0;
    printf("%d %d %d",sum,v[left],v[right]);
}
