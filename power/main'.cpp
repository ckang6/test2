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
//	 cout<<"������һ��������"<<endl;
//	 cin>>x;
//	 //���
//	 x&=(~15);
//
//	 //��0110 |һ��
//	 x|=6; 
//	 cout<<"x="<<x<<endl;
//	 y=(3+5,3*5);
//	 cout<<y<<endl;
//	cin>>z;
//	cout<<(z>2?(z+1):(z-1))<<endl;
//	z=z>2?(z+1):(z-1);//��Ŀ��������������߱Ƚϣ�����
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
		cout<<"��ʼ��"<<i+1<<"������"<<endl;

		cout<<"��ϲ����������"<<endl;
		cin>>ret;

		if(ret!="Yes"){
			continue;
		}
		cout<<"�Ӹ�΢��"<<endl;
		cout<<"��������"<<endl;
		cin>>ret;
		if(ret=="Yes"){
			cout<<"open up!!!!"<<endl;
			break;

		}
	}
	/*cout<<sum1<<endl;*/
	//	system("cls");//beauty
	//	cout<<"�������˺ţ�";
	//	cin>>name;
	//	cout<<"���������룺";
	//	cin>>pwd;

	//	if(name=="ckang"&&pwd=="104707")
	//	{
	//		break;

	//	}else{
	//		cout<<"�û������������"<<endl;
	//		system("pause");
	//	}
	//}
	//system("cls");
	//cout<<"1.��վ404����+kang"<<endl;
	//		cout<<"2.��վ�۸Ĺ���"<<std::endl;
	//		cout<<"3.��վ������¼"<<std::endl;
	//		cout<<"4.DNS����"<<std::endl;
	//		cout<<"5.��������������"<<std::endl;

	/*cout<<false<<endl;
//*/happy://��ǩ(origin fun) goto
//	cout<<"open up!!!!"<<endl;
	system("pause");
	
	
	return 0;



}

