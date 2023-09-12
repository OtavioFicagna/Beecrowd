#include<bits/stdc++.h>

using namespace std;

int V, A, t;
bool entrou;
char esp[200];
vector<bool> vis; 
vector<vector<bool>> graph;

void dfs(int s)
{
    vis[s] = true;
    strcat(esp, "  ");
    for(int i = 0; i < V; ++i)
    {
        if(graph[s][i])
        {
            entrou = true;
            if(!vis[i])
            {
                cout << esp << s << "-" << i << " pathR(G," << i << ")\n";
                dfs(i);
                esp[strlen(esp)-2] = 0;
            }
            else
            {
                cout << esp << s << "-" << i << "\n";
            }
        }
    }
}

int main()
{
    cin >> t;

    for(int i = 0;i < t; i++)
    {
        cout << "Caso " << i+1 << ":\n";
        cin >> V >> A;
        vis.assign(V, false);
        graph.assign(V, vector<bool>(V, false));

        int u, w;
        for(int j = 0; j < A; j++)
        {
            cin >> u >> w;
            graph[u][w] = true;
        }
        for(int j = 0; j < V; ++j)
        {
            entrou = false;
            esp[0] = 0;
            if(!vis[j])
            {
                dfs(j);
            }
            if(entrou)
            {
                cout << "\n";
            }
        }
        
    }
    return 0;
}