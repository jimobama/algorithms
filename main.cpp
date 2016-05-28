
#include<iostream>
using namespace std;

int quick_sort(int a[],int l,int r);


int main(int argc, char *argv[])
{

}






int quick_sort(int a[],int l,int r)
{

    //if the left is less than right continue quick sort
    if(l < r)
    {
        int pivot = a[l];
        int cur=a[r];
        //run comparison
        for (int i=r; i>=l;i--)
        {
            if(a[pivot]> a[cur])
            {
                int temp=a[cur];
                int tem_index =cur;
                a[cur]=a[pivot];
                a[pivot]= temp;
                cur=pivot;
                pivot =tem_index;

            }

            //check if the comparison direction
            if(cur = pivot)
              break;
            else if(cur < pivot)
                cur++;
            else
                cur--;

        }//end for O(n)
        quick_sort(a,l,pivot -1);
        quick_sort(a,pivot + 1,r);
    }
}
