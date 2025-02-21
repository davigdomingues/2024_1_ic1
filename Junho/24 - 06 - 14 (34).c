#include <stdio.h>
#include <string.h>

int findSubstring(const char *haystack, const char *needle) {
    int haystackLen = strlen(haystack);
    int needleLen = strlen(needle);

    for (int i = 0; i <= haystackLen - needleLen; i++) {
        int j;
        for (j = 0; j < needleLen; j++) {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (j == needleLen)
            return i; // Encontrou a substring
    }

    return -1; // Substring não encontrada
}

int main() {
    char haystack[] = "Esta é uma string de exemplo."; //29 posicoes.
    char needle[] = "string"; // Corrigido para "string"

    int position = findSubstring(haystack, needle);
    if (position != -1)
        printf("A substring foi encontrada na posição %d.\n", position);
    else
        printf("A substring não foi encontrada.\n");

    return 0;
}

/* jeito 2: função.....

#include <stdio.h>
#include <string.h>

int findSubstring(const char *haystack, const char *needle) {
    char *result = strstr(haystack, needle);
    if (result)
        return result - haystack; // Calcula a posição
    else
        return 0; // Substring não encontrada
}

int main() {
    char haystack[] = "Esta é uma string de exemplo.";
    char needle[] = "string";

    int position = findSubstring(haystack, needle);
    if (position)
        printf("A substring foi encontrada na posição %d.\n", position);
    else
        printf("A substring não foi encontrada.\n");

    return 0;
}

*/