//create by Nadya_23343088 

#include <stdio.h>

void merge_sort(int i, int j, int a[], int aux[]) {
    if (j <= i) {
        return; // the subsection is empty or a single element
    }
    int mid = (i + j) / 2;
    merge_sort(i, mid, a, aux); // sort the left sub-array recursively
    merge_sort(mid + 1, j, a, aux); // sort the right sub-array recursively
    int pointer_left = i; // pointer_left points to the beginning of the left sub-array
    int pointer_right = mid + 1; // pointer_right points to the beginning of the right sub-array
    int k; // k is the loop counter
    // we loop from i to j to fill each element of the final merged array
    for (k = i; k <= j; k++) {
        if (pointer_left == mid + 1) { // left pointer has reached the limit
            aux[k] = a[pointer_right];
            pointer_right++;
        } else if (pointer_right == j + 1) { // right pointer has reached the limit
            aux[k] = a[pointer_left];
            pointer_left++;
        } else if (a[pointer_left] < a[pointer_right]) {
            // pointer left points to smaller element
            aux[k] = a[pointer_left];
            pointer_left++;
        } else { // pointer right points to smaller element
            aux[k] = a[pointer_right];
            pointer_right++;
        }
    }
    for (k = i; k <= j; k++) { // copy the elements from aux[] to a[]
        a[k] = aux[k];
    }
}

int main() {
    int a[100], aux[100], n, i;
    printf("Masukkan jumlah elemen dalam array:\n");
    scanf("%d", &n);
    printf("Masukkan %d bilangan integer\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    merge_sort(0, n - 1, a, aux);
    printf("Menampilkan array yang telah diurutkan:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]); // menggunakan \t untuk membuat output kesamping
    return 0;
}
