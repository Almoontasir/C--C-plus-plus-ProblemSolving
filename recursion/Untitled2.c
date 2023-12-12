#include <stdio.h>
int counter =0;

// s source, m middle, d destination
void tower(int n, char s, char m, char d)
{
    if(n>0)
    {
        // first move n-1 disks from source to middle,
        // using destination as middle pillar
        counter ++;
        tower(n-1, s, d, m);
        // the only left nth disk can be moved directly from source to destination
        printf("%d\n",n);
        printf("%c -> %c\n", s, d);

        // on first step we've sent n-1 disks to the middle,
        // and now, from the middle pillar, we'll transfer them back to destination
        // using the source as the middle pillar
        tower(n-1, m, s, d);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    tower(n, 'a', 'b', 'c');
    return 0;
}

