#include <iostream>
using namespace std;

int main() {
    int N=3;
    int arr[N];
    int maxsum=0;
    int minsum=0;
    for(int i=0;i<N;i++)
        cin>>arr[i];
    for(int i=0;i<N;i++){
        int max=0;
        int num=arr[i];
        int min=0;
        while(0<num) {
            int temp=num%10;
            if(temp>max)
            {
               min=max;
               max=temp;
            }
            else
            {
                if(temp>min)
                    min=temp;
            }
            num=num/10;
            
        }
        maxsum+=max;
        minsum+=min;
    }
    int result=maxsum-minsum;
    cout<<result<<"  "<<maxsum<<"  "<<minsum;
	return 0;

}