#include <stdio.h>

int main() {
    int arr[100], n, i, x, found = 0;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; ++i) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Vi tri cua phan tu %d trong mang la: %d\n", x, i);
    } else {
        printf("Khong tim thay phan tu %d trong mang\n", x);
    }
    return 0;
}
