#include <bits/stdc++.h>

using namespace std;

typedef vector<char> vc;
typedef vector<vc> grafo;

vector<bool> vis;
int V, A, connected;
grafo LG;
vector<char> ans;

void dfs(char s)
{
    stack<int> st; 
    vis[s] = true;
    st.push(s);
    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        ans.push_back(u);
        for(int w : LG[u])
        {
            if(!vis[w])
            {
                dfs(w);
            }
        }
    }
}

int main()
{
    int t, caso = 1;
    cin >> t;
    while (t--)
    {
        cin >> V >> A;

        LG.assign(V+97, vc());
        vis.assign(V+97, false);

        char u, w;
        for(int i = 0; i < A; i++)
        {
            cin >> u >> w;
            LG[u].push_back(w);
            LG[w].push_back(u);
        }
        cout << "Case #" << caso << ":\n";
        connected = 0;
        for(int i = 97; i < V+97; i++)
        {
            if(!vis[i])
            {
                dfs(i);
                sort(ans.begin(), ans.end());
                for(auto i : ans)
                {
                    cout << i << ",";
                }
                cout << "\n";
                ans.clear();
                connected++;
            }
        }
        cout << connected <<" connected components\n\n";
        caso++;
    }
    return 0;
}