int simple(int n){
    for(int i=2;i<= n/2;i++) 
        if( (n%i)==0 ) return 0;
            return 1;
}

unsigned int getPrime(unsigned int n){
    int k=0;
    for(int i=2;;i++)    
        if(simple(i)){
            k++;
            if(k==n)
            return i;
        }
    return 1;
}


