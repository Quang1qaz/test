#include<bits/stdc++.h>
using namespace std;
class mang{
	int b[100000];
	public:
		friend ostream& operator << (ostream &out,mang a);
		friend istream& operator >> (istream &in,mang &a); 
		mang operator+(mang a);
		mang operator-(mang a);
};
istream& operator>>(istream &in,mang &a){
	int n;
	cout<<"Nhap vao so phan tu cua mang: ";in>>n;
	for(int i=0;i<n;i++){
		cout<<"Phan tu thu a["<<i+1<<"]: ";
		in>>a.b[i];
	}
	return in;
}
ostream& operator<<(ostream &out,mang a){
	int n;
	out<<"Mang vua nhap la: \n";
	for(int i=0;i<n;i++){
		cout<<a.b[i]<<"\t";
	}
	return out;
}
mang mang::operator+(mang a){
	int n;
	mang c;
	for (int i=0;i<n;i++){
		c.b[i]=b[i]+a.b[i];
	}
	return c;
}
mang mang::operator-(mang a){
	int n;
	mang d;
	for (int i=0;i<n;i++){
		d.b[i]=b[i]-a.b[i];
	}
	return d;
}
int main(){
	mang a,b,Tong,Hieu;
	cout<<"Nhap vao mang thu 1:\n";
	cin>>a;
	cout<<"Nhap vao mang thu 2:\n";
	cin>>b;
	cout<<"\nxuat mang thu 1: \n";
	cout<<a;
	cout<<"\nxuat mang thu 2: \n";
	cout<<b;
	Tong=a+b;
	cout<<"\nTong 2 mang la:\n"<<Tong;
	Hieu=a-b;
	cout<<"\nHieu 2 mang la:\n"<<Hieu;
}
