int main(){
    int randomNumbers[] = {25, 50, 75, 100};

    int i;

    for (i=0;i<(sizeof(randomNumbers)/sizeof(randomNumbers[0]));i++){
        printf("%d\n",randomNumbers[i]);
    }
}
