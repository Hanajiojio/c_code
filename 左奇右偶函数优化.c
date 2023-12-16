#include <stdio.h>

void rearrangeArray(int arr[], int size) {
    int left = 0; // 指向左侧奇数的索引
    int right = size - 1; // 指向右侧偶数的索引

    while (left < right) {
        // 在左侧找到偶数
        while (arr[left] % 2 != 0 && left < right) {
        /*left < right保证一直没找到偶数时函数不会越界*/
            left++;
        }

        // 在右侧找到奇数
        while (arr[right] % 2 == 0 && left < right) {
            right--;
        }
      /*  在左侧找到偶数的while循环和在右侧找到奇数的while循环相对独立
        优化前在右侧找到奇数的for循环是嵌套在在左侧找到偶数的for循环里
        优化后的代码它们互不干扰地移动指针并完成相应的操作，最终相遇于数组的中间位置。
        这种相对独立的移动方式确保了算法在遍历数组时不会相互阻塞或依赖于彼此的状态，从而提高了效率。*/
        // 交换奇数和偶数
        if (left < right) {
        /*left < right保证一直没找到奇数时函数不会越界*/
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, size);

    printf("重新排列后的数组：\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
