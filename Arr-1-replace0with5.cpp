// Problem link - https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?track=amazon-arrays&batchId=192

int convertFive(int n) {

    int place = 1;
    int sum = 0;
    
    while(n){
        int rem = n%10;
        if(rem == 0){
            sum = sum + place*5;
        }
        else{
            sum = sum + place*rem;
        }
        place = place*10;
        n = n/10;
    }
    
    return sum;
    
}
