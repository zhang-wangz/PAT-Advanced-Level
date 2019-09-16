#include<iostream>
#include<algorithm>

using namespace std;

int n,m,c1,c2;
int wsum[510],weight[510],num[510],e[510][510],dis[510];//wsum是每个城市所获得的最多的医疗队，dis是到每个的最短距离
//e是每个城市之间的距离，weight是每个城市的医疗队个数
bool visited[510];
const int inf = 99999999;
int main(){
    fill(e[0],e[0] + 510*510, inf);
    fill(dis,dis + 510, inf);
    scanf("%d%d%d%d",&n,&m,&c1,&c2);
    for(int i=0;i<n;i++){
        scanf("%d",&weight[i]);
    }
    int a,b,c;
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&a,&b,&c);
        e[a][b]=e[b][a]=c;
    }
    num[c1]=1;
    dis[c1]=0;
    wsum[c1]=weight[c1];
    
    for(int i=0;i<n;i++){
        int u=-1,minf=inf;
        for(int j=0;j<n;j++){
            if(visited[j]==false && dis[j]<minf){
                u = j;
                minf = dis[j];
            }
        }
        if(u == -1) break;
        visited[u] = true;
        for(int v=0;v<n;v++){
            if(visited[v]==false && e[u][v]!=inf){
                if(dis[u] + e[u][v] < dis[v]){
                    dis[v] = dis[u] + e[u][v];
                    num[v] = num[u];
                    wsum[v] = wsum[u] + weight[v];
                }else if(dis[u] + e[u][v] == dis[v]){
                    num[v] = num[u] + num[v];
                    if(wsum[v] < wsum[u] + weight[v]){
                        wsum[v] = wsum[u] + weight[v];
                    }
                }
            }
        }
    }
    printf("%d %d",num[c2],wsum[c2]);
    
}
