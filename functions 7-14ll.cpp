#include <iostream>
#include <string>
using namespace std;

// Zad 7: next ASCII character
char zad7_nextChar(char c)
{
    return c + 1;
}

// Zad 8: position of letter in alphabet
int zad8_letterPosition(char c)
{
    if(c >= 'A' && c <= 'Z')
        c = c + 32;

    return c - 'a' + 1;
}

// Zad 9: most frequent character
char zad9_mostFrequentChar(string word)
{
    int maxCount = 0;
    char result = word[0];

    for(int i = 0; i < word.size(); i++)
    {
        int count = 0;

        for(int j = 0; j < word.size(); j++)
        {
            if(word[i] == word[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            result = word[i];
        }
    }

    return result;
}

// Zad 10: remove spaces
string zad10_removeSpaces(string text)
{
    string result = "";

    for(int i = 0; i < text.size(); i++)
    {
        if(text[i] != ' ')
            result += text[i];
    }

    return result;
}

// Zad 11: replace digits with symbol
string zad11_replaceDigits(string text, char symbol)
{
    for(int i = 0; i < text.size(); i++)
    {
        if(text[i] >= '0' && text[i] <= '9')
            text[i] = symbol;
    }

    return text;
}

// Zad 12: count digits
int zad12_countDigits(string text)
{
    int count = 0;

    for(int i = 0; i < text.size(); i++)
    {
        if(text[i] >= '0' && text[i] <= '9')
            count++;
    }

    return count;
}

// Zad 13: repeat text
string zad13_repeatText(string text, int times)
{
    string result = "";

    for(int i = 0; i < times; i++)
        result += text;

    return result;
}

// Zad 14: print if number is perfect
void zad14_isPerfectNumber(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        cout << "Yes, it is a perfect number";
    else
        cout << "No, it is not a perfect number";
}

int main()
{
    cout << "Zad 7: " << zad7_nextChar('a') << endl;
    cout << "Zad 8: " << zad8_letterPosition('C') << endl;
    cout << "Zad 9: " << zad9_mostFrequentChar("banana") << endl;
    cout << "Zad 10: " << zad10_removeSpaces("hello world") << endl;
    cout << "Zad 11: " << zad11_replaceDigits("abc123", '*') << endl;
    cout << "Zad 12: " << zad12_countDigits("ab3c9d1") << endl;
    cout << "Zad 13: " << zad13_repeatText("hi", 3) << endl;
    cout << "Zad 14: ";
    zad14_isPerfectNumber(6);

    return 0;
}
