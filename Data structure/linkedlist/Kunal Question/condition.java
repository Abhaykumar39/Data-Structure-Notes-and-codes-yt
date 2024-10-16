

class salary
{
    void solution(){
    int salary=25400;
    if (salary>10000)
    {
     salary=salary+2000;
    }  
    else
    {
     salary=salary+1000;
    }
    System.out.println(salary);
}

class Loops
{
    
}


}
class condition
{
    public static void main(String[] args)
    {
       salary s1=new salary();
       s1.solution();
    }
}