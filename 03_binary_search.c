#include <stdio.h>
int main() {
    int a[100], n, x, low, high, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == x) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(x < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Element not found.\n");
    return 0;
}