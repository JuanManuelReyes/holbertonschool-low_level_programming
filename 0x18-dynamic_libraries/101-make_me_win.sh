echo "int srand(void *p){return (0);}int idx = 0;int rand(void){int list[] = {9, 8, 10, 24, 75, 97};idx++
;return (list[idx]);}" > /root/final.c
gcc -fPIC --shared /root/final.c -o /root/lib.so
export LD_PRELOAD=/root/lib.so
