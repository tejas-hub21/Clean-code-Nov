#include<iostream>
#include<string>
using namespace std;


int main()
{
    string names[] ={"pen","pencil","banana","cherry","blueberry"};

    int size = sizeof(names) / sizeof(names[0]);

    cout<<"Names starting with 'b' :"<<endl;

    for(int i=0; i<size; i++){
        if(names[i][0]=='b')
        {
            cout<< names[i] << endl;
        }
    }

}