#include <stdio.h>
#include <stdlib.h>

#define MAX 6
int a[10][10];  
int b[10] = {0};  

void DFS(int v, int n) {
    int stack[10];  
    int top = -1;  

    
    stack[++top] = v;
    b[v] = 1;  

    printf("%d ", v);

    while (top >= 0) {
        int u = stack[top]; 
        int found = 0; 

        for (int i = 1; i <= n; i++) {
            if (a[u][i] == 1 && b[i] == 0) { 
                stack[++top] = i; 
                b[i] = 1; 
                printf("%d ", i);  
                found = 1;  
                break; 
            }
        }

        if (!found) {
            top--;  
        }
    }
}

int main() {
    FILE *inputFile = fopen("1.txt", "r");

    if (inputFile == NULL) {
        printf("Khong mo duoc file input.txt\n");
        return 1;
    }

    int n;
    fscanf(inputFile, "%d", &n);  

   
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fscanf(inputFile, "%d", &a[i][j]);
        }
    }

    fclose(inputFile);

    int x;
    printf("Nhap dinh can duyet x = ");
    scanf("%d", &x);

    printf("Ket qua duyet DFS la: ");
    DFS(x, n);
    printf("\n");

    return 0;
}

