//#include<iostream> 
//#include<vector> 
//#include<queue> 
//using namespace std;
//bool visit_table[6];
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
//    for (int v = 0; v <V; v++)
//    {
//        cout << "\n Adjacency list of vertex "<< v+1 << "\n head ";
//        for (auto x : adj[v+1])
//            cout << "-> " << x;
//        printf("\n");
//    }
//}
//
//int main()
//{
//  for (int i = 0; i < 6; i++) {
//        visit_table[i] = 0;
//   }
//  /*
//    int vertice, edge;
//    cout << "\nEnter no of Vertices : ";
//    cin >> vertice;
//    cout << "\nEnter no of Edges : ";
//    cin >> edge;*/
//    int V = 5;
//    vector<int> adj[6];
//    addEdge(adj, 1, 2);
//    addEdge(adj, 1, 4);
//    addEdge(adj, 4, 2);
//    addEdge(adj, 2, 3);
//    addEdge(adj, 2, 5);
//    addEdge(adj, 3, 5);
//    addEdge(adj, 3, 4);
//    printGraph(adj, V);
//    queue<int>q;
//    q.push(1);//source edge
//    visit_table[1] = 1;
//    cout << "\nDequeued \n";
//    while (!q.empty())
//    {
//       //front() gives the first elment entered into queue
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
