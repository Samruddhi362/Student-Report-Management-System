#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int s;
    
   
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            if(a[i]>a[k])
            {
                int temp;
                temp=a[k];
                a[k]=a[i];
                a[i]=temp;
              
                
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
    s=a[0];
    
    for(int l=0;l<=1;l++)
    {
        if(s<a[l])
        {
        cout<<a[l];
    
        }
 
    }
    
    
   
     return 0;
     
    
}