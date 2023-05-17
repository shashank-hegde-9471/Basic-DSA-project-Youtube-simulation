
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 1000

int n = 5;

// *********************************   STRUCTURE DECLARATION PART*********************************//
struct hist
{
    char name[50];
    char link[50];
    struct hist *next;
};
typedef struct hist *hist;
hist root = NULL;

int global = 0;
struct subs
{
    char name[25];
    struct subs *next;
};

typedef struct subs *subs;

struct play
{
    char name[50];
    char link[50];
    struct play *next;
};

typedef struct play *play;
play top = NULL;

typedef struct youtube
{
    int priority;
    char name[30];
    char link[50];
} YT;
YT result[10];

typedef struct YT
{
    int priority;
    char name[50];
    char link[50];
} yt;
yt ga[25];

int gl = 0;
//*********************************************************************function declaration part
hist histnode(char name[50], char link[50]);
hist inserthist(hist root, char name[50], char link[50]);
void displayhist(hist root);
hist deletehist(hist root);
void watch();
subs newnode();
subs insert(subs head);
void display(subs head);
subs delete (subs head);
void subscription();
play playnode(char name[50], char link[50]);
play insertplay(play top, char name[50], char link[50]);
void displayplay(play top);
play deleteplay(play top);
void playlist();
void logo();
int UPI();
int debitcard();
void premium();
void prioritysort(int n, YT arr[]);
void addingvid(char name[50], char link[50]);
void display_and_search(YT arr[], int n);
int searchoperation();
void search();
void incognito();
void notifications();
void settings();
void profile();
int sign();
int minkey(int key[n], bool setmst[n]);
void mst(int g[n][n]);
void operations();
void signin();
void bubblesort(int n, yt arr[]);
void displayg();
void opcat1();
void opcat2();
void opcat3();
void opcat4();
void opcat5();
void opcat6();
void operat();
void intitialize();
void copying();
void upfdisplay();
//**************************************************************************************************
void initialize()
{
    int l = 0, d = 0, id;
    char url[50], data[50];

    FILE *fptr1 = fopen("kcoding.txt", "r+");
    FILE *fptr2 = fopen("incoding.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    printf("coding opened successfully\n");
    while (fscanf(fptr1, "%d %s %s\n", &id, url, data) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, "NULL");
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("kDBMS.txt", "r+");
    fptr2 = fopen("indbms.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    printf("dbms opened successfully\n");
    while (fscanf(fptr1, "%d %s %s\n", &id, url, data) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, "NULL");
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("kentertainment.txt", "r+");
    fptr2 = fopen("inentertainment.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    printf("entertainment opened successfully\n");
    while (fscanf(fptr1, "%d %s %s\n", &id, url, data) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, "NULL");
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("kgaming.txt", "r+");
    fptr2 = fopen("ingaming.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    printf("gaming opened successfully\n");
    while (fscanf(fptr1, "%d %s %s\n", &id, url, data) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, "NULL");
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("kgeneral.txt", "r+");
    fptr2 = fopen("ingeneral.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    printf("general opened successfully\n");
    while (fscanf(fptr1, "%d %s %s\n", &id, url, data) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, "NULL");
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("kMusic.txt", "r+");
    fptr2 = fopen("inmusic.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    printf("music opened successfully\n");
    while (fscanf(fptr1, "%d %s %s\n", &id, url, data) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, "NULL");
    }
    fclose(fptr1);
    fclose(fptr2);

    printf("INITIALIZATION DONE..\n");
}

void logo()
{
    printf("\n\n");
    char you[15][15] = {{' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' '},
                        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                        {' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' '},
                        {'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#'},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' '},
                        {'#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
                        {' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                        {' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' '}};
    int i, j;
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            printf("%c   ", you[i][j]);
        }
        printf("\n ");
    }

    printf("\n");
    printf("                Y O U T U B E         ");
    printf("\n\n\n");
    return;
}
// function name : signin
// return type: NULL
// description: let the user to signin or exit from application
void signin()
{
    static int key = 0;

    int choice;
    while (1)
    {
        printf("****************************************************\n");
        printf("               WELCOME TO YOUTBE                   \n");
        printf("****************************************************\n");
        if (key == 0)
        {
            printf("\nUser You have not signed in \n");
        }
        else if (key == 1)
        {
            operations();
        }

        printf("\n1-Sign In\n2-back\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            key = sign();
            break;
        case 2:
            return;
            break;
        }
    }
}
// Function name: sign
// return type : int
// description : Function is for  verfying username and password
int sign()
{
    char username[19];
    char password[10];
    char name[19] = "prakashhegade";
    char keyword[10] = "evillaugh";
    printf("\nEnter the username\n");
    fflush(stdin);
    gets(username);
    printf("\nEnter the password\n");
    fflush(stdin);
    gets(password);
    if ((strcmp(username, name) == 0) && (strcmp(password, keyword) == 0))
    {
        printf("                  HELLO  USER  WELCOME            \n");
        return 1;
    }
    else
    {
        printf("\n!!! PASSWORD OR EMAIL IS WRONG !!!\nPlease type the correct one\n");
        int choice = 0;
        printf("\n1-re-enter\n2-return\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            sign();
            break;
        case 2:
            return 0;
        }
    }
}
//Function name:incognito
// return type: NULL
//description:Function Turns on or off the restricton Mode
void incognito()
{
    static int key = 0;

    int choice;
    while (1)
    {
        printf("-----------------------------\n");
        printf("\nWelcome to Restriction Mode\n");
        printf("-----------------------------\n");
        if (key == 0)
        {
            printf("\nRestrction mode is off\n");
        }
        else if (key == 1)
        {
            printf("\nRestricton mode is on\n");
        }

        printf("\n1-change mode\n2-back\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (key == 0)
            {
                key++;
                printf("changed successfully\n");
            }
            else if (key == 1)
            {
                key--;
                printf("changed successfully\n");
            }
            break;
        case 2:
            return;
            break;
        }
    }
}
// Function name:notifications
// return type: NULL
//descriptiion:Function turns on turns off the notifications for the applications
void notifications()
{
    static int key = 1;
    int choice;
    while (1)
    {
        printf("--------------------------\n");
        printf("\nWelcome to Notifications\n");
        printf("--------------------------\n");
        if (key == 0)
        {
            printf("\nNotification is off\n");
        }
        else if (key == 1)
        {
            printf("\nNotification is on\n");
        }

        printf("\n1-change setting\n2-back\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (key == 0)
            {
                key++;
                printf("changed successfully\n");
            }
            else if (key == 1)
            {
                key--;
                printf("changed successfully\n");
            }
            break;
        case 2:
            return;
            break;
        }
    }
}
// Function name:settings
//function type and return type: void and NULL
//description:Function Gives user to see all setting option afetr enter ing setting we have restriction mode , notifications and premium

void settings()
{
    int choice;
    while (1)
    {
        printf("\nwelcome to settings\n");
        printf("\n1-Restriction mode\n2-Notifications\n3-premium\n4-Back\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            incognito();
            break;
        case 2:
            notifications();
            break;
        case 3:
            premium();
            break;
        case 4:
            return;
            break;
        }
    }
}
// Function Name: profile
// Function type and return type: void and NULL
// description:Function displays the youtube users profile and has sub functionalities like settings , watch history and playlist
void profile()
{

    int choice;
    while (1)
    {
        printf("--------------------\n");
        printf("\nWelcome to profile\n");
        printf("--------------------\n");

        printf("\n1-Settings\n2-Watch history\n3-Playlist\n4-back\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            settings();
            break;
        case 2:
            watch();
            break;
        case 3:
            playlist();
            break;
        case 4:
            return;
            break;
        }
    }
}
//Function name :operations
//Function type and return type: Void and NULL
//Description : Function gives user certain Functionalites like entering search mode , Displaying Subcribed channels and Notifying subcribers
void operations()
{
    int choice;
    while (1)
    {
        printf("\n1-Search\n2-Profile\n3-Subscribed channels\n4-Notify subcribers\n5-back\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            search();
            break;
        case 2:
            profile();
            break;

        case 3:
            subscription();
            break;
        case 4:
        { // For notifying subscribers we have Considered some data
            // The subscribers are connected by different Likes and interests
            // Considering one such small group of subscribers the Notification and recommendation for related users is Done here
            // For each video a creator uploads the Time spent on notifying is shown
            int b = rand() % 100;
            int a = rand() % 150;
            int c = rand() % 200;
            int d = rand() % 300;
            int data[5][5] = {
                {0, a, b, d, a + b},
                {a, 0, a + c, a + b + c, b},
                {b, a + c, 0, b, c},
                {d, a + b + c, b, 0, c + b},
                {a + b, b, c, c + b, 0}};
            printf("\n\n");
            mst(data);
        }
        break;
        case 5:
            return;
        }
    }
}

//Function name : bubblesort
// Function type and return type :Void and NULL
// description : Function sorts the priority number which is assigned to the videos
void bubblesort(int n, yt arr[])
{
    int i, j;
    for (i = 0; i <= n - 2; i++)
    {
        for (j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j].priority >= arr[j + 1].priority)
            {
                yt temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Function name: UPI
// Function type and return type: Int And Int
// Description : Function Allows the user to make UPI payments for youtube premium Subcription
int UPI()
{
    int otp = 200153;
    int code;
    printf("\nProcessing The payment using UPI........\n");
    printf("\nENTER THE OTP\n");
    scanf("%d", &code);
    if (code == otp)
    {
        printf("\n ////Payment Successfull////\n");
        return 1;
    }
    else
    {
        printf("\n   !!!!Invalid Access!!!!!\n");
        int choice;
        printf("\n1-re enter\n2-back\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            UPI();
            break;
        case 2:
            return 0;
        }
    }
}
//Function Name:debitcard
//function type and return type: Int and Int
// description : Function Allows the user to make  payments for youtube premium Subcription Using Debit card
int debitcard()
{
    int otp = 20085;
    int code;
    long int card = 987654321;
    long int cardno;
    printf("\nprocessing payment using Debit Card........\n");
    printf("\nENTER THE DEBIT CARD NO\n");
    scanf("%ld", &cardno);
    printf("\nENTER THE CVV\n");
    scanf("%d", &code);
    printf("\n");
    if (code == otp && card == cardno)
    {
        printf("\n////Payment Successfull////\n");
        return 1;
    }
    else
    {
        printf("\n!!!Invalid Access!!!\n");
        int choice;
        printf("\n1-re enter\n2-back\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            debitcard();
            break;
        case 2:
            return 0;
        }
    }
}
//Function name: premium
//Function Type and return type: void and NULL
//description: Function allows the user to buy the youtube premium and shows the payment options
void premium()
{
    static int choice = 0;
    while (1)
    {
        if (choice == 0)
        {
            int n;
            printf("\nWELCOME TO YOUTUBE PREMIUM\n");
            printf("\n Select payment mode \n");
            printf("\n1-UPI\n2-Debit card\n3-return\n");
            scanf("%d", &n);
            switch (n)
            {
            case 1:
                choice = UPI();
                break;
            case 2:
                choice = debitcard();
                break;
            case 3:
                return;
            }
        }

        else if (choice == 1)
        {
            printf("-----------------------------------------------\n");
            printf("\nYou are a part of YOUTUBE PREMIUM FAMILY !!!!\n");
            printf("-----------------------------------------------\n");
            return;
        }
    }
    return;
}
// Function name:histnode
//Function type and return type: structure and structure
// Description: Function creates node
hist histnode(char name[50], char link[50])
{
    hist new;
    new = (hist)malloc(sizeof(struct hist));
    if (new == NULL)
    {
        printf("node not created\n");
    }
    strcpy(new->name, name);
    strcpy(new->link, link);
    new->next = NULL;
    return new;
}
// Function name:inserthist
//Function type and return type: structure and structure
//Description:Function adds the video to the history list
hist inserthist(hist root, char name[50], char link[50])
{
    hist cur, new;
    new = histnode(name, link);
    if (root == NULL)
    {
        return new;
    }
    new->next = root;
    root = new;
    return root;
}
// Function name:displayhist
//Function type and return type: structure and structure
//Description:Function displays the watch History
void displayhist(hist root)
{
    if (root == NULL)
    {
        printf("\nNo videos present\n");
        return;
    }
    hist cur;
    cur = root;
    int i = 1;
    printf("\n\n");
    while (cur->next != NULL)
    {
        printf("%d. %s\t\t%s\n", i, cur->name, cur->link);
        cur = cur->next;
        i++;
    }
    printf("%d. %s\t\t%s\n", i, cur->name, cur->link);
    return;
}
// Function name:deletehist
//Function type and return type: structure and structure
//Description:Function deletes the videos from watch history
hist deletehist(hist root)
{
    displayhist(root);
    hist cur, p, q;
    int index;
    printf("\nEnter the index of video you want to delete from list\n");
    scanf("%d", &index);
    if (index == 1)
    {
        cur = root;
        root = root->next;
        free(cur);
        return root;
    }

    else
    {
        cur = root;
        p = root->next;
        int i = 2;
        while (i < index)
        {
            cur = cur->next;
            p = p->next;
            i++;
        }
        cur->next = p->next;
        free(p);
        return root;
    }
}
//Function name:watch
//Function type and return type: Void and NULL
//Description: Function Displays the watch history and allowa user to delete the videos

void watch()
{
    printf("--------------Watch history--------------\n");
    while (1)
    {
        int choice;
        displayhist(root);
        printf("\n\n");
        printf("\n1-delete\n2-exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            root = deletehist(root);
            break;
        case 2:
            return;
        }
    }
    return;
}

// Function name: newnode
// Function type and return type: Structure and structure
// Decription:Function creates nodes for subscribed channels
subs newnode()
{
    subs new;
    new = (subs)malloc(sizeof(struct subs));
    if (new == NULL)
    {
        printf("node not created\n");
    }
    printf("\nEnter the name you want to add for subscription\n");
    fflush(stdin);
    gets(new->name);
    new->next = NULL;
    return new;
}

// Function name: insert
// Function type and return type: Structure and structure
// Decription:Function inserts nodes for subscribed channels
subs insert(subs head)
{
    subs cur, new;
    new = newnode();
    if (head == NULL)
    {
        return new;
    }
    new->next = head;
    head = new;
    return head;
}

// Function name:display
// Function type and return type: Structure and structure
// Decription:Function displays subscribed channels
void display(subs head)
{
    if (head == NULL)
    {
        printf("\nNo Subscribed Channels\n");
        return;
    }
    subs cur;
    cur = head;
    int i = 1;
    while (cur->next != NULL)
    {
        printf("%d. %s\n", i, cur->name);
        cur = cur->next;
        i++;
    }
    printf("%d. %s\n", i, cur->name);
    return;
}

// Function name:delete
// Function type and return type: Structure and structure
// Decription:Function deletes channels from subscribed channels
subs delete (subs head)
{
    display(head);
    subs cur, p, q;
    int index;
    printf("\nEnter the index of video you want to delete from list\n");
    scanf("%d", &index);
    if (index == 1)
    {
        cur = head;
        head = head->next;
        free(cur);
        return head;
    }
    else
    {
        cur = head;
        p = head->next;
        int i = 2;
        while (i < index)
        {
            cur = cur->next;
            p = p->next;
            i++;
        }
        cur->next = p->next;
        free(p);
        return head;
    }
}

// Function name: subscription
// Function type and return type:void and NULL
// Decription:Function allows user to modify Subscribed channels list
void subscription()
{
    subs head = NULL;
    printf("--------WELCOME TO SUBSCRIPTION----------\n");
    while (1)
    {
        int choice;
        display(head);
        printf("\n\n");
        printf("1-insert\n2-delete\n3-exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insert(head);
            break;
        case 2:
            head = delete (head);
            break;
        case 3:
            return;
        }
    }
    return;
}
// Function name: playnode
// Function type and return type: Structure and structure
// Decription:Function creates nodes for playlist
play playnode(char name[50], char link[50])
{
    play new;
    new = (play)malloc(sizeof(struct play));
    if (new == NULL)
    {
        printf("node not created\n");
    }
    strcpy(new->name, name);
    strcpy(new->link, link);
    new->next = NULL;
    return new;
}

// Function name: insertplay
// Function type and return type: Structure and structure
// Decription:Function inserts videos into playlist
play insertplay(play top, char name[50], char link[50])
{
    play cur, new;
    new = playnode(name, link);
    if (top == NULL)
    {
        return new;
    }
    new->next = top;
    return new;
}

// Function name: displayplay
// Function type and return type: Structure and structure
// Decription:Function displays the playlist
void displayplay(play top)
{
    if (top == NULL)
    {
        printf("\nNo videos\n");
        return;
    }
    play cur;
    cur = top;
    int i = 1;
    while (cur->next != NULL)
    {
        printf("%d. %s\t\t%s\n", i, cur->name, cur->link);
        cur = cur->next;
        i++;
    }
    printf("%d. %s\t\t%s\n", i, cur->name, cur->link);
    return;
}

// Function name: deleteplay
// Function type and return type: Structure and structure
// Decription:Functionv videos from playlist
play deleteplay(play top)
{
    displayplay(top);
    play cur, p, q;
    int index;
    printf("\nEnter the index of video you want to delete from list\n");
    scanf("%d", &index);
    if (index == 1)
    {
        cur = top;
        top = top->next;
        free(cur);
        return top;
    }

    else
    {
        cur = top;
        p = top->next;
        int i = 2;
        while (i < index)
        {
            cur = cur->next;
            p = p->next;
            i++;
        }
        cur->next = p->next;
        free(p);
        return top;
    }
}

// Function name: playlist
// Function type and return type: Void and NULL
// Decription:Function allows the user to modify and create playlist
void playlist()
{
    printf("\n-------------PLAYLIST--------------\n");
    while (1)
    {
        int choice;
        displayplay(top);
        printf("\n\n");
        printf("\n1-delete\n2-exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            top = deleteplay(top);
            break;
        case 2:
            return;
        }
    }
    return;
}

// Function name:minkey
// Function type and return type: int and int
// Decription:Functon returs the index
int minkey(int key[n], bool setmst[n])
{
    int min = MAX, min_index;
    for (int i = 0; i < n; i++)
    {
        if (setmst[i] == false && key[i] < min)
        {
            min = key[i];
            min_index = i;
        }
    }
    return min_index;
}

// Function name: mst
// Function type and return type:void and NULL
// Decription:Functon gives a minimum time spent on Notifying all subscibers sand recommending Other users
void mst(int g[n][n])
{
    int parent[n];
    int key[n];
    bool setmst[n];

    for (int i = 0; i < n; i++)
    {
        key[i] = MAX;
        setmst[i] = false;
        key[0] = 0;
        parent[0] = -1;
    }
    for (int j = 0; j < n - 1; j++)
    {
        int u = minkey(key, setmst);
        setmst[u] = true;

        for (int v = 0; v < n; v++)
        {
            if (g[u][v] && setmst[v] == false && g[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = g[u][v];
            }
        }
    }
    int sum = 0;
    for (int k = 1; k < n; k++)
    {
        sum = sum + g[k][parent[k]];
    }
    printf("----------------------------------------------------------------------------------------\n");
    printf("Minimum time spent on Notifying all your subscibers and recommending Other users=%d\n", sum);
    printf("----------------------------------------------------------------------------------------\n");
}
//Functon name:displayg
//Functon type and return type:Void and NULL
void displayg()
{
    for (int i = 0; i < gl; i++)
    {
        printf("%d\t\t%s\t%s\n", ga[i].priority, ga[i].link, ga[i].name);
    }
    gl = 0;
}

// function :prioritysort
// Return type :NULL
// It sorts the videos based on the decresing priority assigned to each video
void prioritysort(int n, YT arr[])
{
    int i, j;
    for (i = 0; i <= n - 2; i++)
    {
        for (j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j].priority <= arr[j + 1].priority)
            {
                YT temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Function name:addingvid
// Function type and return type : void and NULL
// description:Function adds the video to playlist
void addingvid(char name[50], char link[50])
{
    root = inserthist(root, name, link);
    int choice;
    printf("\n1-Add to playlist\n2-back\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        top = insertplay(top, name, link);
        break;
    case 2:
        return;
        break;
    }
}

// function: display_and_search
// return : NULL
// It display the priortised lsit with search result
void display_and_search(YT arr[], int n)
{
    prioritysort(n, arr);
    printf(" \n  YOUTUBE'S PRIORTISED LIST FOR SELECTED SEARCH MODE     \n");
    printf("List -->\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i].priority > 0)
            printf("%d\t%s\n", i + 1, arr[i].name);
    }
    char search[30];
    printf("\nEnter the video name for searching(can enter single specific keyword)\n");
    fflush(stdin);
    scanf("%s", search);
    int k, b, i, j, l = 0;

    int p = strlen(search);

    printf("search-%s\n", search);
    for (k = 0; k < n; k++)
    {
        b = strlen(arr[k].name);
        for (i = 0; i <= b - p; i++)
        {
            j = 0;
            while (j < p && search[j] == arr[k].name[i + j])
            {
                j = j + 1;
            }
            if (j == p)
            {
                result[l].priority = arr[k].priority;
                strcpy(result[l].link, arr[k].link);
                strcpy(result[l].name, arr[k].name);
                l++;
            }
        }
    }
    printf("Total search results found are ==%d\n", l);
    if (l == 0)
    {
        printf("\nNO RESULT FOUND ENTER THE PROPER VIDEO NAME  \n");
        printf("\nSEARCH AGAIN PLEASE !!!\n");
        display_and_search(arr, n);
    }
    prioritysort(l, result);
    printf("\nSearch results based on your search\n");
    for (int w = 0; w < l; w++)
    {
        printf("%d-\t\t%s\t%s\n", w + 1, result[w].link, result[w].name);
    }
    int q;
    printf("\nEnter the number of video which you would like to watch\n");
    scanf("%d", &q);
    printf("%s\t%s\n", result[q - 1].link, result[q - 1].name);
    addingvid(result[q - 1].name, result[q - 1].link);
}

// Funtion: searchoperation
// return type: int
// It opens and stores all the file data into array of structers and load them andcall display_and_search Function
int searchoperation()
{
    YT a[5];
    int n, m, p;
    FILE *fp, *fp1, *fp2, *fp3, *fp4;
    printf("\n\n-------------WELCOME TO YOUTUBE---------------\n");
    printf("               SEARCH  ENGINE                 \n");
    printf("----------------------------------------------\n");
    printf("Enter the number for selecting the search mode \n1-search by category\n2-General search\n3-Press any other button to exit from search operation\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("------------SEARCH BY CATEGORY--------\n");
        printf("select category->\n");
        printf("\n1-coding\n2-entertainment\n3-Database Management\n4-gaming\n5-Music\n6-exit\n");
        scanf("%d", &m);
        switch (m)
        {
        case 1:
            // for coding-dsa category
            printf("\ncategory selected - Coding\n");
            fp = fopen("kcoding.txt", "r");
            if (fp == NULL)
            {
                printf("file not found\n");
                exit(0);
            }
            global = 0;
            printf("\nAll relevant search results based on your selected category\n");

            while (!feof(fp))
            {
                fscanf(fp, "%d %s %[^\n]s", &a[global].priority, a[global].link, a[global].name);
                // for reading the data from coding.txt file

                global++;
            }
            fclose(fp);
            // after closing file pointer calling display_and_search funtion passing array size and array
            display_and_search(a, global - 1);
            int choice;
            while (1)
            {
                printf("\n1-feedback\n2-back\n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    operat(m);
                    upfdisplay(m);
                    break;
                case 2:
                    return 1;
                    break;
                }
            }
        case 2:
            // for entertainment category
            printf("\ncategory selected- entertainment\n");
            fp1 = fopen("kentertainment.txt", "r");
            if (fp1 == NULL)
            {
                printf("file not selected\n");
                exit(0);
            }
            global = 0;
            printf("\nAll relevant search results based on your selected category\n");

            while (!feof(fp1))
            {
                fscanf(fp1, "%d %s %[^\n]s", &a[global].priority, a[global].link, a[global].name);
                // for reading the data from entertainment.txt file
                global++;
            }
            fclose(fp1);
            display_and_search(a, global - 1); // after closing file pointer calling display_and_search funtion passing array size and array
            choice;
            while (1)
            {
                printf("\n1-feedback\n2-back\n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    operat(m);
                    upfdisplay(m);
                    break;
                case 2:
                    return 1;
                    break;
                }
            }

        case 3:
            // for DBMS category
            printf("\ncategory selected- database management system\n");
            fp2 = fopen("kDBMS.txt", "r");
            if (fp2 == NULL)
            {
                printf("file not selected\n");
                exit(0);
            }
            global = 0;
            printf("\nAll relevant search results based on your selected category\n");

            while (!feof(fp2))
            {
                fscanf(fp2, "%d %s %[^\n]s", &a[global].priority, a[global].link, a[global].name);
                // reading the data from DBMS.txt file
                global++;
            }
            fclose(fp2);
            display_and_search(a, global - 1); // after closing file pointer calling display_and_search funtion passing array size and array
            choice;
            while (1)
            {
                printf("\n1-feedback\n2-back\n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    operat(m);
                    upfdisplay(m);
                    break;
                case 2:
                    return 1;
                    break;
                }
            }
        case 4:
            // for gaming category
            printf("\ncategory selected- gaming\n");
            fp3 = fopen("kgaming.txt", "r");
            if (fp3 == NULL)
            {
                printf("file not selected\n");
                exit(0);
            }
            global = 0;
            printf("\nAll relevant search results based on your selected category\n");

            while (!feof(fp3))
            {
                fscanf(fp3, "%d %s %[^\n]s", &a[global].priority, a[global].link, a[global].name);
                // for reading the gaming.txt file
                global++;
            }
            fclose(fp3);
            display_and_search(a, global - 1); // after closing file pointer calling display_and_search funtion passing array size and array
            choice;
            while (1)
            {
                printf("\n1-feedback\n2-back\n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    operat(m);
                    upfdisplay(m);
                    break;
                case 2:
                    return 1;
                    break;
                }
            }
        case 5:
            // for music category
            printf("\ncategory selected- music\n");
            printf("\nAll relevant search results based on your selected category\n");
            fp4 = fopen("kMusic.txt", "r");
            if (fp4 == NULL)
            {
                printf("file not selected\n");
                exit(0);
            }
            global = 0;
            printf("\nAll relevant search results based on your selected category\n");

            while (!feof(fp4))
            {
                fscanf(fp4, "%d %s %[^\n]s", &a[global].priority, a[global].link, a[global].name);
                // for reading the data from Music,txt file
                global++;
            }
            fclose(fp4);
            display_and_search(a, global - 1); // after closing file pointer calling display_and_search funtion passing array size and array
            choice;
            while (1)
            {
                printf("\n1-feedback\n2-back\n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    operat(m);
                    upfdisplay(m);
                    break;
                case 2:
                    return 1;
                    break;
                }
            }
        case 6:
            // for exit operation
            p = searchoperation();
        }
    }
    // This is for general search
    else if (n == 2)
    {
        YT ga[25];
        global = 0;
        printf(" ---------------General searh Mode------------------ \n");
        printf(" ALL THE VIDEOS\n");
        FILE *fp5;
        fp5 = fopen("kgeneral.txt", "r");
        if (fp5 == NULL)
        {
            printf("File Not Found\n");
            exit(0);
        }

        while (!feof(fp5))
        {
            fscanf(fp5, "%d %s %[^\n]s", &ga[global].priority, ga[global].link, ga[global].name);
            // for reading the data from general.txt file
            global++;
        }
        display_and_search(ga, global - 1); // after closing file pointer calling display_and_search funtion passing array size and array
        int choice;
        while (1)
        {
            printf("\n1-feedback\n2-back\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                operat(6);
                upfdisplay(6);
                break;
            case 2:
                return 1;
                break;
            }
        }
        fclose(fp5);
    }
    else
        return 1;
}
//Function name: search
// Function type and return type : void and NULL
// description : User enters the search mode
void search()
{
    int v, e;
    while (1)
    {
        v = searchoperation(); // calling search function
        if (v == 1)            // returned value 1 it means search op was terminated
        {
            printf("WELCOME TO HOME PAGE\n"); // returned to home page
        }
        printf("\nEnter the search Mode by pressing 1\nExit the search mode by pressing 2\n");
        scanf("%d", &e); // after returning to home page if search is to be made
        if (e == 1)
            v = searchoperation();
        else
        { // To exit search mode operation
            printf("Search Mode Exited\n");
            return;
        }
    }
}
// Function name: opcat1
// Function type and return type :  void and NULL
// Description :Fucntion Allows user to like , dislike and comment on videos from category-coding
void opcat1()
{
    FILE *fptr1 = fopen("incoding.txt", "r+");
    FILE *fptr2 = fopen("resfile.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    char url[50], data[50];
    char srl[50], cmmt[50];
    int l = 0, d = 0;
    int res, ch;
    printf("\nSelect the Video, enter the url:");
    scanf("%s", srl);

    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        res = strcmp(srl, url);
        if (res == 0)
        {
            int n = 1;
            while (n)
            {
                printf(" 1.Like the video\n");
                printf(" 2.Dislike the video\n");
                printf(" 3.Edit a public comment\n");
                printf(" 4.Do nothing\n");
                scanf("%d", &ch);

                if (ch == 1)
                {
                    l++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 2)
                {
                    d++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 3)
                {
                    printf(" Add a public comment\n");
                    scanf("%s", cmmt);
                    printf(" ------------------\n");
                    printf(" //Comment edited//\n");
                    printf(" ------------------\n");
                }
                else
                {
                    n = 0;
                }
            }
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
        else
        {
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("resfile.txt", "r+");
    fptr2 = fopen("incoding.txt", "w+");
    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
    }
    fclose(fptr1);
    fclose(fptr2);
}

// Function name: opcat3
// Function type and return type :  void and NULL
// Description :Fucntion Allows user to like , dislike and comment on videos from category-dbms
void opcat3()
{
    FILE *fptr1 = fopen("indbms.txt", "r+");
    FILE *fptr2 = fopen("resfile.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    char url[50], data[50];
    char srl[50], cmmt[50];
    int l = 0, d = 0;
    int res, ch;
    printf("\nSelect the Video, enter the url:");
    scanf("%s", srl);

    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        res = strcmp(srl, url);
        if (res == 0)
        {
            int n = 1;
            while (n)
            {
                printf(" 1.Like the video\n");
                printf(" 2.Dislike the video\n");
                printf(" 3.Edit a public comment\n");
                printf(" 4.Do nothing\n");
                scanf("%d", &ch);

                if (ch == 1)
                {
                    l++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 2)
                {
                    d++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 3)
                {
                    printf(" Add a public comment\n");
                    scanf("%s", cmmt);
                    printf(" ------------------\n");
                    printf(" //Comment edited//\n");
                    printf(" ------------------\n");
                }
                else
                {
                    n = 0;
                }
            }
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
        else
        {
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("resfile.txt", "r+");
    fptr2 = fopen("indbms.txt", "w+");
    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
    }
    fclose(fptr1);
    fclose(fptr2);
}

// Function name: opcat2
// Function type and return type :  void and NULL
// Description :Fucntion Allows user to like , dislike and comment on videos from category-entertainment
void opcat2()
{
    FILE *fptr1 = fopen("inentertainment.txt", "r+");
    FILE *fptr2 = fopen("resfile.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    char url[50], data[50];
    char srl[50], cmmt[50];
    int l = 0, d = 0;
    int res, ch;
    printf("\nSelect the Video, enter the url:");
    scanf("%s", srl);

    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        res = strcmp(srl, url);
        if (res == 0)
        {
            int n = 1;
            while (n)
            {
                printf(" 1.Like the video\n");
                printf(" 2.Dislike the video\n");
                printf(" 3.Edit a public comment\n");
                printf(" 4.Do nothing\n");
                scanf("%d", &ch);

                if (ch == 1)
                {
                    l++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 2)
                {
                    d++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 3)
                {
                    printf(" Add a public comment\n");
                    scanf("%s", cmmt);
                    printf(" ------------------\n");
                    printf(" //Comment edited//\n");
                    printf(" ------------------\n");
                }
                else
                {
                    n = 0;
                }
            }
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
        else
        {
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("resfile.txt", "r+");
    fptr2 = fopen("inentertainment.txt", "w+");
    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
    }
    fclose(fptr1);
    fclose(fptr2);
}

// Function name: opcat4
// Function type and return type :  void and NULL
// Description :Fucntion Allows user to like , dislike and comment on videos from category-gaming
void opcat4()
{
    FILE *fptr1 = fopen("ingaming.txt", "r+");
    FILE *fptr2 = fopen("resfile.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    char url[50], data[50];
    char srl[50], cmmt[50];
    int l = 0, d = 0;
    int res, ch;
    printf("\nSelect the Video, enter the url:");
    scanf("%s", srl);

    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        res = strcmp(srl, url);
        if (res == 0)
        {
            int n = 1;
            while (n)
            {
                printf(" 1.Like the video\n");
                printf(" 2.Dislike the video\n");
                printf(" 3.Edit a public comment\n");
                printf(" 4.Do nothing\n");
                scanf("%d", &ch);

                if (ch == 1)
                {
                    l++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 2)
                {
                    d++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 3)
                {
                    printf(" Add a public comment\n");
                    scanf("%s", cmmt);
                    printf(" ------------------\n");
                    printf(" //Comment edited//\n");
                    printf(" ------------------\n");
                }
                else
                {
                    n = 0;
                }
            }
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
        else
        {
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("resfile.txt", "r+");
    fptr2 = fopen("ingaming.txt", "w+");
    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
    }
    fclose(fptr1);
    fclose(fptr2);
}

// Function name: opcat6
// Function type and return type :  void and NULL
// Description :Fucntion Allows user to like , dislike and comment on videos from category-general
void opcat6()
{
    FILE *fptr1 = fopen("ingeneral.txt", "r+");
    FILE *fptr2 = fopen("resfile.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    char url[50], data[50];
    char srl[50], cmmt[50];
    int l = 0, d = 0;
    int res, ch;
    printf("\nSelect the Video, enter the url:");
    scanf("%s", srl);

    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        res = strcmp(srl, url);
        if (res == 0)
        {
            int n = 1;
            while (n)
            {
                printf(" 1.Like the video\n");
                printf(" 2.Dislike the video\n");
                printf(" 3.Edit a public comment\n");
                printf(" 4.Do nothing\n");
                scanf("%d", &ch);

                if (ch == 1)
                {
                    l++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 2)
                {
                    d++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 3)
                {
                    printf(" Add a public comment\n");
                    scanf("%s", cmmt);
                    printf(" ------------------\n");
                    printf(" //Comment edited//\n");
                    printf(" ------------------\n");
                }
                else
                {
                    n = 0;
                }
            }
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
        else
        {
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("resfile.txt", "r+");
    fptr2 = fopen("ingeneral.txt", "w+");
    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
    }
    fclose(fptr1);
    fclose(fptr2);
}

// Function name: opcat5
// Function type and return type :  void and NULL
// Description :Fucntion Allows user to like , dislike and comment on videos from category-music
void opcat5()
{
    FILE *fptr1 = fopen("inmusic.txt", "r+");
    FILE *fptr2 = fopen("resfile.txt", "w+");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    char url[50], data[50];
    char srl[50], cmmt[50];
    int l = 0, d = 0;
    int res, ch;
    printf("\nSelect the Video, enter the url:");
    scanf("%s", srl);

    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        res = strcmp(srl, url);
        if (res == 0)
        {
            int n = 1;
            while (n)
            {
                printf(" 1.Like the video\n");
                printf(" 2.Dislike the video\n");
                printf(" 3.Edit a public comment\n");
                printf(" 4.Do nothing\n");
                scanf("%d", &ch);

                if (ch == 1)
                {
                    l++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 2)
                {
                    d++;
                    printf(" ------------------------------------\n");
                    printf(" //Feedback shared with the creator//\n");
                    printf(" ------------------------------------\n");
                }
                else if (ch == 3)
                {
                    printf(" Add a public comment\n");
                    scanf("%s", cmmt);
                    printf(" ------------------\n");
                    printf(" //Comment edited//\n");
                    printf(" ------------------\n");
                }
                else
                {
                    n = 0;
                }
            }
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
        else
        {
            fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("resfile.txt", "r+");
    fptr2 = fopen("inmusic.txt", "w+");
    while (fscanf(fptr1, "%d %d %s %s %s\n", &l, &d, url, data, cmmt) != EOF)
    {
        fprintf(fptr2, "%d %d %s %s %s\n", l, d, url, data, cmmt);
    }
    fclose(fptr1);
    fclose(fptr2);
}
// Function to perform comment on a video
// and to perform a like or a dislike.
void operat(int cat)
{
    int ch = 1;

    if (cat == 1)
        opcat1();
    else if (cat == 2)
        opcat2();
    else if (cat == 3)
        opcat3();
    else if (cat == 4)
        opcat4();
    else if (cat == 5)
        opcat5();
    else if (cat == 6)
        opcat6();
}

// Function to initialize the content
// of each file to 0 0 URL TITLE NULL

// Function to copy the content of the general
// file into the logfile for further use of it
void copying()
{
    int vid;
    char url[50], data[50];
    FILE *fptr1 = fopen("general.txt", "r+");
    FILE *fptr2 = fopen("logfile.txt", "w");
    while (fscanf(fptr1, "%d %s %s\n", &vid, url, data) != EOF)
    {
        fprintf(fptr2, "%s %s\n", url, data);
    }
    fclose(fptr1);
    fclose(fptr2);
}

// Function to display Videos in each
// Category demanded by the users choice.

// Function to display the contents of
// the resfile.txt file on the console
void upfdisplay(int i)
{
    int j = 1;
    if (i == 1)
    {
        printf("********************************************************************************\n");
        FILE *fread = fopen("incoding.txt", "r+");
        if (fread == NULL)
        {
            printf("Error opening file.\n");
            exit(1);
        }
        int c = getc(fread);
        while (c != EOF)
        {
            putchar(c);
            c = getc(fread);
        }
        if (feof(fread))
            printf("********************************************************************************");
        else
            printf("\n Something went wrong.");
        fclose(fread);
    }
    else if (i == 2)
    {
        printf("********************************************************************************\n");
        FILE *fread = fopen("inentertainment.txt", "r+");
        if (fread == NULL)
        {
            printf("Error opening file.\n");
            exit(1);
        }
        int c = getc(fread);
        while (c != EOF)
        {
            putchar(c);
            c = getc(fread);
        }
        if (feof(fread))
            printf("********************************************************************************");
        else
            printf("\n Something went wrong.");
        fclose(fread);
    }
    else if (i == 3)
    {
        printf("********************************************************************************\n");
        FILE *fread = fopen("indbms.txt", "r+");
        if (fread == NULL)
        {
            printf("Error opening file.\n");
            exit(1);
        }
        int c = getc(fread);
        while (c != EOF)
        {
            putchar(c);
            c = getc(fread);
        }
        if (feof(fread))
            printf("********************************************************************************");
        else
            printf("\n Something went wrong.");
        fclose(fread);
    }
    else if (i == 4)
    {
        printf("********************************************************************************\n");
        FILE *fread = fopen("ingaming.txt", "r+");
        if (fread == NULL)
        {
            printf("Error opening file.\n");
            exit(1);
        }
        int c = getc(fread);
        while (c != EOF)
        {
            putchar(c);
            c = getc(fread);
        }
        if (feof(fread))
            printf("********************************************************************************");
        else
            printf("\n Something went wrong.");
        fclose(fread);
    }
    else if (i == 5)
    {
        printf("********************************************************************************\n");
        FILE *fread = fopen("inmusic.txt", "r+");
        if (fread == NULL)
        {
            printf("Error opening file.\n");
            exit(1);
        }
        int c = getc(fread);
        while (c != EOF)
        {
            putchar(c);
            c = getc(fread);
        }
        if (feof(fread))
            printf("********************************************************************************");
        else
            printf("\n Something went wrong.");
        fclose(fread);
    }
    else if (i == 6)
    {
        printf("********************************************************************************\n");
        FILE *fread = fopen("ingeneral.txt", "r+");
        if (fread == NULL)
        {
            printf("Error opening file.\n");
            exit(1);
        }
        int c = getc(fread);
        while (c != EOF)
        {
            putchar(c);
            c = getc(fread);
        }
        if (feof(fread))
            printf("********************************************************************************");
        else
            printf("\n Something went wrong.");
        fclose(fread);
    }
}

// main Function
int main()
{
    initialize();
    printf("-------------------------------------------\n");
    printf("                  WELCOME                  \n");
    printf("-------------------------------------------\n");
    logo();
    signin();
    printf("EXITING THE APLLICATION\n");
    return 0;
}
