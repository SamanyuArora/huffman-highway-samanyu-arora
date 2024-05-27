// Online C++ compiler to run C++ program online
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
    int number;
    cin>>number;
    int start = 1;
    for(int i=1;i<=number;i++){
    for(int j=1;j<=number;j++){
        if(j%2==1){
         for(int j=1;j<=number;j++){
            if(j<=i) {
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }   
        }
        else{
            for(int j=number;j>=1;j--){
            if(j<=i) {
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        }
    }  
        cout<<endl;
    }

    return 0;
}