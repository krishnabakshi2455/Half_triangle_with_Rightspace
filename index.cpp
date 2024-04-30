#include <iostream>
using namespace std;

int main(){
    int range;
    cin>>range;
    int nospace=range-1;
    int nostar=1;

    for (int row = 1; row <=range; row++)
    {
        // space
        for (int space = 1; space <= nospace; space++)
        {
            cout<<" ";
        }
        
        //stars
        for (int star = 1; star <=nostar; star++)
        {
            cout<<"*";
        }
        // newline
        cout<<"\n";

        nostar=nostar+1;
        nospace=nospace-1;
        
    }
    // int range;
    // cin >> range;
    // int nospace = range - 1;
    // int nostar = 1;

    // for (int row = 1; row <= range; row++)
    // {
    //     // space
    //     for (int space = 1; space <= nospace; space++)
    //     {
    //         cout << "*";
    //     }

    //     // stars
    //     for (int star = 1; star <= nostar; star++)
    //     {
    //         cout << " ";
    //     }
    //     // newline
    //     cout << "\n";

    //     nostar = nostar + 1;
    //     nospace = nospace - 1;
    // }

    return 0;
}