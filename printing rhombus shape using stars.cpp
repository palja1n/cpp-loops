#include <iostream>
using namespace std;

int main() {
    int i, j, k;
    int n=5;
    for (i=1; i<=n; i++)
        {
        for (k=1; k<=n-i; k++)
        cout<<"  ";
    {    

        for(j=1; j<=n; j++)
        cout<<"* ";
        cout<<endl;
    }
        }

    return 0;
}

/*
Output:
        * * * * * 
      * * * * * 
    * * * * * 
  * * * * * 
* * * * * 
  */
