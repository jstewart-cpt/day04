int ft_iterative_power(int nb, int power)
{
    int it_self;
    it_self = 1;

    if(power <= 0)
    {
        return 0;
    }
    while(power > 0)
    {
        it_self = nb * it_self;
        power--;
    }
    return it_self;
}