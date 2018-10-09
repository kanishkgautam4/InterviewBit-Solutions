vector<string> Solution::fizzBuzz(int A) {
    vector<string>x;
    
    for(int i=1;i<=A;i++)
    {
        if(i%15==0)
        {
            x.push_back("FizzBuzz");
        }
        
        else if(i%5==0)
        {
            x.push_back("Buzz");
        }
        
       else if(i%3==0)
        {
            x.push_back("Fizz");
        }
        else
        {
            ;
            x.push_back(to_string(i));
        }
        
    }
    return x;
}
