#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	srand((unsigned int)time(0) ^ (unsigned int)getpid());
	string s; 
	cout<<"没写存信息的代码，本地程序不会存储相关信息"<<endl<<"建议直接复制保存"<<endl<<"----------"<<endl;
	while (true){
		cout<<"输入类型（加密/解密/退出）："; 
		cin>>s;
		cout<<endl; 
		if (s=="加密"){
			int x=rand()%10;
			cout<<"当前偏移量为："<<x<<endl;
			
			cout<<"输入加密的字符串：";
			string str;
			cin>>str;
			int l=str.size();
			for (int i=0;i<l;i++) {
				str[i]+=x;
			}
			
			cout<<"加密结果："<<str<<endl<<"请记住偏移量和加密结果以解密"<<endl<<endl;
		}
		else if (s=="解密"){
			int x;
			cout<<"输入偏移量：";
			cin>>x;
			
			cout<<"输入解密的字符串：";
			string str;
			cin>>str;
			int l=str.size(); 
			for (int i=0;i<l;i++) {
				str[i]-=x;
			}
			
			cout<<"解密结果："<<str<<endl<<endl;
		} 
		else if (s=="退出"){
			return 0;
		} 
		else{
			cout<<"字段错误！" <<endl;
		} 
	}
}
