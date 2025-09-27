#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){string input;
cout<<"请输入内容：";cin>>input; 
while(1){if(input=="dian")
{cout<<2002<<endl;cout<<"请输入内容:";cin>>input;}
else if(input=="Quit")
{cout<<"程序接到停止指令，即将退出。"<<endl;
exit(0);} 
else{cout<<"error"<<endl;cout<<"请输入内容：";cin>>input;}
}
return 0;
}
