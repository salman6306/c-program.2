for (int i = 2; i < n; i++)
    {
        if (array[i] > largest1)
        {
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2 && array[i] != largest1)
        {
            largest2 = array[i];
        }
    }

    printf ("The FIRST LARGEST = %d\n", largest1);
    printf ("THE SECOND LARGEST = %d\n", largest2);

    return 0;
}
printf("The 2nd largest number is  = %d\n", number[1]);
        printf("The 2nd smallest number is = %d\n", number[n - 2]);
        average = (number[1] + number[n - 2]) / 2;
        counter = 0;

        for (i = 0; i < n; ++i)
        {
            if (average == number[i])
            {
                ++counter;
            }
        }
        if (counter == 0 )
            printf("The average of %d  and %d is = %d is not in the array \n",
            number[1], number[n - 2], average);
        else
            printf("The average of %d  and %d in array is %d in numbers \n",
            number[1], number[n - 2], counter);
    }
