#include <stdio.h>

int move_count = 0;  // 記錄移動次數的全域變數
void hanoi(int n, char from_peg, char to_peg, char aux_peg);

int main() {
    int num_disks;
    printf("Enter the number of disks: ");
    scanf("%d", &num_disks);

    printf("The sequence of moves to solve the Towers of Hanoi with %d disks is:\n", num_disks);
    hanoi(num_disks, 'A', 'C', 'B');  // A 是起始柱, C 是目標柱, B 是輔助柱

    printf("Total moves: %d\n", move_count);  // 顯示總移動次數

    return 0;
}

void hanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from_peg, to_peg);
        move_count++;  // 增加移動次數
        return;
    }

    // 將 n-1 個圓盤從 from_peg 移到 aux_peg
    hanoi(n - 1, from_peg, aux_peg, to_peg);

    // 移動第 n 個圓盤到目標柱
    printf("Move disk %d from %c to %c\n", n, from_peg, to_peg);
    move_count++;  // 增加移動次數

    // 將 n-1 個圓盤從 aux_peg 移到 to_peg
    hanoi(n - 1, aux_peg, to_peg, from_peg);
}
