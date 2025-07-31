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

/*
Output:
1 
2 3 
4 5 6 
7 8 9 10 
  */
