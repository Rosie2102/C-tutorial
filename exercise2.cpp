#include<iostream>
using namespace std;

class Mother{
    public:
    void display(){
        cout<<"mother"<<endl;
    }
};
class Daughter: public Mother{
    public:
    void display(){
        cout<<"daughter"<<endl;
    }
};
int main(){
    Mother mom;
    Daughter daughter;
    mom.display();
    daughter.display();
    return 0;
}
