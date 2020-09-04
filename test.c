#include <stdio.h>
#include <string.h>
#include <assert.h>



int main()
{
    //////////  section for demonstration purposes only ////////////////////
    // A string with two double quotes in it
    // (use \ to indicate you want the double quote in the string)
    char *example = "\"only to demonstrate assert\"";
    char example_copy[strlen(example) +1];
    // eventually remove this- it just shows how you can
    // copy to make a duplicate then compare strings
    strcpy(example_copy, example);
    // strcmp returns 0 when they are equal
    assert(0 == strcmp(example, example_copy));
    ////////////////////////////////////////////////  end demo section

    // TODO: you complete your tests here

    return 0;
}
