#include<iostream>
using namespace std;

class animal{
    protected:
        string name;
        int age;
    public:
        void set_data(string n, int a)
        {
            name = n;
            age = a;
        }
};
class Zebra : public animal{
    public:
    void message(){
        cout<<"Zebra's name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"They are cute"<<endl;
    }
};
class Dolphin : public animal{
    public:
    void message(){
        cout<<"Dolphin's name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"They are very cute"<<endl;
    }
};
int main(){
    Zebra zebra;
    Dolphin dolphin;
    zebra.set_data("Luke",10);
    zebra.message();
    dolphin.set_data("Dolphie",12);
    dolphin.message();

}