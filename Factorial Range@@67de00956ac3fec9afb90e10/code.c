// Your code here...
int factorialRange(int start, int end){
    if (start>end || start<0 || end<0){
        printf("Invalid range\n");
    }
    else{
        for(int i=start; i<=end+1; i++){
            int fact=1;
            for(int j=1; j<i; j++){
                fact*=j;
            }
            printf("%d\n", fact);
        }
        // return printf("%d", fact);
    }
}
