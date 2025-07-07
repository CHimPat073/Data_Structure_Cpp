for(int i=0;i<n;i+=1){
        //stars
        for(int s=0;s<n-i;s+=1){
            cout<<"* ";
        }
        //spaces
        for(int k=0;k<2*i+1;k+=1){
            cout<<"  ";
        }
        //stars
        for(int l=0;l<n-i;l+=1){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i+=1){
        //stars
        for(int s=0;s<i+1;s+=1){
            cout<<"* ";
        }
        //spaces
        for(int k=0;k<2*n-2*i-1;k+=1){
            cout<<"  ";
        }
        //stars
        for(int l=0;l<i+1;l+=1){
            cout<<"* ";
        }
        cout<<endl;
    }