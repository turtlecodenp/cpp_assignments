
#include <bits/stdc++.h>
using namespace std;

// #define n 10
// #define m 10
// #define l 10
// #define o 10
int main()
{
  int i[10][10];
  int j[10][10];
  int n,m,l,o;
  cout<<"set 2d array limits: ";
  cin>>n>>m>>l>>o;
  for(int a=0;a<n;a++)
  {
    for(int b=0;b<m;b++)
    {
      cin>>i[a][b];
    }
  }
  for(int c=0;c<l;c++)
  {
    for(int d=0;d<o;d++)
    {
      cin>>j[c][d];
    }
  }
  return 0;
}