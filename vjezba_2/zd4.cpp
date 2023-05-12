#include <iostream>

int fun(int arr[],int n)
{
    int br1=1, br2=1, next=0;

    for(int i=0;i<n;i++)
    {
        br1=br2; 
        br2=next;
        next=br1+br2;
        arr[i]=next;
    }

    return *arr;
}

int main()
{
    int n;
    std::cout<<"unesi broj"<< std::endl;
    std::cin>>n;

    int *arr; 
    arr=new int[n];
    
    fun(arr,n);

    for (int i=0;i<n;i++) //ispis niza
        std::cout<<arr[i]<<" ";

    delete [] arr;
    arr=0;
}