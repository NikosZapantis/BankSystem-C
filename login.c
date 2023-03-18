#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int main() {
    char username[20], temp_username[20], email[50], realname[20], surname[20], temp_password[20];
    int ans, uni_pass;
    int card, cookies;
    long long phone_num;

    printf("\n\033[0;36m//////////////////////////////////////////////////////////////////////////////////////////////");
    printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t                                                                                                        ");
    printf("                          \e[1m\033[0;36mCookies enabled : N/A\e[m\033[0m\n");
    printf("\033[0;36m-------------------\033[0m\n\n");
    printf("\e[1mDear customer,\e[m\n\n\tIn order to create you an account we would like you to give us some info.\n");  //Welcome message and description
    printf("You'll be asked to provide your real id name, the username you would like to use for you bank account,");
    printf(" a contact email and your phone number.\nLast you have to select what type of card you need ,visa(1) or mastercard(2),"); 
    printf(" and then a unique password will be generated ,by our system, when your account is completed!\n\n");

    printf("\e[1mCookies found on this site!\e[m\n");  //Cookies selection
    printf("%c \033[0;32mAllow all.\033[0m Type '1'\n", 25);
    printf("%c \033[38;2;255;165;0mOnly-Essential.\033[0m Type '2'\n", 25);               
    printf("%c \033[0;31mReject.\033[0m Type any other number\n", 25);
    printf("\e[1mSelect\e[m: ");
    scanf("%d", &cookies);
    printf("\n");

    int re = 0, t = 5;
    
    while(re == 0) {
        printf("     \r\e[1m\033[38;2;255;165;0mYou will be redirected to our site in %d seconds.\033[0m\e[m", t);
        --t;
        Sleep(1000);
        if(t == 1) {
            printf("     \r\e[1m\033[38;2;255;165;0mYou will be redirected to our site in %d seconds.\033[0m\e[m", t);
            --t;
            Sleep(1000);
            printf("     \r\e[1m\033[38;2;255;165;0mYou will be redirected to our site in %d seconds.\033[0m\e[m", t);
            re = 1;
        }
    }

    Sleep(2000);
    printf("\n\033[0;36m//////////////////////////////////////////////////////////////////////////////////////////////");
    printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    if(cookies == 1) {

        printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("  \e[1mCookies enabled : \033[0;32mALL\033[0m\e[m\n");
    }else if(cookies == 2) {

        printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("\b\e[1mCookies enabled : \033[38;2;255;165;0mOnly-Essential\033[0m\e[m\n");
    }else {

        printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("\b\b\e[1m\033[0;31mCookies Disabled.\033[0m\e[m\n");
    }
    printf("\033[0;36m-------------------\033[0m\n\n");
    printf("\e[1mWelcome to NNB[Niko's National Bank]!\e[m\nLet's create your account.\n\n");

    printf("\e[1mName\e[m: ");   //Create an account providing all the informations needed
    scanf("%s", &realname);
    printf("\e[1mSurname\e[m: ");
    scanf("%s", &surname);
    printf("\e[1mUsername(For account purposes)\e[m: ");
    scanf("%s", &username);  //TODO getting character with a while loop unti '\r' and then checking in login if the username is equal to temp_username
    printf("\e[1mCard Type\e[m: ");
    scanf("%d", &card);
    printf("\e[1mEmail(For security purposes)\e[m: ");
    scanf("%s", &email);
    printf("\e[1mPhone(For security purposes): |+30|\e[m ");
    scanf("%llu", &phone_num);

    int see, ver_code, temp_ver_code;  //Phone verification starts here

    srand(time(NULL));

    ver_code = (rand() + 145763 / 5 + 156486) % 899999 + 100000; 
    printf("Lets take a minute to verify your phone number!\n");
    printf("\n\e[1m\033[0;33mYOU HAVE AN UNREAD MESSAGE!TYPE '1' TO SEE IT.\033[0m\n\nDo you want to read the message?:\e[m ");
    scanf("%d", &see);
    if(see == 1) {

        printf("\nThis is your verification code: %d", ver_code);
    }else {
        int end = 0;

        while(end == 0) {
            Sleep(1500);
            printf("\n\033[0;31mWrong number input!\033[0m\n\e[1mTry again:\e[m ");
            scanf("%d", &see);

            if(see == 1) {

                printf("\nThis is your verification code: %d", ver_code);
                end = 1;
            } 
        }
    }
    
    printf("\t\t\t\t\t\e[1mEnter you code here\e[m > ");
    scanf("%d", &temp_ver_code);

    if(temp_ver_code == ver_code) {

        int x = 1, r = 0, stop = 0;
        
        while(stop == 0) {
            ++r;
            if(x == 1) {

                printf("      \r\e[1m\033[0;36mLoading.\033[0m\e[m");
                Sleep(1000);
                ++x;
            }else if(x == 2) {

                printf("      \r\e[1m\033[0;36mLoading..\033[0m\e[m");
                Sleep(1000);
                ++x;
            }else if(x == 3) {

                printf("      \r\e[1m\033[0;36mLoading...\033[0m\e[m");
                Sleep(1000);
                printf("      \r\e[1m\033[0;36mLoading\033[0m\e[m");
                x = 1;
            }

            if(r == 8) {

                printf("      \r\e[1m\033[0;36mLoading...\033[0m\e[m");
                stop = 1;
            }
        }
        Sleep(1500);
        printf("\n\e[1m\033[0;32mPhone verified!\033[0m\e[m\n");
    }else {

        int wr = 0;

        while(wr == 0) {

            Sleep(1500);
            printf("\n\033[0;36m//////////////////////////////////////////////////////////////////////////////////////////////");
            printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\033[0m\n");
            printf("\e[1m\033[0;31mYOU ENTERED A WRONG NUMBER!\033[0mTry again.\e[m\n\n");
            ver_code = (rand() + 145763 / 5 + 156486) % 899999 + 100000;
            printf("\nNew verification code: %d", ver_code);
            printf("\t\t\t\t\t\t\e[1mEnter you code here\e[m > ");
            scanf("%d", &temp_ver_code);

            if(temp_ver_code == ver_code) {
                
                int x = 1, r = 0, stop = 0;

                while(stop == 0) {
                    ++r;
                    if(x == 1) {

                        printf("      \r\e[1m\033[0;36mLoading.\033[0m\e[m");
                        Sleep(1000);
                        ++x;
                    }else if(x == 2) {

                        printf("      \r\e[1m\033[0;36mLoading..\033[0m\e[m");
                        Sleep(1000);
                        ++x;
                    }else if(x == 3) {

                        printf("      \r\e[1m\033[0;36mLoading...\033[0m\e[m");
                        Sleep(1000);
                        printf("      \r\e[1m\033[0;36mLoading\033[0m\e[m");
                        x = 1;
                    }

                    if(r == 8) {

                        printf("      \r\e[1m\033[0;36mLoading...\033[0m\e[m");
                        stop = 1;
                    }
                }
                Sleep(2000);
                printf("\n\e[1m\033[0;32mPhone verified!\033[0m\e[m\n");
                wr = 1;
            }
        }
    }

    printf("We are generating your unique password...\n\033[38;2;255;165;0mThis may take a while, hold tight!\033[0m\n\n");

    srand(time(NULL));                  //Generating a unique password
    uni_pass = rand() % 9001 + 1000;  //TODO 4 loops giving in every uni_pass[] a number between 0-9 calling function

    int prog_done = 0;
    int prog = 0;
    while(prog_done == 0) {  //Progress ..% loop
        int s = 37;

        printf("       \r\e[1m|Progress %d %c|\e[m", prog, s);
        if(prog < 10) {
            ++prog;
            Sleep(250);
        }else if(prog < 50) {
            prog += 3;
            Sleep(500);
        }else if(prog <= 99) {
            prog += 3;
            Sleep(720);
        }
        if(prog == 100) {
            printf("       \r\e[1m\033[0;32m|Completed %d %c|\033[0m\e[m", prog, s);
            prog_done = 1;
        }
    }
    Sleep(2500);
    printf("\nYour password was successfully generated and you can see it by typing '1' at the terminal!\nTerminal: ");
    scanf("%d", &ans);
    int ok = 1;

    while(ok == 1) {

        if(ans == 1) {

            printf("\n\n\e[1mYour unique password is\e[m: %d\n\n", uni_pass);
            ok = 0;
        }else {

            printf("We are sorry for that but we have to force you, because this password is the only way to get in your account!\n");
            int end = 1;
            while(end == 1) {

                printf("Let's try again!You can see your password by typing '1' at the terminal!\nTerminal: ");
                scanf("%d", &ans);
                if(ans == 1) {

                    printf("\n\n\e[1mYour unique password is\e[m: %d\n\n", uni_pass);
                    end = 0;
                }
            }
            ok = 0;
        }
    }
    
    printf("\n\033[0;36m//////////////////////////////////////////////////////////////////////////////////////////////");
    printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    if(cookies == 1) {

        printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("  \e[1mCookies enabled : \033[0;32mALL\033[0m\e[m\n");
    }else if(cookies == 2) {

        printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("\b\e[1mCookies enabled : \033[38;2;255;165;0mOnly-Essential\033[0m\e[m\n");
    }else {

        printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("\b\b\e[1m\033[0;31mCookies Disabled.\033[0m\e[m\n");
    }
    printf("\033[0;36m-------------------\033[0m\n\n");
    Sleep(1500);
    printf("\t\t\t\t\t\t\t\t\t\t                                                             ");  
    printf("                                \e[1mLOGIN\e[m\n\n");                                                                              
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("\t\e[1mUsername\e[m: ");
    scanf("%s", &temp_username);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("\t\t\t\t\t\t\e[1mPassword\e[m: ");
        int p = 0, printcall = - 1;
        do{ 
            temp_password[p] = getch();
            if(p != 0) {
                if(temp_password[p] == '\b') {
                    printf("\b");
                    printcall = - 1;
                    printf("%c", printcall);
                    printf("\b");
                    if(p != 0) {
                        --p;
                    }else if(p == 0) {
                        p = 0;
                    }
                }else if(temp_password[p] != '\r') {
                    printcall = 42;
                    printf("%c", printcall);
                    ++p;
                }
            }else if(p == 0) { 
                if(temp_password[p] != '\r' && temp_password[p] != '\b') {
                    printcall = 42;
                    printf("%c", printcall);
                    ++p;
                }else if(temp_password[p] == '\b') {
                    printcall = -1;
                    printf("\b");
                    printf("%c", printcall);
                    if(p != 0) {
                        --p;
                    }else if(p == 0) {
                        p = 0;
                    }
                }
            }

            if(temp_password[p] == '\r' && p == 4){
                temp_password[p] = '\0';
                break; 
            }

        }while(temp_password[p-1] != '\r');
        printf("\n");

        int x = 1, r = 0, stop = 0;

        while(stop == 0) {
            ++r;
            if(x == 1) {

                printf("      \r\e[1m\033[0;36mLoading.\033[0m\e[m");
                Sleep(1000);
                ++x;
            }else if(x == 2) {

                printf("      \r\e[1m\033[0;36mLoading..\033[0m\e[m");
                Sleep(1000);
                ++x;
            }else if(x == 3) {

                printf("      \r\e[1m\033[0;36mLoading...\033[0m\e[m");
                Sleep(1000);
                printf("      \r\e[1m\033[0;36mLoading\033[0m\e[m");
                x = 1;
            }

            if(r == 12) {

                printf("      \r\e[1m\033[0;36mLoading...\033[0m\e[m");
                stop = 1;
            }
        }
        Sleep(2000);
        printf("\n");
        printf("\033[0;36m//////////////////////////////////////////////////////////////////////////////////////////////");
        printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        printf("//////////////////////////////////////////////////////////////////////////////////////////////");
        printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        printf("//////////////////////////////////////////////////////////////////////////////////////////////");
        printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        if(cookies == 1) {

            printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            printf("  \e[1mCookies enabled : \033[0;32mALL\033[0m\e[m\n");
        }else if(cookies == 2) {

            printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            printf("\b\e[1mCookies enabled : \033[38;2;255;165;0mOnly-Essential\033[0m\e[m\n");
        }else {

            printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            printf("\b\b\e[1m\033[0;31mCookies Disabled.\033[0m\e[m\n");
        }
        printf("\033[0;36m-------------------\033[0m\n\n");

        printf("\n\e[1mACCOUNT DETAILS\e[m\n");  //Account details shows up here
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t             | Logout | | Show_pass |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t              Type 'L'     Type 'S'\n");

        int iban1, iban2, iban3, iban4, iban5, iban6, iban7;

        srand(time(NULL));              //Generating a unique IBAN 

        iban1 = rand() % 90 + 10;
        iban2 = rand() % 9001 + 1000;
        iban3 = rand() % 9001 + 1000;
        iban4 = rand() % 9001 + 1000;
        iban5 = rand() % 9001 + 1000;
        iban6 = rand() % 9001 + 1000;
        iban7 = rand() % 900 + 100;

        printf("Status: \e[1m\033[0;32m<ONLINE>\033[0m\e[m\n"); 
        if(card == 1) {

            printf("\e[1mCard Type\e[m: \033[0;34mVisa\033[0m\n");
        }else if(card == 2) {

            printf("\e[1mCard Type\e[m: \033[38;2;255;165;0mMaster\033[0m\033[0;31mcard\033[0m\n");
        }
        int b = 36;
        printf("\e[1mBALANCE\e[m: 25.00 %c (USD)\n", b);
        printf("\e[1mIBAN\e[m: GR%d %d %d %d %d %d %d\n", iban1, iban2, iban3, iban4, iban5, iban6, iban7);
        printf("\e[1mID NAME\e[m: %s %s\n", realname, surname);
        printf("\e[1mAccount username\e[m: %s\n", username);
        printf("\e[1mUnique Password\e[m: **** \e[1m\033[0;31m[Hidden]\033[0m\e[m\n");
        printf("\e[1mPhone: |+30|\e[m %llu \e[1m\033[0;32m[VERIFIED]\033[0m\e[m\n", phone_num);
        printf("\e[1mEmail\e[m: %s\n", email);

        printf("\n\e[1mAs you just created your first account in our bank we would like to award you with 25 %c to show you our appreciation!\e[m\n", 36);
        printf("\e[1mTechnical Department will be here for you whenever you need it!\e[m\n\n");
        printf("Next activity: ");
        char na;
        scanf("%s", &na);
        
        if(na == 'L') {

            time_t t;   
            time(&t);

            printf("\e[1m\033[0;36mLast seen online:\033[0m\e[m %s\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   \e[1mYOU HAVE SELECTED TO LOGOUT!\e[m\n", ctime(&t));
            printf("\033[0;36m//////////////////////////////////////////////////////////////////////////////////////////////");
            printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
            Sleep(2500);
            printf("\e[1mHope to see you soon!\033[0m\e[m\n");
            exit(1);
        }else if(na == 'S') {

            Sleep(2000);
            printf("\n");
            printf("\033[0;36m//////////////////////////////////////////////////////////////////////////////////////////////");
            printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
            printf("//////////////////////////////////////////////////////////////////////////////////////////////");
            printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
            printf("//////////////////////////////////////////////////////////////////////////////////////////////");
            printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
            if(cookies == 1) {

                printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
                printf("  \e[1mCookies enabled : \033[0;32mALL\033[0m\e[m\n");
            }else if(cookies == 2) {

                printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
                printf("\b\e[1mCookies enabled : \033[38;2;255;165;0mOnly-Essential\033[0m\e[m\n");
            }else {

                printf("|https://www.NNB.gr/\033[0m\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
                printf("\b\b\e[1m\033[0;31mCookies Disabled.\033[0m\e[m\n");
            }
            printf("\033[0;36m-------------------\033[0m\n\n");

            printf("\n\e[1mACCOUNT DETAILS\e[m\n");  //Account details shows up here
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t             | Logout | | Show_pass |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t              Type 'L'     Type 'S'\n");

            printf("Status: \e[1m\033[0;32m<ONLINE>\033[0m\e[m\n");  
            if(card == 1) {

                printf("\e[1mCard Type\e[m: \033[0;34mVisa\033[0m\n");
            }else if(card == 2) {

                printf("\e[1mCard Type\e[m: \033[38;2;255;165;0mMaster\033[0m\033[0;31mcard\033[0m\n");
            }
            int b = 36;
            printf("\e[1mBALANCE\e[m: 25.00 %c (USD)\n", b);
            printf("\e[1mIBAN\e[m: GR%d %d %d %d %d %d %d\n", iban1, iban2, iban3, iban4, iban5, iban6, iban7);
            printf("\e[1mID NAME\e[m: %s %s\n", realname, surname);
            printf("\e[1mAccount username\e[m: %s\n", username);
            printf("\e[1mUnique Password\e[m: %d\n", uni_pass);
            printf("\e[1mPhone: |+30|\e[m %llu \e[1m\033[0;32m[VERIFIED]\033[0m\e[m\n", phone_num);
            printf("\e[1mEmail\e[m: %s\n\n\n", email);
            printf("Next activity: ");
            char na;
            scanf("%s", &na);

            if(na == 'L') {

            time_t t;   
            time(&t);

            printf("\e[1m\033[0;36mLast seen online:\033[0m\e[m %s\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   \e[1mYOU HAVE SELECTED TO LOGOUT!\e[m\n", ctime(&t));
            printf("\033[0;36m//////////////////////////////////////////////////////////////////////////////////////////////");
            printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
            Sleep(2500);
            printf("\e[1mHope to see you soon!\033[0m\e[m\n");
            exit(1);
            }else {

            time_t t;   
            time(&t);

            Sleep(4000);
            printf("\e[1m\033[0;31mWARNING An error just occured!\033[0m\nWe have sent a ticket to our technical department and we will inform you about the issue later.\e[m\n");
            printf("\n\e[1m\033[0;36mLast seen online\e[m: %s\n", ctime(&t));
            printf("//////////////////////////////////////////////////////////////////////////////////////////////");
            printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
            Sleep(3000);
            printf("\e[1mHope to see you soon!\033[0m\e[m\n");
            }

        }else {

            time_t t;   
            time(&t);

            Sleep(4000);
            printf("\e[1m\033[0;31mWARNING An error just occured!\033[0m\nWe have sent a ticket to our technical department and we will inform you about the issue later.\e[m\n");
            printf("\n\e[1m\033[0;36mLast seen online\e[m: %s\n", ctime(&t));
            printf("//////////////////////////////////////////////////////////////////////////////////////////////");
            printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
            Sleep(3000);
            printf("\e[1mHope to see you soon!\033[0m\e[m\n");
        }

    return 0;
}