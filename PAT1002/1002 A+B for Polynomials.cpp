//
//  1002 A+B for Polynomials.cpp
//  PAT
//
//  Created by wangz on 2019/9/9.
//  Copyright © 2019 wangz. All rights reserved.
//
//为了控制输出，在最后的输出里面由前面去除空格进行控制

#include "iostream"
using namespace std;
int main(){
    int m,n,c;
    double a[1001] = {0};
    double num;
    cin >> m;
    for(int i=0;i<m;i++){
        scanf("%d%lf",&c,&num);
        a[c] += num;
    }
    
    cin >> n;
    for(int i=0;i<n;i++){
        scanf("%d%lf",&c,&num);
        a[c] += num;
    }
    
    int cnt = 0;
    for(int i=0;i<1001;i++){
        if(a[i] != 0) cnt++;
    }
    
    cout<<cnt;
    for(int i =1000;i>=0;i--){
        if(a[i] != 0){
            printf(" %d %0.1lf",i,a[i]);
        }
    }
    return 0;
}
