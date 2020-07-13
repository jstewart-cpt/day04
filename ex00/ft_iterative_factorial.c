int ft_iterative_factorial(int nb)
{
    int count;
    int facto;

    count = 1;
    facto = 1;

    if (nb <= 0)
    {
        return 0;
    }
    while (count <= nb)
    {
        facto = facto * count;
        count++;
    }
    return (facto);
}