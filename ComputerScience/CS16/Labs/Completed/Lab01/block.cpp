#include <iostream>
using namespace std;

int a = 1, b = 1;

int main(){
    while((a != 0) & (b != 0)){
        cout<<"Enter number of rows and columns:"<<endl;
        cin >> a >> b;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << "X.";
            }
            cout << endl;
        }
    }
}