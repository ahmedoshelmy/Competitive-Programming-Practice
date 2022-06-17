//Insertion

int ans = 0 ;
    for (int i = 1; i < n; ++i) {
        int j = i-1 , key = a[i];
        while(j>=0&&a[j]>key) ans++,a[j+1]=a[j],j--;
        a[j+1] = key;
    }
cout<<ans<<el;
