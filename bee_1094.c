#include <stdio.h>

int main(){
    int n, q, c, r, s;
    char a;

    c = 0;
    r = 0;
    s = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        scanf("%d %c", &q, &a);

        switch(a){
            case 'C':
                c = c + q;
                break;
            case 'R':
                r = r + q;
                break;
            case 'S':
                s = s + q;
                break;
            default:
                break;
        }
    }

    float total = c + r + s;

    float pctc, pctr, pcts;

    pctc = (c/total)*100;
    pctr = (r/total)*100;
    pcts = (s/total)*100;

    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", pctc);
    printf("Percentual de ratos: %.2f %%\n", pctr);
    printf("Percentual de sapos: %.2f %%\n", pcts);

    return 0;
}