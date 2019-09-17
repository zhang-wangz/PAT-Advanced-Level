//
//  main.cpp
//  PAT1005
//
//  Created by wangz on 2019/9/16.
//  Copyright © 2019 wangz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    string s,su;
    int sum=0;
    cin >> s;
    for(int i=0;i<s.length();i++){
        sum += (s[i]-'0');
    }
    su = to_string(sum);
    string strlist[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout << strlist[su[0]-'0'];
    for(int i=1;i<su.length();i++){
//        printf(" %s",su[i]);
        cout << " " << strlist[su[i]-'0'];
    }
    return 0;
}
