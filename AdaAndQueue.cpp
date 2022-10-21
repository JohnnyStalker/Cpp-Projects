#include<iostream>
#include<deque>
using namespace std;

int main(){
    int n, element;
    bool reverse = false;
    deque<int> queue;
    string choice;
    cin >> n;
    while(n--){
        cin >> choice;
        if (choice == "back"){
            if (!queue.empty()){
                if (reverse){
                    printf("%d\n", queue.front());
                    queue.pop_front();
                }
                else{
                    printf("%d\n", queue.back());
                    queue.pop_back();
                }
            }
            else {
                printf("No job for Ada?\n");
            }
        }
        else if (choice == "front"){
            if (!queue.empty()){
                if (!reverse){
                    printf("%d\n", queue.front());
                    queue.pop_front();
                }
                else{
                    printf("%d\n", queue.back());
                    queue.pop_back();
                }
            }
            else {
                printf("No job for Ada?\n");
            }
        }
        else if (choice == "reverse"){
            reverse = !reverse;
        }
        else if (choice == "push_back"){
            cin >> element;
            if (reverse){
                queue.push_front(element);
            }
            else {
                queue.push_back(element);
            }
        }
        else if (choice == "toFront"){
            cin >> element;
            if (!reverse){
                queue.push_front(element);
            }
            else {
                queue.push_back(element);
            }
        }
    }
}
