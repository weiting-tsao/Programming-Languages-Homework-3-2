#include <stdio.h>

char changeCase(char ch) {
    // 判斷字母是否為大寫字母
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A'); // 轉換成小寫
    }
    // 判斷字母是否為小寫字母
    else if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A'); // 轉換成大寫
    }
    // 若非字母則回傳原字符
    return ch;
}

int main() {
    char ch;
    printf("Enter an alphabet character: ");
    scanf("%c", &ch);

    char changedCh = changeCase(ch);
    printf("The changed case character is: %c\n", changedCh);

    return 0;
}
