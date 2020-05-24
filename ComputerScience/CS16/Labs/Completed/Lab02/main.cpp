#include <iostream>
#include <cstdlib>
using namespace std;

int n = 0;
string starL(int w, int h);
string starT(int w, int h);
string starC(int w, int h);
string starZ(int w);

int a, b;

int main(int argc, char** argv){
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    while(a == -1 || b == -1){
        cout<<"Enter strings"<<endl;
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
        cout<<starZ(a);
    }
    if(a != -1 || b != -1){
        cout<<starL(a,b)<<endl<<"L"<<endl;
        cout<<starT(a,b)<<endl<<"T"<<endl;
        cout<<starC(a,b)<<endl<<"C"<<endl;
        cout<<starZ(a)<<endl<<"Z"<<endl;
    }
    return 0;
}
string starL(int w, int h){
    string temp = "";
    if(w <= 1 || h <=1){
        return temp;
    }
    for(int i = 0; i < h-1; i++){
        temp += "*\n\r";
    }
    for(int i = 0; i < w; i++){
        temp += "*";
    }
    return temp;
}

string starT(int w, int h){
    string temp = "";
    if(w%2 == 0 || h <=1){
        return temp;
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(i == 0 || j == w/2){
                temp += "*";
            }
            else{
                temp += " ";
            }
        }
        if(i != h-1)
            temp += "\n\r";
    }
    return temp;
}

string starC(int w, int h){
    string temp = "";
    if(w <= 1 || h <= 2){
        return temp;
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(i == 0 || i == (h-1) || j == 0){
                temp += "*";
            }
            /*else{
                temp += "";
            }*/
        }
        if(i != h-1)
            temp += "\n\r";
    }
    return temp;
}
string starZ(int w){
    string temp = "";
    if(w <= 2){
        return temp;
    }
    int LineLength = w;
    string temp1 = "";
    for(int i = 0; i < w; i++){
        for(int j = 0; j < LineLength; j++){
            if(i == 0){
                temp += "*";
                if(j == LineLength - 2){
                    temp1 = temp;
                }
            }
            else{
                if(j != LineLength - 1){
                    temp += " ";
                }
                else{
                    temp += "*";
                }
            }
        }
        LineLength--;
        if(i != w-1)
            temp += "\n\r";
    }
    temp += temp1 + "\n\r";
    return temp;
}