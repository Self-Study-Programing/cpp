#include <iostream>
using namespace std;

int main(void){
    int num=12;
    int *ptr = &num;
    int **dptr = &ptr;

    int &ref=num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    // cout<<ref<<' '<<pref<<' '<<dpref<<endl;
    cout<<ref<<endl;
    // cout<<ptr<<' '<<dptr<<endl;
}