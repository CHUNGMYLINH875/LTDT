#include <stdio.h>
#include <stdlib.h>

#define MAX 6
int a[10][10];  
int b[10] = {0};  

void BFS(int v, int n) {
    int queue[10];  
    int front = 0, rear = 0;  

 
    queue[rear++] = v;
    b[v] = 1;  

    printf("%d ", v);

    while (front < rear) {
        int u = queue[front++]; 

        
        for (int i = 1; i <= n; i++) {
            if (a[u][i] == 1 && b[i] == 0) {  
                queue[rear++] = i;  
                b[i] = 1;  
                printf("%d ", i); 
            }
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

    printf("Ket qua duyet BFS la: ");
    BFS(x, n);
    printf("\n");

    return 0;
}

