void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int num;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;

    ft_ultimate_ft(&ptr8);
}

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}