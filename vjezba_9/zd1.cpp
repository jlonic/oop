#include <iostream>

template <typename f>
void print(f niz[], int n)
{
    for (int i=0;i<n;i++)
        std::cout<<niz[i]<<std::endl;
        
    std::cout<<std::endl;
}

template <typename t>
void sort(t niz[], int n) //selectionsort
{
    int i;
	for (i=0;i<n-1;i++) 
    { 
		int j, tmp, max=i;
		for (j=i+1;j<n;j++) 
        {
			if (niz[j]<niz[max])
				max=j;
		}

		tmp=niz[max];
		niz[max]=niz[i];
		niz[i]=tmp;
	}
    std::cout<<"sortirano"<<std::endl;
}

template<>
void sort<char>(char niz[], int n) //funkcija za sort niza char u kojoj nema razlike izmedu velikih/malih slova
{
    for (int i=0;i<n;i++) //uppercase u lowercase
    {
        if (isupper(niz[i]))
            niz[i]+=32;
    }

	for (int i=0;i<n-1;i++) 
    {         
		int j, tmp, max=i;
		for (j=i+1;j<n;j++) 
        {
			if (niz[j]<niz[max])
				max=j;
		}
        
		tmp=niz[max];
		niz[max]=niz[i];
		niz[i]=tmp;
	}
    std::cout<<"sortirano"<<std::endl;
}

int main()
{
    int niz[5]={3,5,1,2,4};
    int velicina=sizeof(niz)/sizeof(niz[0]);
    char arr[5]={'q','w','e','r','t'};
    int n=sizeof(arr)/sizeof(arr[0]);

    //primjer sortiranja int niza
    print<int>(niz,velicina);    
    sort<int>(niz,velicina);
    print<int>(niz,velicina);
    //primjer sortiranja char niza sa istom funkcijom
    print<char>(arr,n); 
    sort<char>(arr,n);
    print<char>(arr,n);  


    char niz2[5]={'A', 'C', 'b','E','d'};
    int v=sizeof(niz2)/sizeof(niz2[0]);
    print<char>(niz2,v);
    sort<char>(niz2,v);
    print<char>(niz2,v);
  
}
