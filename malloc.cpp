#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int *ptr = (int *)malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory is not avaiable");
        exit(1);
    }

    for(int i =0;i<n;i++)
        scanf("%d",ptr+i);

    cout<<"The numbers are"<<endl;
    for(int i=0;i<n;i++)
            printf("%d ",*(ptr + i));

    return 0;
}
