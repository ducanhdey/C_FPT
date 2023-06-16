#include <stdio.h>
#include <math.h>

int binarysearch(int a[], int l, int r , int x){
    if(r >= l){
            int d = l + (r - 1) / 2;
            if(x == a[d]) return d;
            else if(x > a[d]) return binarysearch(a, d + 1, r, x);
            else return binarysearch(a, l, d - 1, x);
    }
    return -1 ; // neu so do khong nam trong mang 
}
void inputarr(int a[], int pn){
    for (int i = 0; i < (pn); i++){
        {
            scanf("%d", &a[i]);
        }
    }
}
int main() {
    int a[50];
    int n;
    printf("Input n : ");
    scanf("%d", &n);
    inputarr(a, n);
    int x ;
    printf("Input x : ");
    scanf("%d", &x);
    if( binarysearch(a, 0, n - 1 , x) != -1) printf("x is in the index %d of the array", binarysearch(a,0,n-1,x));
    else  printf("x is not in the array");
}