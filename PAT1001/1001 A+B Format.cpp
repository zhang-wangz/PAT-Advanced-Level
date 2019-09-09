//
//  main.cpp
//  PAT
//
//  Created by wangz on 2019/9/9.
//  Copyright © 2019 wangz. All rights reserved.
//
//该题主要是判别标准形式
//03d 左边填充0，-3d右边填充

#include <iostream>
using namespace std;

int main(){
    int a,b;
    int c;
    cin >> a >> b;
    c = a + b;
    if(c<0) {
        cout<<'-';
        c = -c;
    }
    if(c>= 1000000) printf("%d,%03d,%03d",c / 1000000,c%1000000/1000,c%1000);
    else if(c>=1000 && c<1000000) printf("%d,%03d",c/1000,c%1000);
    else cout << c;
    return 0;
}
