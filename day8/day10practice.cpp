#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
      v1.push_back(50);
    v1.push_back(60);
      v1.push_back(70);
    v1.push_back(80);
    v1.insert(v1.begin(),500);
    v1.insert(v1.begin()+2,10000);

    // v1.pop_back();
    // v1.erase(v1.begin()+1);

cout<<"v1 capacity:"<<v1.capacity();
    for(int i=0; i<v1.size();i++)
    {
        cout<<"vector at position:"<<i<<"is:"<<v1.at(i)<<endl;
        // cout<< v1[i]<<endl;
    }
    

    return 0;
}