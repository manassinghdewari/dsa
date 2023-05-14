// Tail call Elimination in Quick Sort

int partition(int arr[],int l,int r)
{
    
}
void qSort(int arr[],int l,int r)
{
    begin:
        if(l<r)
        {
            int p=partition(arr,l,r);
            qSort(arr,l,p);
            l=p+1;
            goto begin;
        }
}