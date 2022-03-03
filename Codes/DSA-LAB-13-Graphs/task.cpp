//#include<iostream> 
//#include<vector> 
//#include<queue> 
//using namespace std;
//bool visit_table[10];
//
//void addEdge(vector<int> adj[], int u, int v)
//
//{
//    adj[u].push_back(v);
//    adj[v].push_back(u);
//}
//
//void printGraph(vector<int> adj[], int V)
//{
//    for (int v = 0; v < V; v++)
//    {
//        cout << "\n Adjacency list of vertex " << v << "\n head ";
//        for (auto x : adj[v ])
//            cout << "-> " << x;
//        printf("\n");
//    }
//}
//
//int main()
//{
//    for (int i = 0; i < 10; i++) {
//        visit_table[i] = 0;
//    }
//    /*
//      int vertice, edge;
//      cout << "\nEnter no of Vertices : ";
//      cin >> vertice;
//      cout << "\nEnter no of Edges : ";
//      cin >> edge;*/
//    int V = 12;
//    vector<int> adj[12];
//    addEdge(adj, 0, 8);
//    addEdge(adj, 2, 8);
//    addEdge(adj, 2, 4);
//
//    addEdge(adj, 2, 1);
//    addEdge(adj, 1, 3);
//    addEdge(adj, 1, 9);
//
//    addEdge(adj, 3, 4);
//    addEdge(adj, 1, 7);
//    addEdge(adj, 7, 6);
//
//    addEdge(adj, 6, 5);
//    addEdge(adj, 8, 9);
//    addEdge(adj, 3, 5);
//    printGraph(adj, V);
//    queue<int>q;
//    q.push(1);//source edge
//    visit_table[0] = 1;
//
//    while (!q.empty())
//    {
//        int node = q.front();
//        q.pop();
//        cout << node << " ";
//        vector<int>::iterator it;
//        for (it = adj[node].begin(); it != adj[node].end(); it++) {
//            if (!visit_table[*it]) {
//                visit_table[*it] = 1;
//                q.push(*it);
//            }
//        }
//
//    }
//    return 0;
//
//}
//
