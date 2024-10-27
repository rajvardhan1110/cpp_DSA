#include <iostream>
using namespace std;

void merge(int *a, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = (mid + 1) - s;
    int len2 = e - mid;

    int *dubli1 = new int[len1];
    int *dubli2 = new int[len2];

    int mainArrIndex = s;

    for (int i = 0; i < len1; i++)
    {
        dubli1[i] = a[mainArrIndex++];
    }

    mainArrIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        dubli2[i] = a[mainArrIndex++];
    }

    int index1 = 0;
    int index2 = 0;

    mainArrIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (dubli1[index1] < dubli2[index2])
        {
            a[mainArrIndex++] = dubli1[index1++];
        }
        else
        {
            a[mainArrIndex++] = dubli2[index2++];
        }
    }

    while (index1 < len1)
    {
        a[mainArrIndex++] = dubli1[index1++];
    }

    while (index2 < len2)
    {
        a[mainArrIndex++] = dubli2[index2++];
    }


    delete []dubli1;
    delete []dubli2;


}

void mergeSort(int *a, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    mergeSort(a, s, mid);
    mergeSort(a, mid + 1, e);

    merge(a, s, e);
}

int main()
{
    int arr[5] = {3, 1, 5, 7, 2};

    mergeSort(arr, 0, 5);

   for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}