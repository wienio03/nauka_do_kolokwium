#include <iostream>
void print_2D_array(int* tab, int size){

    for(int n=0; n<size; n++){
        for(int m=0; m<size;m++){

         std::cout << *((tab+n*size)+m) << " ";

        }
        std::cout << std::endl;
    }



}

void swap_elements(int &x, int &y){
    int helper=x;
    x=y;
    y=helper;

}
void insertionSort(int *tab, int size){
    int tabElement;
    int i;
for (int j=1; j<size; j++){
    tabElement = tab[j];
    i=j;
    while(i>0 && tab[i-1]>tabElement){
        swap_elements(tab[i],tab[i-1]);
        i--;
        tab[i]=tabElement;
    }
}
}


void selectionSort(int *tab, int size){
    int min;
    for (int i=0; i<size; i++)
    {
        min=i;
        for(int j=i+1; j<size; j++)
        {
            if(tab[j]>tab[min])
            {
                min=j;
                if(min!=i)swap_elements(tab[min],tab[i]);

            }

        }
    }

}
void bubbleSort_flag(int *tab, int size){
     bool flag = false;
     static int counter=0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {

            if(tab[i]>tab[j])
            {
                swap_elements(tab[j],tab[i]);
                flag=true;
                counter++;
            }
        }
        if(!flag){
            break;
        }
    }
    std::cout << "Liczba wywołan optymalizowanej wersji: " << counter << std::endl;
}
void bubbleSort(int *tab, int size){
    static int counter=0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size;j++){
            if(tab[i]<tab[j])swap_elements(tab[j],tab[i]);
            counter++;
        }
    }
    std::cout << "Liczba wywołan bez optymalizacji: " << counter << std::endl;
}


int greaterThan(int x, int y){
    int result = x>y ? x : y;
    return result;
}
int sum_counter(int x, int y){
    static int counter=0;
    int sum = x+y;
    counter++;
    std::cout << "Suma: " << sum << std::endl;
    std::cout << "Wywolanie: " << counter <<  std::endl;
    return 0;
}
void wypelnij_tab1D(int rozmiar, double tab[]){
    for(int i=0; i<rozmiar; i++){
        tab[i]=rand()%2;
    }
}
void wypisz_tab1D(int rozmiar, int tab[]){
    for(int i=0; i<rozmiar; i++){
        std::cout << tab[i] << " ";
    }
}
void print_2D_array(int size, int* tab[]){
for(int i=0; i<size; i++)
{

    for(int j=0; j<size; j++)
    {
        std::cout << (*tab) << " ";
        (*tab)++;
    }
    std::cout << std::endl;
}

}
void initialize_2D_array(int size, int *tab[]){
    for(int i=0; i<size; i++)
    {

        for(int j=0; j<size; j++)
        {
            std::cin >> tab[i][j];
            (*tab)++;
        }
    }
}
int main(int argc ,char* argv[]) {
    /*for(int i=0, j=20; i < 10 && j > 10; ++i, j-=2)
    {
        printf("i=%d, j=%d\n", i, j);
    }
    int i=0;
    int j=20;
    while(i<10&&j>10){
        printf("i=%d, j=%d\n", i, j);
        j-=2;
        ++i;
    }*/
    /*int cyfry[ ] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int cyfra = 0;
    for (int c : cyfry) {
        c = cyfra++;
    }
    print_mi(cyfry, 10); // Wypisanie tablicy 1D.
    for (int& c : cyfry) {
        c = cyfra++;
    }
    print_mi(cyfry, 10); // Wypisanie tablicy 1D*/
/*int size;
std::cin >> size;
double array[size];
wypelnij_tab1D(size,array);
wypisz_tab1D(size,array);
return 0;*/
/*int a=0;
int b=1;
for(int i=0; i<5; i++){
    sum_counter(a,b);
    a++;
    b++;
}*/
/*int first=10;
int second=11;
std::cout << greaterThan(first,second);
    int x = 0;
    int y = 2;
    if (x == 0 || y / x >= 0)
    {
        printf("Warunek prawdziwy.\n");
    }
*/
int tab[10]{1,2,3,4,5,5,5,5,5,5};
/*bubbleSort(tab,10);
bubbleSort_flag(tab,10);*/

selectionSort(tab,10);
insertionSort(tab,10);
wypisz_tab1D(10,tab);
    int liczba1 = 1, liczba2 = 2;
    int wynik;
    std::cout << std::endl;
    wynik = 2 * liczba1++;
    printf("Wynik to %d\n", wynik);
    wynik = 2 * ++liczba1;
    printf("Wynik to %d\n", wynik);
    wynik = 2 * liczba2--;
    printf("Wynik to %d\n", wynik);
    wynik = 2 * --liczba2;
    printf("Wynik to %d\n", wynik);

    int tab2D[5][5]{{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    print_2D_array(*tab2D,5);
}
