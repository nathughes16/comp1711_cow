#include<stdio.h>
#include<string.h>
int main() {
    printf("Enter a name: ");
    char name [10];
    scanf("%s", name);
    char newName [strlen(name)];
    int counter = 0;
    for(int i = (strlen(name) - 1); i >= 0; i--){
        newName[counter] = name[i];
        counter++;
    }
    printf("%s\n", newName);
    return 0;

}