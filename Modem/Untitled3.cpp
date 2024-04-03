#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std; 
class Modem{ 
 private : 
 string nomi,davlati,turi; 
 int yili; 
 int ip;  
 float narxi; 
 public : 
  void show() 
  { 
   static int k=0; 
   cout<<++k<<" - modem"<<endl<<endl; 
   cout<<"Davlati: "<<davlati<<endl;
   cout<<"Nomi: "<<nomi<<endl;  
   cout<<"Yili: "<<yili<<endl; 
   cout<<"IP: "<<ip<<endl; 
   cout<<"Turi: "<<turi<<endl; 
   cout<<"Narxi: "<<narxi<<endl; 
    
  }; 
  void input(){ 
   static int k=0; 

   cout<<++k<<" - modem"<<endl<<endl; 
   cout<<"Davlati: ";cin>>davlati;
   cout<<"Nomi: ";cin>>nomi;  
   cout<<"Yili: ";cin>>yili; 
   cout<<"IP: ";cin>>ip; 
   cout<<"Turi: ";cin>>turi; 
   cout<<"Narxi: ";cin>>narxi; 
   cout<<endl; 
  }; 
  void qidir(string s){ 
   if(nomi.compare(s)==0) 
   { 
    cout<<"Bunday nomli modem yuk"; 
    show(); 
   } 


}; 
void qidir1(string d){ 
   if(davlati.compare(d)==0) 
   { 
    cout<<"Bunday davlatga ega  router  yuk"; 
    show(); 
   } 
  }; 
}; 
int main() 
{ 
 Modem t[100]; 
 int N;cout<<"Modem sonni kriting";cin>>N;  
 for(int i=0;i<N;i++) 
 { 
  t[i].input(); 
 } 
 string s; 
 cout<<endl<<"Qidiriliyotgan modem nomini kriting";cin>>s; 
 for(int i;i<N;i++) 
 { 
  t[i].qidir(s); 
 } 
 string d; 
 cout<<endl<<"Qidiriliyotgan davlatini  kiriting";cin>>d; 

 for(int i;i<N;i++) 
 { 
  t[i].qidir1(d); 
 } 
}