#include<iostream>
#include<list>
using namespace std;
// Adj list repersention of Graph
class Graph{
	public:
	int v;// number of vertices
	// array of list
	list<int>*adjList;
	// initilize v and list
	Graph(int node){
		adjList=new list<int>[node];
		v=node;
	}
	// function to add edge in graph
	void addEdge(int v,int u){
		// do not consider edges are bidirectional
		adjList[v].push_back(u);
		/*
		if edge is bidirectional -> adjList[u].push_back(v);\
		****************************************
		internal repersention of adjList...
		adjList[0]->node->node->node..... (nodes that are connected with node 0)
		adjList[1]->node->node->node.....(nodes that are connected with node 1)
		................
		................
		................
		*/
	}
	// method to print the list
	void print(){
		for(int i=0;i<v;i++){
			for(int node:list[i]){
				cout<<node<<" ";
			}
			cout<<endl;
		}
	}
};
int main(){
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,3);
	g.print();
	
	return 0;
}
