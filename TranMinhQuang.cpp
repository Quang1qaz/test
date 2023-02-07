#include<iostream>
#include <iomanip>
using namespace std;

class monhoc{
	public:
    string ten_mon_hoc;
    int tin_chi,stt,tien_hp,tong;
	void nhap();
	void xuat();
};
void monhoc::nhap(){
	cout<<"STT: ",cin>>stt;
	cout<<"Ten mon hoc: ";
	fflush(stdin); 
	getline(cin,ten_mon_hoc);
	cout<<"STC: ";cin>>tin_chi;
	cout<<"Tien HP: ";cin>>(tien_hp);
}
int main(){
	int n,i,j,v=0,s=0;
	cout<<"Nhap vao so mon hoc sinh vien dang ky hoc ki I: ";cin>>n;
	monhoc obj[n];
	while(i<n){
 	    obj[i].nhap();
 	    i+=1;
 	}
cout<<left<<setw(3)<<"STT"<<"\t"<<left<<setw(25)<<"Ten mon"<<left<<setw(2)<<"STC"<<"\t"<<setw(12)<<left<<"Tien HP"<<endl;
for (i=0;i<n;i++)
cout<<left<<setw(3)<<obj[i].stt<<"\t"<<left<<setw(25)<<obj[i].ten_mon_hoc<<left<<setw(2)<<obj[i].tin_chi<<"\t"<<setw(12)<<obj[i].tien_hp<<endl;
for(j=0;j<n;j++){
	s+=obj[j].tien_hp;
	v+=obj[j].tin_chi;
            }
cout<<"Tong"<<"   \t\t\t\t "<<v<<"\t"<<s;
}

