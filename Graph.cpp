#include <vector>;
#include <unordered_map>;
#include <iostream>;
#include <unordered_set>;
using namespace std;

class Graph {
    private:
        vector<vector<int>> graph;

    public:
        void generateGraph(int kind){
            // generate diff graphs based on kind desired
            // directed graph 

        }

        vector<vector<int>> getGraph(){
            return graph;
        }

        ~Graph(){
            // delete all allocated memory for graph (if necessary)
        }

        vector<int> findCycle(){
            // dfs, return any cycle
            // return list of verts in cycle, start end same one


        }

        unordered_map<int, vector<int>> shortestPaths(){

        }

        void helperDFS(vector<vector<int>>& components, int& vertex, vector<bool>& visited) {
            // for connected components

            visited[vertex] = true;

            // add to connected component
            int back = components.size() -1;
            components[back].push_back(vertex);

            //visit neighbors (if possible)
            for (int i = 0; i < this->graph[vertex].size(); i++){
                int neighbor = this->graph[vertex][i];
                if (!visited[neighbor]){
                    helperDFS(components, neighbor, visited);
                }
            }
        }


        vector<vector<int>> connectedComponents() {
            // for undirected specifically thoooooo

            int n = this->graph.size();

            // visited array
            vector<bool> visited(n, false);

            // connected components array
            vector<vector<int>> components;

            // perform dfs
            int res = 0;
            for (int i = 0; i < n; i++){
                if (!visited[i]){
                    components.push_back({});
                    helperDFS(components, i, visited);
                    res++;
                }
            }

            return components;
        }




        




};