#include<iostream>
using namespace std;

duplicate(int array[],int size)
{int i;
 int count=0;
 int newsize;
for(i=0;i<size;i++)
{    for(int j=i+1;j<size;j++)
    {   if(array[i]==array[j])
        {   count++;
            int newsize=(size-count);
            for(int k=i;k<newsize;k++)
                array[k]=array[k+1];
        }        
    }
}
return newsize;
}

int main()
{
int size;
int newsize;
int array[100];
cout<<"Enter the size off array"<<endl;
cin>>size;
cout<<"Enter the elements"<<endl;

for(int i=0;i<size;i++)
    cin>>array[i];

newsize=duplicate(array,size);
cout<<"Elements after deletion are:"<<endl;

for(int j=0;j<newsize;j++)
    cout<<array[j]<<" ";



}


