struct T {
    int n;
    struct T *const p;
    int a[16];
    int x : 16;
    int y : 16;
};

int main(void){
  struct T a, b = {0};
  a = b;
  return 0;
}
