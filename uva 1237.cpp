
#include<cstdio>

using namespace std;

int t,n, low[20000], high[20000], q, query;
char name[20000][30];

int main() {
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%s %d %d", name[i], &low[i], &high[i]);

        scanf("%d", &q);
        for(int i = 0; i < q; i++) {
            scanf("%d", &query);
            int lock = -5;
            for(int j = 0; j < n; j++) {
                if(query  >= low[j] && query  <= high[j]) {
                    if(lock<0)
                        lock=j;
                    else {
                        lock = -5;
                        break;
                    }
                }
            }
            if(lock < 0)
                printf("UNDETERMINED\n");
            else
                printf("%s\n", name[lock]);
        }
        if(t) printf("\n");
    }
}
