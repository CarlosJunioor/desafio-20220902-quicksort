#include<stdio.h>

int main ()
{
    char string[] = "[
    {"treta" : "Sênior de 2 anos", "ultima_ocorrencia": "2022/07/29"},
    {"treta" : "CLT vs PJ", "ultima_ocorrencia": "2022/08/31"},
    {"treta" : "JavaScript No Backend", "ultima_ocorrencia": "2022/09/01"},
    {"treta" : "Java Morreu", "ultima_ocorrencia": "2022/08/28"},
    {"treta" : "Comentário em Código", "ultima_ocorrencia": "2022/06/05"},
    {"treta" : "Clean Architecture Não Presta", "ultima_ocorrencia": "2022/08/25"},
    {"treta" : "Dizer que é rico/a", "ultima_ocorrencia": "2022/07/05"},
    {"treta" : "Usar cc @sseraphini 'à toa'", "ultima_ocorrencia": "2022/02/13"},
    {"treta" : "Design Patterns Não Prestam", "ultima_ocorrencia": "2022/08/22"},
    {"treta" : "Dependency Inject É Apenas Argumento", "ultima_ocorrencia": "2022/08/20"},
    {"treta" : "PHP Morreu", "ultima_ocorrencia": "2022/08/29"}
        ]";
    printf("%s", string);

    return 0;
}