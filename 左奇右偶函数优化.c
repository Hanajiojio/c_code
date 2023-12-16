#include <stdio.h>

void rearrangeArray(int arr[], int size) {
    int left = 0; // ָ���������������
    int right = size - 1; // ָ���Ҳ�ż��������

    while (left < right) {
        // ������ҵ�ż��
        while (arr[left] % 2 != 0 && left < right) {
        /*left < right��֤һֱû�ҵ�ż��ʱ��������Խ��*/
            left++;
        }

        // ���Ҳ��ҵ�����
        while (arr[right] % 2 == 0 && left < right) {
            right--;
        }
      /*  ������ҵ�ż����whileѭ�������Ҳ��ҵ�������whileѭ����Զ���
        �Ż�ǰ���Ҳ��ҵ�������forѭ����Ƕ����������ҵ�ż����forѭ����
        �Ż���Ĵ������ǻ������ŵ��ƶ�ָ�벢�����Ӧ�Ĳ���������������������м�λ�á�
        ������Զ������ƶ���ʽȷ�����㷨�ڱ�������ʱ�����໥�����������ڱ˴˵�״̬���Ӷ������Ч�ʡ�*/
        // ����������ż��
        if (left < right) {
        /*left < right��֤һֱû�ҵ�����ʱ��������Խ��*/
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

    printf("�������к�����飺\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
