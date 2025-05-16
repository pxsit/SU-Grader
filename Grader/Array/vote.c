#include <stdio.h>

int main() {
    int N, K, i, vote, max_votes = 0, winner;

    // รับจำนวนผู้สมัครและผู้โหวต
    scanf("%d %d", &N, &K);

    // สร้างอาร์เรย์เก็บคะแนน
    int votes[N];
    for (i = 0; i < N; i++) {
        votes[i] = 0; // เริ่มต้นทุกค่าเป็น 0
    }

    // นับคะแนน
    for (i = 0; i < K; i++) {
        scanf("%d", &vote);
        votes[vote - 1]++; // ลดค่า index ไป 1 เพราะอาร์เรย์เริ่มจาก 0
    }

    // หาผู้ชนะ
    for (i = 0; i < N; i++) {
        if (votes[i] > max_votes) {
            max_votes = votes[i];
            winner = i + 1; // เพิ่มค่า index กลับมาเป็น 1 เพื่อให้ตรงกับหมายเลขผู้สมัคร
        }
    }

    // แสดงผลลัพธ์
    printf("%d\n", winner);
    printf("%d\n", max_votes);

    return 0;
}