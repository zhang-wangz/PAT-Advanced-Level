//Counting Leaves
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int>v[100];
int book[100];
int maxdepth = -1;
void dfs(int index,int depenth){
    if(v[index].size()==0){
        book[depenth]++;
        maxdepth = max(maxdepth,depenth);
        return ;
    }else{
        for(int i=0;i<v[index].size();i++){
            dfs(v[index][i],depenth+1);
        }
    }
}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int node,k;
    for(int i=0;i<m;i++){
        scanf("%d%d",&node,&k);
        for(int j=0;j<k;j++){
            int x;
            scanf("%d",&x);
            v[node].push_back(x);
        }
    }
    dfs(0,0);
    printf("%d",book[0]);
    for(int i=1;i<=maxdepth;i++){
        printf(" %d",book[i]);
    }
    return 0;
}
