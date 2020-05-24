#include <iostream>
#include <cmath>
using namespace std;

int n = 0;

int main(){
    while(n != -1){
        cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
        cin >> n;
        if(n == -1){
            break;
        }
        float pi = 0.0;
        float k = 0;
        for(int i = 0; i <= n; i++){
            k += (pow(-1,i) / (2.0*i+1));
        }
        pi = 4.0 * k;
        int temp = n+1;
        if(temp == 1){
            cout << "The approximate value of pi using " << temp << " term is: ";
        }else{
            cout << "The approximate value of pi using " << temp << " terms is: ";
        }
        printf("%.3f\r\n", pi);
    }
}