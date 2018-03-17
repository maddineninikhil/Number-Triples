#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
class Graph{
	int V; 
	list< pair<int, int> > *adj;
  public:
	  Graph(int V);
	  void addEdge(int u, int v, int w);
	  void shortestPath(int s,int d);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list< pair<int, int> >[V];
}

void Graph::addEdge(int u, int v, int w){
	adj[u].push_back(make_pair(v, w));
	adj[v].push_back(make_pair(u, w));
}

void Graph::shortestPath(int src,int dest){
	set< pair<int, int> > setds;
	vector<int> dist(V, INF);
	setds.insert(make_pair(0, src));
	dist[src] = 0;
	while (!setds.empty()){
		pair<int, int> tmp = *(setds.begin());
		setds.erase(setds.begin());
		int u = tmp.second;
		list< pair<int, int> >::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i){
			int v = (*i).first;
			int weight = (*i).second;
			if (dist[v] > dist[u] + weight){
				if (dist[v] != INF)
					setds.erase(setds.find(make_pair(dist[v], v)));
				dist[v] = dist[u] + weight;
				setds.insert(make_pair(dist[v], v));
			}
		}
	}
	if(dist[dest-1]==INF)
	    cout<<"NO"<<endl;
	else{
	    cout<<"YES"<<endl;
	    cout<<dist[dest-1]<<endl;
	}
}
int main(){
    int m,a,b;
    cin>>m>>a>>b;
    int s[m],w[m],d[m],i,x,y,z;
    for(i=0;i<m;i++)
        cin>>s[i]>>w[i]>>d[i];
    x=d[0];
    for(i=0;i<m;i++)
        if(x<d[i])
            x=d[i];
    for(i=0;i<m;i++)
        if(y<d[i])
            y=d[i];
    if(x>y)
        x=x;
    else
        y=x;
    Graph g(x);
    for(i=0;i<m;i++){
        x=s[i];y=d[i];z=w[i];
        g.addEdge(x-1,y-1,z);
    }
    g.shortestPath(a-1,b);
	return 0;
}
