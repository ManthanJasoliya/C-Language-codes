#include <stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int arr[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<x;i++){
        if(arr[i]==y)
            j=1;
        }
    if(j==1)
    printf("YES");
    else
    printf("NO");
    
    return 0;
    
}