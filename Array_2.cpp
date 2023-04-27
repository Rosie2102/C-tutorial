#include <iostream>
#include<vector>

using namespace std;

int main(){

    vector<string> veggies(0);
    veggies.push_back("carrot");
    veggies.push_back("tomato");
    veggies.push_back("celery");
    veggies.push_back("spinach");
    veggies.erase(veggies.begin()+1);
    veggies.at(1) = "potato";
    for (int i=0; i<veggies.size(); i++) {
    cout << veggies[i] << endl;
}
}
