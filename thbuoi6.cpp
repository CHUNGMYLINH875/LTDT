#include <iostream>
#include <stack>
using namespace std;

int a[10][10], n,v;

void docfile()
{
    FILE *f;
    f = fopen("bt6.txt", "r");
    if (f == NULL)
        printf("Khong co tap tin\n");
    else
    {
        fscanf(f, "%d", &n); 
        for (int i = 1; i <=n; i++)  
            for (int j = 1; j <=n; j++)
                fscanf(f, "%d", &a[i][j]);
    }
    fclose(f);
}

void xuatfile()
{
    for (int i = 1; i <=n; i++) 
    {
        for (int j = 1; j <=n; j++)
            printf("  %d  ", a[i][j]);
        printf("\n");
    }
}

void euler(int v)
{
    stack<int> S; 
    int out[100], t = 0;
    int ke;

    S.push(v); 

    while (!S.empty()) 
    {
        int u = S.top();
        ke = 0;

        for (int i = 1; i <=n; i++) 
        
            if (a[u][i] != 0)
            {
                S.push(i); 
                a[u][i]=0;
                a[i][u]=0;

                ke = 1;
                break;
            }
        

        
        if (ke == 0)
        {
            S.pop();  
            out[t] = u;  
            t++;
        }
        
    }

    printf("Chu trinh Euler: ");
    for (int i=t-1;i>=0;i--)  
    {
        printf("%d ", out[i]);  
    }
    printf("\n");
}
bool kiemTra() {
    for (int i = 1; i <=n; i++) {
        int d = 0;  

       
        for (int j = 1; j <=n; j++) {
            d += a[i][j];
        }

       
        if (d % 2 != 0) {
            return false;  
        }
    }
    return true;  
}





















int main()
{
    docfile();  
    xuatfile();  
     if (kiemTra()) {
      printf("Nhap dinh xuat phat : ");
        scanf("%d", &v);
        euler(v) ; 
    } else {
        printf("Do thi khong co chu trinh Euler.\n");
    }
   

    return 0;
}

