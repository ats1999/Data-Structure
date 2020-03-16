#include<iostream>
#include<list>
#include<map>
using namespace std;
// make a template
template <typename T>
class Graph{
	map<T,list<T>>adjList;
	public:
		Graph(int numNode){
			
		}
		void addEdge(T u,T v){
			adjList[u].push_back(v);
		}
		void print(){
			for(auto row:adjList){
				T key=row.first;
				cout<<key<<" ->";
				for(T elem:row.second){
					cout<<elem<<"->";
				}
				cout<<endl;
			}
		}
};
int main(){
	// add edges here
}
