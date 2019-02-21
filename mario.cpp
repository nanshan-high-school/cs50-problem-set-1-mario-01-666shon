#include <iostream>
using namespace std;

int main() {
cout<<"輸入你要的高度";
int num;
cin>>num;
if(1<num&&num<8)
for (int i =0;i<num;i++){
for (int j=8-i;j<8;j++){
  cout<<"#";
}
  cout<<"#\n";
}
else
cout<<"超出範圍";
}
