//
//  main.cpp
//  PAT1006

// 1006 Sign In and Sign Out
//  Created by wangz on 2019/9/16.
//  Copyright © 2019 wangz. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
const int Inf = 99999999;
int main() {
    int n;
    scanf("%d",&n);
    string s;
    int a,b,c,d,e,f;
    string unlock,lock;
    int timeIn,timeOut;
    int max=0,min=Inf;
    for(int i=0;i<n;i++){
        cin >> s;
        scanf("%d:%d:%d %d:%d:%d",&a,&b,&c,&d,&e,&f);
        timeIn = a*3600+b*60+c;
        timeOut = d*3600+b*60+c;
        if(timeIn<min) {
            min = timeIn;
            unlock = s;
        }
        if(timeOut>max) {
            max = timeOut;
            lock = s;
    }
}
    cout << unlock + " " + lock;
}
