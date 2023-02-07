//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//    char tensv[1000][1000], temp[2000];
//    int i, j, n;
//    cout<<"Nhap so luong SV: ", cin >> n;
//    for(i = 0; i < n; i++)
//        cout << "Nhap ten SV " << i + 1 << ": ", cin >> tensv[i];
//    for(i = 0; i < n; i++){
//        for(j = i+1; j < n; j++){
//            if(strcmp(tensv[i],tensv[j])>0)swap(tensv[i],tensv[j]);
//            }
//            }
//    cout<<"Danh sach SV sau khi sap xep:";
//    for(i = 0; i < n; i++)
//        cout<<endl<< "Ten SV " << i + 1 << ": " << tensv[i];
//  cout<<endl;
//}
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char tensv[100][20], temp[20];
    int i, j, n;
    cout<<"Nhap so luong SV: ", cin >> n;
    for(i = 0; i < n; i++)
        cout << "Nhap ten SV " << i + 1 << ": ", cin >> tensv[i];
    for(i = 1; i < n; i++)
    {
        for(j = 1; j < n; j++)
        {
            if(strcmp(tensv[j-1], tensv[j])>0)
            {
                strcpy(temp, tensv[j-1]);
                strcpy(tensv[j-1], tensv[j]);
                strcpy(tensv[j], temp);
            }
        }
    }
    cout<<"Danh sach SV sau khi sap xep:\n";
    for(i = 0; i < n; i++)
        cout << "Ten SV " << i + 1 << ": " << tensv[i] << endl;
    return 0;
}
