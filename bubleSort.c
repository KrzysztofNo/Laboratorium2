#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[]={9,3,4,1,5,6,4,7,8,9,1,3,5,2,5}; //tablica wymyslona, tworzymy tablice i podajemy jej zawartosc
    bubbleSort(array); //sortowanie tablicy
    for(int a=0;a<15;a++)
    {
        printf("%d", array[a]); //drukuje element
    }

}
void bubbleSort(int array[])
{
    for(int b=0;b<14;b++) //bierze 1 element z tablicy
    {
        for(int c=0;c<14-b;c++)
        {
        if(array[c]>array[c+1]) //porownuje element z nastepnym elementem tej tablicy
        {
         int temp=array[c]; //przypisuje element do zmiennej temp
        array[c]=array[c+1]; //jezeli drugi element jest wiekszy niz trzeci to zamienia je miejscami
        array[c+1]=temp;
        }
        }

    }
}
