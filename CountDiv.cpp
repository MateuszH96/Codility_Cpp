int solution(int A, int B, int K) {
    while (A%K!=0) {
        A++;
    }
    while (B%K!=0) {
        B--;
    }
    if (A==B) {
        return A%K==0?1:0;
    }
    if (A>B) {
        return 0;
    }
    return (B-A)/K + 1;
}