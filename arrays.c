#include <stdio.h>

void Reverse(int arr[], int n)
{
    printf("Elements in reverse order:\n");
    
    for(int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    
    printf("\n");
}

int main()
{
    int n;
    
    printf("Enter the number of elements:");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    Reverse(arr, n);
    
    return 0;
}
