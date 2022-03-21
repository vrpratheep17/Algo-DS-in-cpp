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
         for (int i = 0; i < visisted.size();i++){
             if(visisted[i] !=true){
                    dfsuTil(i, visisted);
             }
         }
            
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


    void dfs_disG(){

    }

    void bfs(){
          vector<int> visisted(sizeL,0);
          for (int i = 0; i < visisted.size();i++){
              if(visisted[i]!=true){
                    bfsUtil(i,visisted);
              }
              
          }
    }

    void bfsUtil(int index, vector<int> &visisted){
        queue<int> q;
        q.push(index);
      
        cout << index << endl;
        visisted[index] = true;
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
void bfsCount(){
        int c = 0;
        
        
        vector<int> visisted(sizeL, 0);
       
        for (int i = 0; i < visisted.size(); i++)
        {
           
            if (visisted[i] != true)
            {
               c = c + 1;
                
                bfsUtil(i, visisted);
            }
              
          }
          cout << "count is " << c;
    }

void dfsCount(){
    int c = 0;
    vector<int> visisted(sizeL, 0);
    for (int i = 0; i < visisted.size(); i++)
    {
        if (visisted[i] != true)
        {
            c = c + 1;
            dfsuTil(i, visisted);
        }
         }
         cout << "count is " << c;
}
};


int main(){

    Graph *g = new Graph(7);
    
    g->insert(0, 1);
    g->insert(1, 6);
    g->insert(1, 3);
    g->insert(6, 3);
    g->insert(1, 6);

    g->insert(2, 4);
    g->insert(2, 5);
    g->insert(4, 5);
    
    // g->dfs();

    // g->bfs();
 g->dfsCount();

    return 0;
}