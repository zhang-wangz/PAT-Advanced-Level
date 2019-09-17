#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int>v;
int main(){
    int k;
    scanf("%d",&k);
    int x;
    int temp=0,sum=0;
    int left=0,right=k-1;
    for(int i=0;i<k;i++){
        scanf("%d",&x);
        v.push_back(x);
        if(temp < 0){
            temp=0;
            left=i+1;
        }else if(temp > sum){
            sum=temp;
            right=i+1;
        }
    }
}
