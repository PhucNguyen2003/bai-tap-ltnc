void printArrow(int n, bool left)
{
    //top
    for(int i = 0; i < n; i++)
    {
        //blank
        if(!left)for(int j = 0; j < i; j++)cout << "  ";
        else for(int j = 1; j < n - i; j++)cout << " ";

        for(int j = n - i; j > 0; j--)cout << "*";

        cout << endl;
    }

    //bot
    for(int i = 1; i < n; i++)
    {
        //blank
        if(!left)for(int j = 1; j < n - i; j++)cout << "  ";
        else for(int j = 0; j < i; j++)cout << " ";

        // *
        for(int j = 1; j <= i + 1; j++)cout << "*";

        cout << endl;
    }
}