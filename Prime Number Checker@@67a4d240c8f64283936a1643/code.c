// Your code here...
int isPrime(int num){
    if(num>0){
        if(num<2||num%2==0){
            return 0;
        }
        else if(num==2){
            return 1;
        }
        else{
            for(int i=3;i*i<=num;i+=2){
                if(num%i==0){
                    return 0;
                }
                else{
                    return 1;
                }
            }
        }
    }
}