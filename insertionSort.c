#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[]={9,3,4,1,5,6,4,7,8,9,1,3,5,2,5}; //tablica wymyslony, tworzymy tablice i podajemy jej zawartosc
    insertionSort(array); //sortowanie tablicy
    for(int a=0;a<15;a++)
    {
        printf("%d", array[a]); //drukuje element
    }

}
void insertionSort(int array[])
{
    for(int b=0;b<15;b++) //petla, ktora wykonuje sortowanie
    {
        int temp=array[b]; //bierze 2 element tablicy i zapisuje go do zmiennej temp
        int j=b-1;
        while(j>=0 && array[j]>temp) //warunek sprawdzajacy czy element po lewej stronie jest wiekszy od temp
        {
            array[j+1]=array[j];
        j--;
        array[j+1]=temp;    //przesuwa element o 1 w prawo
        }
    }
}
