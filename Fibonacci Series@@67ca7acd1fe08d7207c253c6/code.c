// Your code here...
int fibonacciSeries(int n){
    int a=0,b=1,c;
    printf("%d %d ", a,b);
    for(int i = 0; i<n; i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);

    }
    
}