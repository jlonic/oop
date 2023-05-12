#include <iostream>

int& fun(int arr[], int i)
{
    return arr[i]; 
}

int main()
{
    int arr[]={1,2,3,4};
    int velicina=sizeof(arr)/sizeof(arr[0]);

    std::cout<<"pocetni niz je:";
    for (int i=0;i<velicina;i++)
        std::cout<<" "<<arr[i];
    std::cout<<std::endl;

    fun(arr,2)+=1; //salje niz i index elementa u nizu koji ce povecati za 1

    std::cout<<"promjenjeni niz je:";
    for (int i=0;i<velicina;i++)
        std::cout<<" "<<arr[i];
}