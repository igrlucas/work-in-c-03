#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
    bool documentation, paid, certificate, specialized, prototypeEngineering = false;
    int optionDocumentation, optionPaid, optionArea, optionCertificate, optionSpecialized, optionEngineering, optionsPatent, validityOfTheYear, optionPrototype, government, governmentPartnership = 0;

    printf("The prototype must have mandatory documentation (YES - 1) or (NO - 0) \n");
    scanf("%d", &optionDocumentation);

    printf("All fees have been paid (YES - 1) or (NO - 0) \n");
    scanf("%d", &optionPaid);

    printf("Do you have any government partnerships (YES - 1) or (NO - 0)");
    scanf("%d", &governmentPartnership);

    documentation = optionDocumentation;
    paid = optionPaid;

    if ((documentation) && (paid))
    {

        // verificando qual aréa de atuação
        printf("Which area of ​​patent application? area for biotechnology area for engineering? \n");
        printf("(1 - biotechnology) or (2 - engineering)\n");
        scanf("%d", &optionArea);

        // biotechnology
        if (optionArea == 1)
        {
            // Precisa ter o de certificado internacional ou então 2 revisores especializados.

            printf("Do you have the international certificate (YES - 1) or (NO - 0)\n");
            scanf("%d", &optionCertificate);

            printf("You have 2 specialized reviewers (YES - 1) or (NO - 0)");
            scanf("%d", &optionSpecialized);

            certificate = optionCertificate;
            specialized = optionSpecialized;

            if ((certificate) || (specialized))
            {
                // /quantas patentes você já possui
                printf("How many previously approved patents do you hold (only - 1) or more (more than - 5)?");
                scanf("%d", &optionsPatent);

                printf("Your latest patent is valid for another 25 years, the patent (1 - for more than 25 years) or (0 - for shorter patent time) \n");
                scanf("%d", &validityOfTheYear);

                if ((optionsPatent >= 5) && (validityOfTheYear == 1))
                {
                   if (governmentPartnership)
                    {
                        printf("Your patent is strategic");
                    }
                    else
                    {
                        printf("It is with great satisfaction that we bring you the news that your patent has been approved.");
                    }
                }
                else
                {
                    printf("Unfortunately, we cannot approve your patent; perhaps in the near future. we appreciate your understanding");
                }
            }
            else
            {
                printf("You do not possess the necessary attributes to close a patent.");
            }
        }
        // Engineering
        else if (optionArea == 2)
        {
            printf("You have 1 specialized reviewers (YES - 1) or (NO - 0)");
            scanf("%d", &optionSpecialized);

            printf("The validated prototype (YES - 1) or (NO - 0)");
            scanf("%d", &optionPrototype);

            if ((optionSpecialized == 1) && (optionPrototype == 1))
            {

                printf("How many previously approved patents do you hold (only - 1) or more (more than - 5)?");
                scanf("%d", &optionsPatent);

                printf("Your latest patent is valid for another 25 years, the patent (1 - for more than 25 years) or (0 - for shorter patent time) \n");
                scanf("%d", &validityOfTheYear);

                if ((optionsPatent >= 5) && (validityOfTheYear == 1))
                {
                    if (governmentPartnership)
                    {
                        printf("Your patent is strategic");
                    }
                    else
                    {
                        printf("It is with great satisfaction that we bring you the news that your patent has been approved.");
                    }
                }
                else
                {
                    printf("Unfortunately, we cannot approve your patent; perhaps in the near future. we appreciate your understanding");
                }
            }
            else
            {
                printf("You do not possess the necessary attributes to close a patent.");
            }
        }
        else
        {
            printf("You do not possess the necessary attributes to close a patent.");
        }
    }
    else
    {
        printf("This patent cannot be approved.");
    }

    return 0;
}