#include<iostream>
#include<string>
using namespace std;
int main(){
  string s,a="";
  float R,v;
  bool isParalel;
  cout<<"Circuit description: "; getline(cin, s);
  cout<<"Voltage applied: "; cin>>v;

  if (s[0]=='P') isParalel=1;
  else if (s[0]=='S') isParalel=0;
  else{
    cout<<"ERROR, Wrong Circuit Description";
    return 0;
  }

  for (int i=0; s[i]!='E'; i++)
  {
    if (isdigit(s[i])||s[i]=='.') a+=s[i];
    else if (s[i]==' '&&isdigit(s[i-1]))
    {
      R+= (isParalel? (1/stof(a)):stof(a));
      a="";
    }
  }

  if(isParalel) R = 1/R;
  cout<<"The equivalent resistance: "<<R <<endl;
  cout<<"The circuit current: "<<v/R;
  return 0;
}
