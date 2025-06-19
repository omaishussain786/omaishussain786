#include <stdio.h>
int main() {
    int a[100], n, x, i, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element not found.\n");

    return 0;
}