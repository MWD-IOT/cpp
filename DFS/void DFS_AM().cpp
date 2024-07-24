
#include <iostream>
void printg()
{
    cout<<"图的邻接矩阵为："<<endl;
    for(int i; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        cout<<E[i][j]<<"\t";
    }
}
void DFS_AM()
{
    visited[u] = true;
    cout<<u<<"\t";
    for (int v=1; v<=n; v++)
    {
        if(E[u][v]&&!visited[v])
        DFS_AM(V);
    }
}

int main()
{
    createAM();
    printg();
    memset(visited, flase, sizeof(visited));
    cout<<"深度优先遍历序列："<<endl;
    DNS_AM(1);
    return 0;
}