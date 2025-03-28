// Your code here...
int factorialRange(int start, int end){
    if ((start==0 && end==0) || start==1 || end==1){
        return printf("1");
    }
    else{
        int fact=1;
        for(int i=start; i<=end+1; i++){
            if(i!=0){
                fact *= i;
            }
            else{
                fact*=i+1
            }
            printf("%d\n", fact);
        }
        // return printf("%d", fact);
    }
}
