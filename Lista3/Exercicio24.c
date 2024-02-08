#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 512

int main() {
    char dna1[MAX_LEN], dna2[MAX_LEN];
    int p;
    int i,j; 
    // lê as duas cadeias de DNA e o valor de P
    printf("Digite a primeira cadeia de DNA: ");
    fgets(dna1, MAX_LEN, stdin);
    dna1[strcspn(dna1, "\n")] = '\0'; // remove o caractere de quebra de linha do final
    
    printf("Digite a segunda cadeia de DNA: ");
    fgets(dna2, MAX_LEN, stdin);
    dna2[strcspn(dna2, "\n")] = '\0'; // remove o caractere de quebra de linha do final
    
    printf("Digite o valor de P: ");
    scanf("%i", &p);
    
    // calcula o tamanho das cadeias de DNA
    int len1 = strlen(dna1);
    int len2 = strlen(dna2);
    
    // encontra a menor das duas cadeias e o seu tamanho
    char *min_dna;
    int min_len;
    if (len1 <= len2) {
        min_dna = dna1;
        min_len = len1;
    } else {
        min_dna = dna2;
        min_len = len2;
    }
    
    // percorre as cadeias procurando uma substring comum de tamanho >= p% da menor cadeia
    for (i= 0; i < min_len; i++) {
        int match_len = 0;
        
        // percorre as cadeias circularmente a partir da posição atual
        for (j= i; j < min_len + i; j++) {
            int idx1 = j % len1; // índice na primeira cadeia
            int idx2 = j % len2; // índice na segunda cadeia
            
            // verifica se os caracteres das duas cadeias são iguais
            if (dna1[idx1] == dna2[idx2]) {
                match_len++;
                
                // verifica se encontrou uma substring comum de tamanho >= p% da menor cadeia
                if (100 * match_len >= p * min_len) {
                    printf("Os indivíduos são parentes!\n");
                    return 0;
                }
            } else {
                match_len = 0; // reinicia o tamanho da substring comum
            }
        }
    }
    
    printf("Os indivíduos não são parentes.\n");
    return 0;
}

