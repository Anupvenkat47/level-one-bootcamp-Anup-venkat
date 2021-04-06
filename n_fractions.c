//WAP to find the sum of n fractions.
#include<stdio.h>

struct fractions{
    int n,d;
};

void addto(int i, struct fractions *frasum, struct fractions a)
{
    if(i==0)
	{
	    frasum->n = a.n;
        frasum->d = a.d;
	}
	else
	{
	    frasum->n = (a.n * frasum->d)+(a.d * frasum->n);
	    frasum->d = a.d * frasum->d;

	}
}

void calculate(struct fractions *frasum, int gcd)
{
    frasum->n = frasum->n/gcd;
    frasum->d = frasum->d/gcd;
}

void gcdcalculation(struct fractions *frasum)
{
    int n1 = frasum->n, n2 = frasum->d, gcd;
    while(n1!=n2)
    {
        if(n1>n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    gcd = n1;
    calculate(frasum, gcd);
}

void output(struct fractions frasum)
{
    printf("\nThe total sum of entered fractions is %d/%d",frasum.n,frasum.d);
}

void input(int i, struct fractions *a)
{
    printf("\nEnter the numerator and denominator, one after the other: ");
    scanf("%d %d", &a->n, &a->d);
}

void maininput(int *n)
{
    printf("\nEnter the number of fractions to be added: ");
    scanf("%d", n);
}

struct fractions findsum(int n)
{
    struct fractions frasum, f[50];
    for(int i=0;i<n;i++)
    {
        input(i, &f[i]);
        addto(i, &frasum, f[i]);
    }
    
    gcdcalculation(&frasum);
    return frasum;   
}

int main()
{
    int n;
    maininput(&n);
    struct fractions frasum = findsum(n);
    output(frasum);
    return 0;
}
