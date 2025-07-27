#include <iostream>
using namespace std;
int i,j;
int n=4;
int k=1;

int main(){
  for(i=1;i<=n;i++){
      for(j=0;j<i;j++){
          cout<< k << " ";
          k++;
      }
      cout<<endl;
  }
  
}
