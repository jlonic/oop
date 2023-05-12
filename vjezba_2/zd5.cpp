#include <iostream>

int* fun(int arr[], int& velicina, int& brojac)
{
    brojac=0; //sluzi za unos elemenata u niz, te broji koliko elemenata ima u nizu
    int n=1;  

    while (n!=0)
    {
        std::cout<<"unesi broj"<<std::endl;
        std::cin>>n;
        
        if (n!=0) //tako da kad koristimo 0 za prekid petlje da ju ne upisuje u niz
        {
            arr[brojac]=n;
            brojac++;
        }

        if (brojac>=velicina) //udvostrucavanje velicine kad brojac dosegne velicinu
        {  
            int *temp=new int[velicina];

            for (int i=0;i<velicina;i++)
            {
                temp[i]=arr[i];
            }

            //delete [] arr;
            velicina*=2; 
            arr=new int [velicina]; 
            if (!arr) //provjera
                printf("Greska u alociranju memorije\n");
            else
                printf("Memorija uspjesno alocirana\n");

            for (int i=0;i<velicina/2;i++)
            {
                arr[i]=temp[i];
            }
            delete [] temp;
            temp=0;
            
        }
    }   
    return arr;
}

void ispis(int* arr, int &n)
{
    for (int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}

int main()
{
    int *arr;
    int velicina=10;
    arr=new int[velicina];

    if (!arr) //provjera
        printf("Greska u alociranju memorije\n");
    else
        printf("Memorija uspjesno alocirana\n");
    
    int brojac; //sluzi za unos elemenata u niz, te broji koliko elemenata ima u nizu (za ispis)
    arr=fun(arr,velicina,brojac);
    ispis(arr, brojac);

    delete [] arr;
    arr=0;
}