#include<iostream>
#include<vector>
using namespace std;


void print(vector<vector<int> > v,int sv, vector<bool> &visited){
    cout << sv << endl;
    int size = v.size();
    visited[sv] = true;
    for (int i = 0; i < size;i++){
        if(v[sv][i]==1 && visited[i]==false){
            print(v, i, visited);
        }
    }
}

int main(){
    int nodes, edges;
    cout << "Enter the nodes ";
    cin >> nodes;
    cout << endl;
    cout << "Enter the edges";
    cin >> edges;
    cout << endl;
    
    vector<vector<int>> matrix(nodes, vector<int>(nodes, 0));

    for (int i = 0; i < edges;i++){
        int firstNode, secondNode;
        cout << "Enter the first Node ";
        cin >> firstNode;
        cout << "Enter the second Node";
        cin >> secondNode;
        matrix[firstNode][secondNode] = 1;
         matrix[secondNode][firstNode] = 1;
    }
    vector<bool> visited(nodes, false);
    print(matrix, 0, visited);

    return 0;
}