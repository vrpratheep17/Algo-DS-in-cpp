#include<iostream>
#include<vector>

using namespace std;

class SpiralMatrix{
    vector<int> v1;
    public:
    

    void spiralMatrix(vector<vector<int>> &input){
     
        int m=input.size()-1;
        int n=input[0].size()-1;
        int sr=0,er=m,sc=0,ec=n;
        int count=0;
        while(sr<=er && sc<=ec){
            for(int i=sc;i<=ec;i++){
                v1.push_back(input[sc][i]);
            }
            sr++;
            for(int i=sr;i<=er;i++){
                v1.push_back(input[i][ec]);            
            }
            ec--;
            for(int i=ec;i>=sc;i--){
                v1.push_back(input[er][i]);
            }
            er--;
            for(int i=er;i>=sr;i--){
                v1.push_back(input[i][sc]);
            }
            sc++;
           
        }

    }
    void print() const{
        for(int i=0;i<v1.size();i++){
            cout<<v1.at(i)<<" ";
        }
    }
};


int main(){
    SpiralMatrix S1;
    vector<vector<int>> input={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    //cout<<input[0][1];
    S1.spiralMatrix(input);
    S1.print();
    

    return 0;
}