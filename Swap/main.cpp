#include <iostream>
#include <string>

using namespace std;


 void ss(int n,int h)
    {
int z;
      z=n;
      n=h;
      h=z;
      cout<<n<<" "<<h;




       }
int main() {

int x,y;
cin>>x;
cin>>y;

 ss(x,y);


return 0;
}
