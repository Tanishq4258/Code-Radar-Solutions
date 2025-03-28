// Your code here...
isPrime(num){
    if(num>0){
        if(num==0 || num==1){
            return 0;
        }
        else{
            for(int i=2;i<num;i++){
                if(num%i==0){
                    return printf("0");
                }
                else{
                    printf("1");
                }
            }
        }
    }
}