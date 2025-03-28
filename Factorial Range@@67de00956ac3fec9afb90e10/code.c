// Your code here...
int factorialRange(int start, int end){
    if ((start==0 && end==0) || start==1 || end==1){
        return printf("1");
    }
    else{
        int fact;
        for(int i=start; i<=end; i++){
            fact=1;
            fact *= i;
        }
        return printf("%d", fact);
    }
}
