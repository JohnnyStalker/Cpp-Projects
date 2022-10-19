#include <stdio.h>
#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main(){
    int i;
    int aux;
    deque<int> queue;
    scanf("%d", &i);
    while(i--){
        scanf("%d", &aux);
        switch(aux){
            case 1:
                scanf("%d", &aux);
                queue.push_back(aux);
                break;
            case 2:
                if(!queue.empty())
                    queue.pop_back();
                break;
            case 3:
                if (queue.empty())
                    printf("Empty!\n");
                else 
                    printf("%d\n", queue.back());
                break;
        }
    }
    return 0;
}
