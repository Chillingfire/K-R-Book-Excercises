// Excercise1-24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char c;
    int leftBracket, rightBracket, unbalancedBracket;
    leftBracket = rightBracket = unbalancedBracket = 0;
    int leftBrace, rightBrace, unbalancedBrace;
    leftBrace = rightBrace = unbalancedBrace = 0;
    int leftParentheses, rightParentheses, unbalancedParentheses;
    leftParentheses = rightParentheses = unbalancedParentheses = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '[':
                leftBrace++;
                break;
            case ']':
                rightBrace++;
                break;
            case '{': 
                leftBracket++;
                break;
            case '}':
                rightBracket++;
                break;
            case '(':
                leftParentheses++;
                break;
            case ')':
                rightParentheses++;
                break;
        }
    }

    if (rightBrace >= leftBrace) unbalancedBrace = rightBrace - leftBrace; 
    else unbalancedBrace = leftBrace - rightBrace;

    if (rightBracket >= leftBracket) unbalancedBracket = rightBracket - leftBracket;
    else unbalancedBracket = leftBracket - rightBracket;

    if (rightParentheses >= leftParentheses) unbalancedParentheses = rightParentheses - leftParentheses;
    else unbalancedParentheses = leftParentheses - rightParentheses;

    printf("\n%d unbalanced braces\n%d unbalanced brackets\n%d unbalanced parentheses\n", unbalancedBrace, unbalancedBracket, unbalancedParentheses);

    printf("\n[: %d\n]: %d\n{: %d\n}: %d\n(: %d\n): %d\n", leftBrace, rightBrace, leftBracket, rightBracket, leftParentheses, rightParentheses);

}

