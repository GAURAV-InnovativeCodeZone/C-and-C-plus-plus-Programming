 
 //eligibility for job according to age or experience

 #include<stdio.h>
 int main()
 {
    int age,exp;

    printf(" \n enter the age of candidate : ");
    scanf("%d", &age);

    printf(" \n enter the working experience of candidate: ");
    scanf("%d", &exp);

    if (age>20)
    {
        if (exp>=3)
        {
            printf(" \n you are eligible for job ");
        }
        else
        {
            printf(" \n you are not eligible for job because of experience ");
        }
	}	
    else
    {
    printf(" \n you are not eligible for job because of age ");
    }
    return 0;
}