#include <stdio.h>
#include <stdlib.h>

#define MAX 6
int a[10][10];
int b[10] = {0};  

void BFS(int start) {
    int queue[10];
    int front = 0, rear = 0;

   
    queue[rear++] = start;
    b[start] = 1; 

    printf("%d ", start);

    while (front < rear) {
        int v = queue[front++];  

        
        for (int i = 1; i <= 10; i++) {
            if (a[v][i] == 1 && b[i] == 0) { 
                queue[rear++] = i;  
                b[i] = 1;  
                printf("%d ", i); 
            }
        }
    }
}

int main() {
    FILE *inputFile = fopen("2.txt", "r");

    if (inputFile == NULL) {
        printf("File khong mo duoc input.txt\n");
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

 
    for (int i = 0; i < 10; i++) {
        b[i] = 0;
    }

    printf("Ket qua duyet BFS(1) la: ");
    BFS(x); 
    printf("\n");

    return 0;
}

