#include<stdio.h>
void nhapmang(int a[][100],int n)
{ 
  for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
         {
      	   printf("Nhap phan tu thu a[%d][%d]:",i,j);
      	   scanf("%d",&a[i][j]);
	     }
}

void xuatmang(int a[][100],int n)
{
	for(int i=1;i<=n;i++)
	{
		 for(int j=1 ; j<=n ; j++)
		     printf("%d ",a[i][j]);
		     printf("\n");  
	}
}

void max_row_x(int a[100][100],int n , int x)
  { 
    int max = a[x][1];
    for (int i=2;i<=n;i++)
     if (a[x][i]>max)
       max = a[x][i];
       printf("\n Gia tri lon nhat tren dong [%d] la: %d",x,max);
 }      
 
 
 void min_col_y(int a[100][100], int n, int y) {
    int min = a[1][y];
    for (int i = 2; i <= n; i++) {
        if (a[i][y] < min) {
            min = a[i][y];
        }
    }
    printf("Gia tri nho nhat tren cot [%d] la: %d\n", y, min);
}

void sum_row_k(int a[100][100], int n, int k) {
    int sum = 0;
    for (int j = 1; j <= n; j++) {
        sum += a[k][j];
    }
    printf("Tong cac phan tu tren dong [%d] la: %d\n", k, sum);
}

void sum_col_m(int a[100][100], int n, int m) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i][m];
    }
    printf("Tong cac phan tu tren cot [%d] la: %d\n", m, sum);
}


void sum_even_elements(int a[100][100], int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] % 2 == 0) {
                sum += a[i][j];
            }
        }
    }
    printf("Tong cac phan tu co gia tri chan la: %d\n", sum);
}


void check_diagonal_zero(int a[100][100], int n) {
    int all_zero = 1;
    for (int i = 1; i <= n; i++) {
        if (a[i][i] != 0) {
            all_zero = 0;
            break;
        }
    }
    if (all_zero) {
        printf("Duong cheo bang 0\n");
    } else {
        printf("Duong cheo khac 0\n");
    }
}



void check_elements_less_equal_one(int a[100][100], int n) {
    int all_less_equal_one = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] > 1) {
                all_less_equal_one = 0;
                break;
            }
        }
    }
    if (all_less_equal_one) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}


void check_symmetric(int a[100][100], int n) {
    int is_symmetric = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i][j] != a[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
    }
    if (is_symmetric) {
        printf("DOI XUNG\n");
    } else {
        printf("KHONG DOI XUNG\n");
    }
}



int main()
{
	int a[100][100], n;
	printf("Nhap n: ");
	scanf("%d", &n);
	nhapmang(a,n);
	printf("\nMang vua nhap la:\n ");
	xuatmang(a,n);
	int x,y,k,m;
	printf("Nhap x: ");
    scanf("%d", &x);
	max_row_x(a,n,x);
	printf("\nNhap y: ");
    scanf("%d", &y);
    min_col_y(a, n, y);
    printf("Nhap k: ");
    scanf("%d", &k);
    sum_row_k(a, n, k);
    printf("Nhap m: ");
    scanf("%d", &m);
    sum_col_m(a, n, m);
    sum_even_elements(a, n);
    check_diagonal_zero(a, n);
    check_elements_less_equal_one(a, n);
    check_symmetric(a, n);

    return 0;
}





























