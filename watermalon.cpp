#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if (n %2 == 0 && n >= 4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<< endl;
    }

    return 0;
}