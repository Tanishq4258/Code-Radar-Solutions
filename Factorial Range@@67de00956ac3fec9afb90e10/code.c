// Your code here...
int factorialRange(int start, int end){
    if ((start==0 && end==0) || start==1 || end==1){
        return printf("1");
    }
    else{
        int fact;
        for(int i=start; i<=end; i++){
            fact *= i;
            printf("%d\n", fact);
        }
        // return printf("%d", fact);
    }
}
