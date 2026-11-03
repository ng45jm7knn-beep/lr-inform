  #include <iostream>
using namespace std;
int main()
{
    int n;
    int sumpozit=0;
    int numberneg=0;
    int arr[100];
    int min,max=arr[0];
    int minIndex=0,maxIndex=0;
    cin>>n;
     
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            sumpozit+=arr[i];
            
        }
        if(arr[i]<0)
        {
            numberneg++;
        }
        
        if(arr[i]<min)
        {
            min=arr[i];
            minIndex=i;
            
        }
        if(arr[i]>max)
        {
            max=arr[i];
            maxIndex=i;
             
        }
    }
    for(int i=n-1;i>=0;i--){
            if(arr[i]%3==0){
                cout<<arr[i]<<endl;
            }
        }
    cout<<"Sumpoz: "<<sumpozit<<" Number negatives: "<<numberneg<<endl;
    cout<<"Min:"<<min<<" minIndex "<<minIndex<<" Max "<<max<<" maxIndex "<<maxIndex<<endl;
return 0;
}
