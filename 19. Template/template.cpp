#include<iostream>

using namespace std;

template<typename T, typename V>
class Pair{
    private:
        T x;
        V y;

    public:
    T getX(){
        return this->x;
    }

    V getY(){
        return this->y;
    }
    
    void setX(T value){
        this->x = value;
    }

    void setY(V value){
        this->y = value;
    }
};

int main(){
    Pair<Pair<int,int>,float> p1;
    
    p1.setY(2.55);

    Pair<int, int> temp;
    temp.setX(22);
    temp.setY(35);

    p1.setX(temp);
    cout << p1.getX().getX() << endl;

    return 0;
}