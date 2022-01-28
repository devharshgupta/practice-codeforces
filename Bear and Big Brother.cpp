// problem url  https://codeforces.com/contest/791/problem/A

#include <iostream>

using namespace std;
int main(){

    int limak,bob,year=0;
    cin>>limak>>bob;

    if (limak>=bob){
        cout<<1;
        return 0;
    }
    while (limak<=bob){
        limak *=3;
        bob *=2;
        year++;
    }
    cout<<year;
    return 0;


}

