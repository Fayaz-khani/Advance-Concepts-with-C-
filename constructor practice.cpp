#include<iostream>
using namespace std;
class cube{

public:
    int side;
     cube(){
        side=10;
    }
};

int main(){
    cube c;
    cout<<c.side<<endl;
    return 0;
}