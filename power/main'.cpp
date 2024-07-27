#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{/*
	string line;
	int length=0;
	getline(cin,line)>>length;
		cout<<line<<endl;
	cout<<length<<endl;
	*/

//	int x,y,z;
//	 cout<<"请输入一个整数："<<endl;
//	 cin>>x;
//	 //清空
//	 x&=(~15);
//
//	 //和0110 |一下
//	 x|=6; 
//	 cout<<"x="<<x<<endl;
//	 y=(3+5,3*5);
//	 cout<<y<<endl;
//	cin>>z;
//	cout<<(z>2?(z+1):(z-1))<<endl;
//	z=z>2?(z+1):(z-1);//三目运算符适用于两者比较，大大简化
//	cout<<z;
	/*
	string name;
	string pwd;*/

	/*int x=1;
	int sum1=0;
	do{
		
		sum1+=x;
		x++;
		

	}while(0);  */
	/*for(x=1;x<=100;x++){
		sum1+=x;
	}*/
	string ret;
	for(int i=0;i<3;i++){
		cout<<"开始第"<<i+1<<"次相亲"<<endl;

		cout<<"你喜欢打王者吗？"<<endl;
		cin>>ret;

		if(ret!="Yes"){
			continue;
		}
		cout<<"加个微信"<<endl;
		cout<<"我中意你"<<endl;
		cin>>ret;
		if(ret=="Yes"){
			cout<<"open up!!!!"<<endl;
			break;

		}
	}
	/*cout<<sum1<<endl;*/
	//	system("cls");//beauty
	//	cout<<"请输入账号：";
	//	cin>>name;
	//	cout<<"请输入密码：";
	//	cin>>pwd;

	//	if(name=="ckang"&&pwd=="104707")
	//	{
	//		break;

	//	}else{
	//		cout<<"用户名或密码错误！"<<endl;
	//		system("pause");
	//	}
	//}
	//system("cls");
	//cout<<"1.网站404攻击+kang"<<endl;
	//		cout<<"2.网站篡改攻击"<<std::endl;
	//		cout<<"3.网站攻击记录"<<std::endl;
	//		cout<<"4.DNS攻击"<<std::endl;
	//		cout<<"5.服务器重启攻击"<<std::endl;

	/*cout<<false<<endl;
//*/happy://标签(origin fun) goto
//	cout<<"open up!!!!"<<endl;
	system("pause");
	
	
	return 0;



}

