#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int count = 0,i;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>0)
	          arr[count++] = arr[i];
      }
	     while(count<n)
	           arr[count++] = 0;
	}
};
