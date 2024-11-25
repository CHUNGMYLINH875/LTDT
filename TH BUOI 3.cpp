#include <stdio.h>

#define MAX 6 
int a[10][10];
int b[10] = {0};  

void DFS(int v) {
    b[v] = 1;
    printf("%d ", v ); 
   
    for (int i = 1; i <=10; i++) {
        if (a[v][i] == 1 && b[i] == 0) {  
            DFS(i);
        }
    }
}

int main() {
   
    FILE *inputFile = fopen("1.txt", "r");

    if (inputFile == NULL) {
        printf("File khong mo duoc input.txt\n");
        return 1;
    }

    int n;
    fscanf(inputFile, "%d", &n); 

    
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <=n; j++) {
            fscanf(inputFile, "%d", &a[i][j]);
        }
    }

    
    fclose(inputFile);

    int x;
    printf("Nhap dinh can duyet x = ");
    scanf("%d",&x);
    printf("Ket qua duyet DFS(1) la: ");
    DFS(x); 
    printf("\n");

    return 0;
}

