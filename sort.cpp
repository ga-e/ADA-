#include<iostream>
using namespace std;
int s;
int b[5],c[5],d[5];

class sort
{ int a[5];
  public:
        void read(){ 
cout<<"enter size";
cin>>s;
cout<<"enter the elements";
for(int i=0;i<s;i++)
cin>>a[i];
}
        void display(){
for(int i=0;i<s;i++)
cout<<a[i]<<endl;
}
        int insertion(){
for(int i=0;i<s;i++)
 b[i]=a[i];
int p=0,q=1,temp;
while(p<5)
{if(b[q]<b[p])
 {temp=b[q];
  b[q]=b[p];
  b[p]=temp;
  p++;}
 else
  q++;}
for(int i=0;i<s;i++)
cout<<b[i];

}

        int  mergesort();
        int quicksort();
};
 
int main()
{sort ob;
ob.read();
ob.insertion();
}

