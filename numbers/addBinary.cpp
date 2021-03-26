    while(a>0){
        if(previousCarry==1){
            if(a%2==0){
                ans = ans * 10 + 1;
                previousCarry = 0;
                
            }
            else {
                ans = ans *10 + 0;
                previousCarry =1;
            }
        }
        else {
            ans = ans * 10 + (a%2);
        }
        a/=10;
    }