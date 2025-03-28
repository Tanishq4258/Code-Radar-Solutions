// Your code here...
int factorialRange(int start, int end){
    if ((start==0 && end==0) || start==1 || end==1){
        return 1;
    }
    else{
        for(int i=start; i<=end; i++){
            fact=1;
            fact *= i;
        }
        return fact;
    }
}