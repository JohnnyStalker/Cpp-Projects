#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    int aux;
    queue<int> queue;
    scanf("%d", &i);
    while(i--){
        scanf("%d", &aux);
        switch(aux){
            case 1:
                scanf("%d", &aux);
                queue.push(aux);
                break;
            case 2:
                if(!queue.empty())
                    queue.pop();
                break;
            case 3:
                if (queue.empty())
                    printf("Empty!");
                else 
                    printf("%d\n", queue.front());
                break;
        }
    }
    return 0;
}
