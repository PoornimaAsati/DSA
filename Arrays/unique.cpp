#include<iostream>
#include<algorithm>
using namespace std;

int findUnique(int a[], int n, int k) {
        
        sort(a,a+n);
        for(int i=0;i<n;i=i+k)
        {
            if(a[i]!=a[i+k-1])
               return a[i];
            
        }
        return -1;
        
        
    }
