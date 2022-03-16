#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
int main(){

    vector<int> v={1,2,1,2,6,4,7,7,3,2};
    vector<int> v2;
    unordered_map<int,int> m;

 for (auto i = 0; i < v.size();i++){
         if(m.count(v[i]) ==0){
              v2.push_back(v[i]);
              m[v.at(i)] = v[i];
              // m.insert(v.at(i), v[i]);
         }
     }

  


      for (int i = 0; i < v2.size();i++){
          cout << v2[i] << endl;
      };
}

