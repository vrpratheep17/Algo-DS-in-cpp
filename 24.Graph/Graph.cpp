#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Graph{
    vector<vector<int>> bucket;
    int sizeL;

public:
    Graph(int size){
        bucket.resize(size,vector<int>(size,0));
        sizeL = size;
    }

    void insert(int v1,int v2){
        bucket[v1][v2] = 1;
        bucket[v2][v1] = 1;
    }

    void dfs(){
     
         vector<int> visisted(sizeL,0);
         dfsuTil(0,visisted);
    }

    void dfsuTil(int index, vector<int> &visisted){
        cout << index << endl;
        visisted[index]=true;
        for (int i = 0; i < bucket.size();i++){
            if(bucket[index][i]==1 && visisted[i]==false){
                dfsuTil(i, visisted);
            }
        }
    }


    void bfs(){
        queue<int> q;
        q.push(0);
        vector<int> visisted(sizeL,0);
        cout << "0" << endl;
        visisted[0] = true;
        while(!q.empty()){
            for (int i = 0; i < bucket.size();i++){
                if(bucket[q.front()][i]==1 && visisted[i] !=true ){
                    cout << i << endl;
                      visisted[i] = true;
                    q.push(i);
                }
            }
            q.pop();
        }
    }
};

int main(){

    Graph *g = new Graph(7);
    
    g->insert(0, 2);
    g->insert(0, 1);
    g->insert(1, 3);
    g->insert(1, 4);
    g->insert(5, 3);
    g->insert(4, 5);
    g->insert(5, 6);
    g->insert(6, 2);
    // g->dfs();

    g->bfs();

    return 0;
}