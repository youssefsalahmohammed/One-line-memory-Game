#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
tryagain:

    // Declaration \\

    string arr_char="ABCDEFGHIJABCDEFGHIJ";
    string arr_numbers= "12345678901234567890";
    string arr_numbers2= "12345678901234567890";
    int player1_firstGame,player1_secondGame,player2_firstGame,player2_secondGame,sum_player1=0,sum_player2=0,sum_computer=0,onePlayerOrTwo,stopOfLoop=0,playAgainOrNot,hardOrEasyOrMedium;
    int computer_firstGame,computer_secondGame;
    vector<int>vec1;



    srand(time(0));  // shuffle of the array \\

    random_shuffle(arr_char.begin(), arr_char.end());




    // start of game \\


    cout<<"play as : \n 1) one player \n 2) two player \n";
    cin>>onePlayerOrTwo;
    system("CLS");


    if(onePlayerOrTwo==2)
    {
        cout<<" start of game \n \n ";


        // start of game : two player \\


        while(stopOfLoop!=20)
        {


            // player 1 turn \\

            for(int i=0; i<20; i++)
            {
                cout<<arr_numbers[i]<<" ";
            }
            cout<<endl<<endl;


            cout<<"player 1 : chose your first number \n";
            cin>>player1_firstGame;
            while(player1_firstGame>20)
            {
                cout<<"please chose a right number"<<endl;
                cin>>player1_firstGame;

            }
            for(int i=0; i<vec1.size(); i++)
            {
                if(player1_firstGame==vec1[i])
                {
                    while(player1_firstGame==vec1[i] || player1_firstGame>20)
                    {
                        cout<<"please chose a right number"<<endl;
                        cin>>player1_firstGame;
                    }
                }
            }




            for(int i=0; i<20; i++)
            {
                if(i!=(player1_firstGame-1))
                {
                    cout<<arr_numbers[i]<<" ";
                }
                else
                {
                    arr_numbers[i]=arr_char[i];
                    cout<<arr_numbers[i]<<" ";
                }
            }
            cout<<endl<<endl;


            cout<<"player 1 : chose your second number \n";
            cin>>player1_secondGame;
            while(player1_secondGame>20)
            {
                cout<<"please chose a right number"<<endl;
                cin>>player1_secondGame;

            }
            while(player1_firstGame==player1_secondGame)
            {
                cout<<"please chose a right number"<<endl;
                cin>>player1_firstGame;

            }
            for(int i=0; i<vec1.size(); i++)
            {
                if(player1_secondGame==vec1[i])
                {
                    while(player1_secondGame==vec1[i] || player1_secondGame>20 || player1_firstGame==player1_secondGame )
                    {
                        cout<<"please chose a right number"<<endl;
                        cin>>player1_secondGame;
                    }
                }
            }


            for(int i=0; i<20; i++)
            {
                if(i!=(player1_secondGame-1))
                {
                    cout<<arr_numbers[i]<<" ";
                }
                else
                {
                    arr_numbers[i]=arr_char[i];
                    cout<<arr_numbers[i]<<" ";
                }
            }
            cout<<endl<<endl;

            if(arr_char[player1_firstGame-1]!=arr_char[player1_secondGame-1])
            {
                for(int i=0; i<20; i++)
                {
                    if(arr_numbers[i]!='*')
                    {
                        arr_numbers[i]=arr_numbers2[i];
                    }
                }
            }

            if(arr_char[player1_firstGame-1]==arr_char[player1_secondGame-1])
            {
                sum_player1++;
                arr_numbers[player1_firstGame-1]='*';
                arr_numbers[player1_secondGame-1]='*';
                stopOfLoop+=2;
                vec1.push_back(player1_firstGame);
                vec1.push_back(player1_secondGame);

            }
            int sum=0;
            for(int i=0; i<20; i++)
            {

                if(arr_numbers[i]=='*')
                {
                    sum++;
                }
                if(sum==20)
                {
                    goto checkWinner;

                }
            }






            // player 2 turn \\


            for(int i=0; i<20; i++)
            {
                cout<<arr_numbers[i]<<" ";
            }
            cout<<endl<<endl;


            cout<<"player 2 : chose your first number \n";
            cin>>player2_firstGame;
            while(player2_firstGame>20)
            {
                cout<<"please chose a right number"<<endl;
                cin>>player2_firstGame;

            }
            for(int i=0; i<vec1.size(); i++)
            {
                if(player2_firstGame==vec1[i])
                {
                    while(player2_firstGame==vec1[i] || player2_firstGame>20)
                    {
                        cout<<"please chose a right number"<<endl;
                        cin>>player2_firstGame;
                    }
                }
            }




            for(int i=0; i<20; i++)
            {
                if(i!=(player2_firstGame-1))
                {
                    cout<<arr_numbers[i]<<" ";
                }
                else
                {
                    arr_numbers[i]=arr_char[i];
                    cout<<arr_numbers[i]<<" ";
                }
            }
            cout<<endl<<endl;


            cout<<"player 2 : chose your second number \n";
            cin>>player2_secondGame;
            while(player2_secondGame>20)
            {
                cout<<"please chose a right number"<<endl;
                cin>>player2_secondGame;

            }
            while(player2_firstGame==player2_secondGame)
            {
                cout<<"please chose a right number"<<endl;
                cin>>player2_secondGame;

            }
            for(int i=0; i<vec1.size(); i++)
            {
                if(player2_secondGame==vec1[i])
                {
                    while(player2_secondGame==vec1[i] || player2_secondGame>20 || player2_firstGame==player2_secondGame)
                    {
                        cout<<"please chose a right number"<<endl;
                        cin>>player1_secondGame;
                    }
                }
            }


            for(int i=0; i<20; i++)
            {
                if(i!=(player2_secondGame-1))
                {
                    cout<<arr_numbers[i]<<" ";
                }
                else
                {
                    arr_numbers[i]=arr_char[i];
                    cout<<arr_numbers[i]<<" ";
                }
            }
            cout<<endl<<endl;

            if(arr_char[player2_firstGame-1]!=arr_char[player2_secondGame-1])
            {
                for(int i=0; i<20; i++)
                {
                    if(arr_numbers[i]!='*')
                    {
                        arr_numbers[i]=arr_numbers2[i];
                    }
                }
            }
            if(arr_char[player2_firstGame-1]==arr_char[player2_secondGame-1])
            {
                sum_player2++;
                arr_numbers[player2_firstGame-1]='*';
                arr_numbers[player2_secondGame-1]='*';
                stopOfLoop+=2;
                vec1.push_back(player2_firstGame);
                vec1.push_back(player2_secondGame);
            }

            int sum1=0;
            for(int i=0; i<20; i++)
            {

                if(arr_numbers[i]=='*')
                {
                    sum1++;
                }
                if(sum1==20)
                {
                    goto checkWinner;

                }
            }
            cout<<"score of player 1: "<<sum_player1<<endl<<"score of player 2: "<<sum_player2<<endl<<endl;
        }



        // check winner \\

checkWinner :
        system("CLS");

        cout<<"score of player 1: "<<sum_player1<<endl<<"score of player 2: "<<sum_player2<<endl;

        for(int i=0; i<20; i++)
        {
            cout<<arr_numbers[i]<<" ";
        }
        cout<<endl<<endl;





        if(sum_player1==sum_player2)
        {
            cout<<"It is a tie situation , There  is no winner"<<endl;
            cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
            cin>>playAgainOrNot;

            if(playAgainOrNot==1)
                return 0;
            if(playAgainOrNot==2)
                goto tryagain;
        }
        if(sum_player1>sum_player2)
        {
            cout<<"Player 1 is the winner"<<endl;
            cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
            cin>>playAgainOrNot;

            if(playAgainOrNot==1)
                return 0;
            if(playAgainOrNot==2)
                goto tryagain;
        }
        if(sum_player1<sum_player2)
        {
            cout<<"Player 2 is the winner"<<endl;
            cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
            cin>>playAgainOrNot;

            if(playAgainOrNot==1)
                return 0;
            if(playAgainOrNot==2)
                goto tryagain;
        }

        // end of game : two player \\

    }


    if(onePlayerOrTwo==1)
    {
        // start of game : one player \\


        cout<<"which level you will play on : \n1)Hard \n2)Easy \n3)Medium \n";
        cin>>hardOrEasyOrMedium;
        system("CLS");
        if(hardOrEasyOrMedium==1)
        {
            cout<<" start of game \n \n ";




            // start of game : one player : Hard \\

backToPlayer1:

            while(stopOfLoop!=20)
            {





                // player 1 turn \\

                for(int i=0; i<20; i++)
                {
                    cout<<arr_numbers[i]<<" ";
                }
                cout<<endl<<endl;

                cout<<"player 1 : chose your first number \n";
                cin>>player1_firstGame;
                while(player1_firstGame>20)
                {
                    cout<<"please chose a right number"<<endl;
                    cin>>player1_firstGame;

                }
                for(int i=0; i<vec1.size(); i++)
                {
                    if(player1_firstGame==vec1[i])
                    {
                        while(player1_firstGame==vec1[i] || player1_firstGame>20)
                        {
                            cout<<"please chose a right number"<<endl;
                            cin>>player1_firstGame;
                        }
                    }
                }




                for(int i=0; i<20; i++)
                {
                    if(i!=(player1_firstGame-1))
                    {
                        cout<<arr_numbers[i]<<" ";
                    }
                    else
                    {
                        arr_numbers[i]=arr_char[i];
                        cout<<arr_numbers[i]<<" ";
                    }
                }
                cout<<endl<<endl;


                cout<<"player 1 : chose your second number \n";
                cin>>player1_secondGame;
                while(player1_secondGame>20)
                {
                    cout<<"please chose a right number"<<endl;
                    cin>>player1_secondGame;

                }
                while(player1_firstGame==player1_secondGame)
                {
                    cout<<"please chose a right number"<<endl;
                    cin>>player1_firstGame;

                }
                for(int i=0; i<vec1.size(); i++)
                {
                    if(player1_secondGame==vec1[i])
                    {
                        while(player1_secondGame==vec1[i] || player1_secondGame>20 || player1_firstGame==player1_secondGame)
                        {
                            cout<<"please chose a right number"<<endl;
                            cin>>player1_secondGame;
                        }
                    }
                }


                for(int i=0; i<20; i++)
                {
                    if(i!=(player1_secondGame-1))
                    {
                        cout<<arr_numbers[i]<<" ";
                    }
                    else
                    {
                        arr_numbers[i]=arr_char[i];
                        cout<<arr_numbers[i]<<" ";
                    }
                }
                cout<<endl<<endl;

                if(arr_char[player1_firstGame-1]!=arr_char[player1_secondGame-1])
                {
                    for(int i=0; i<20; i++)
                    {
                        if(arr_numbers[i]!='*')
                        {
                            arr_numbers[i]=arr_numbers2[i];
                        }
                    }
                }

                if(arr_char[player1_firstGame-1]==arr_char[player1_secondGame-1])
                {

                    arr_numbers[player1_firstGame-1]='*';
                    arr_numbers[player1_secondGame-1]='*';
                    stopOfLoop+=2;
                    vec1.push_back(player1_firstGame);
                    vec1.push_back(player1_secondGame);
                    sum_player1++;
                    cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl<<endl;

                }



                // It is the computer turn \\

                for(int i=0; i<20; i++)
                {
                    cout<<arr_numbers[i]<<" ";
                }
                cout<<endl<<endl;




                for(int i=0; i<20; i++)
                {
                    for(int j=0; j<20; j++)
                    {
                        if((arr_char[i]==arr_char[j]) && (i!=j) && (arr_numbers[i]!='*') && (arr_numbers[j]!='*'))
                        {
                            cout<<"computer first game is :\n";
                            arr_numbers[i]=arr_char[i];
                            for(int i=0; i<20; i++)
                            {
                                cout<<arr_numbers[i]<<" ";
                            }
                            cout<<endl<<endl;

                            cout<<"computer second game is :\n ";
                            arr_numbers[j]=arr_char[j];
                            for(int i=0; i<20; i++)
                            {
                                cout<<arr_numbers[i]<<" ";
                            }
                            cout<<endl<<endl;

                            arr_numbers[i]='*';
                            arr_numbers[j]='*';
                            stopOfLoop+=2;
                            vec1.push_back(i+1);
                            vec1.push_back(j+1);
                            sum_computer++;
                            cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl<<endl;
                            goto backToPlayer1;

                        }
                    }

                }




            }


            // check winner \\

            system("CLS");

            cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl;

            for(int i=0; i<20; i++)
            {
                cout<<arr_numbers[i]<<" ";
            }
            cout<<endl<<endl;



            if(sum_player1==sum_computer)
            {
                cout<<"It is a tie situation , There  is no winner"<<endl;
                cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
                cin>>playAgainOrNot;

                if(playAgainOrNot==1)
                    return 0;
                if(playAgainOrNot==2)
                    goto tryagain;
            }
            if(sum_player1>sum_computer)
            {
                cout<<"Player 1 is the winner"<<endl;
                cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
                cin>>playAgainOrNot;

                if(playAgainOrNot==1)
                    return 0;
                if(playAgainOrNot==2)
                    goto tryagain;
            }
            if(sum_player1<sum_computer)
            {
                cout<<"computer is the winner"<<endl;
                cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
                cin>>playAgainOrNot;

                if(playAgainOrNot==1)
                    return 0;
                if(playAgainOrNot==2)
                    goto tryagain;
            }


            // end of game : one player : Hard \\

        }
        if(hardOrEasyOrMedium==2)
        {

            cout<<" start of game \n \n ";

            // start of game : one player : Easy \\

backToPlayer1_Miduem:

            while(stopOfLoop!=20)
            {





                // player 1 turn \\

                for(int i=0; i<20; i++)
                {
                    cout<<arr_numbers[i]<<" ";
                }
                cout<<endl<<endl;

                cout<<"player 1 : chose your first number \n";
                cin>>player1_firstGame;
                while(player1_firstGame>20)
                {
                    cout<<"please chose a right number"<<endl;
                    cin>>player1_firstGame;

                }
                for(int i=0; i<vec1.size(); i++)
                {
                    if(player1_firstGame==vec1[i])
                    {
                        while(player1_firstGame==vec1[i] || player1_firstGame>20)
                        {
                            cout<<"please chose a right number"<<endl;
                            cin>>player1_firstGame;
                        }
                    }
                }




                for(int i=0; i<20; i++)
                {
                    if(i!=(player1_firstGame-1))
                    {
                        cout<<arr_numbers[i]<<" ";
                    }
                    else
                    {
                        arr_numbers[i]=arr_char[i];
                        cout<<arr_numbers[i]<<" ";
                    }
                }
                cout<<endl<<endl;


                cout<<"player 1 : chose your second number \n";
                cin>>player1_secondGame;
                while(player1_secondGame>20)
                {
                    cout<<"please chose a right number"<<endl;
                    cin>>player1_secondGame;

                }
                while(player1_firstGame==player1_secondGame)
                {
                    cout<<"please chose a right number"<<endl;
                    cin>>player1_firstGame;

                }
                for(int i=0; i<vec1.size(); i++)
                {
                    if(player1_secondGame==vec1[i])
                    {
                        while(player1_secondGame==vec1[i]  || player1_secondGame>20  || player1_firstGame==player1_secondGame)
                        {
                            cout<<"please chose a right number"<<endl;
                            cin>>player1_secondGame;
                        }
                    }
                }


                for(int i=0; i<20; i++)
                {
                    if(i!=(player1_secondGame-1))
                    {
                        cout<<arr_numbers[i]<<" ";
                    }
                    else
                    {
                        arr_numbers[i]=arr_char[i];
                        cout<<arr_numbers[i]<<" ";
                    }
                }
                cout<<endl<<endl;

                if(arr_char[player1_firstGame-1]!=arr_char[player1_secondGame-1])
                {
                    for(int i=0; i<20; i++)
                    {
                        if(arr_numbers[i]!='*')
                        {
                            arr_numbers[i]=arr_numbers2[i];
                        }
                    }
                }

                if(arr_char[player1_firstGame-1]==arr_char[player1_secondGame-1])
                {

                    arr_numbers[player1_firstGame-1]='*';
                    arr_numbers[player1_secondGame-1]='*';
                    stopOfLoop+=2;
                    vec1.push_back(player1_firstGame);
                    vec1.push_back(player1_secondGame);
                    sum_player1++;
                    cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl<<endl;
                }



                // It is the computer turn \\

                for(int i=0; i<20; i++)
                {
                    cout<<arr_numbers[i]<<" ";
                }
                cout<<endl<<endl;




                for(int i=0; i<20; i++)
                {
                    for(int j=0; j<20; j++)
                    {
                        if(i+1!='*' && j+1!='*' && i+1!=player1_firstGame && i+1!=player1_secondGame && i!=j && i+1!=computer_firstGame && i+1!=computer_secondGame && j+1!=computer_secondGame && j+1!=computer_firstGame)
                        {
                            if(arr_char[i+1]!=arr_char[j+1])
                            {
                                cout<<"computer first game is :\n";
                                arr_numbers[i+1]=arr_char[i+1];
                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                cout<<"computer second game is :\n";
                                arr_numbers[j+1]=arr_char[j+1];
                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                computer_firstGame=i+1;
                                computer_secondGame=j+1;

                                arr_numbers[i+1]=arr_numbers2[i+1];
                                arr_numbers[j+1]=arr_numbers2[j+1];

                                goto backToPlayer1_Miduem;
                            }
                            if(arr_char[i+1]==arr_char[j+1])
                            {
                                cout<<"computer first game is :\n";
                                arr_numbers[i+1]=arr_char[i+1];
                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                cout<<"computer second game is :\n";
                                arr_numbers[j+1]=arr_char[j+1];
                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                arr_numbers[i+1]='*';
                                arr_numbers[j+1]='*';

                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                computer_firstGame=i+1;
                                computer_secondGame=j+1;

                                stopOfLoop+=2;
                                vec1.push_back(i+1);
                                vec1.push_back(j+1);
                                sum_computer++;
                                cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl<<endl;
                                goto backToPlayer1_Miduem;

                            }
                        }
                    }
                }
            }



        // check winner \\

        system("CLS");

        cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl;

        for(int i=0; i<20; i++)
        {
            cout<<arr_numbers[i]<<" ";
        }
        cout<<endl<<endl;



        if(sum_player1==sum_computer)
        {
            cout<<"It is a tie situation , There  is no winner"<<endl;
            cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
            cin>>playAgainOrNot;

            if(playAgainOrNot==1)
                return 0;
            if(playAgainOrNot==2)
                goto tryagain;
        }
        if(sum_player1>sum_computer)
        {
            cout<<"Player 1 is the winner"<<endl;
            cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
            cin>>playAgainOrNot;

            if(playAgainOrNot==1)
                return 0;
            if(playAgainOrNot==2)
                goto tryagain;
        }
        if(sum_player1<sum_computer)
        {
            cout<<"computer is the winner"<<endl;
            cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
            cin>>playAgainOrNot;

            if(playAgainOrNot==1)
                return 0;
            if(playAgainOrNot==2)
                goto tryagain;
        }


        // end of game : one player : Easy  \\

    }
    if(hardOrEasyOrMedium==3)
    {

        // start of game : one player : Medium \\


        cout<<" start of game \n \n ";






backToPlayer1_Easy:

        while(stopOfLoop!=20)
        {





            // player 1 turn \\

            for(int i=0; i<20; i++)
            {
                cout<<arr_numbers[i]<<" ";
            }
            cout<<endl<<endl;

            cout<<"player 1 : chose your first number \n";
            cin>>player1_firstGame;
            while(player1_firstGame>20)
            {
                cout<<"please chose a right number"<<endl;
                cin>>player1_firstGame;

            }
            for(int i=0; i<vec1.size(); i++)
            {
                if(player1_firstGame==vec1[i])
                {
                    while(player1_firstGame==vec1[i] || player1_firstGame>20)
                    {
                        cout<<"please chose a right number"<<endl;
                        cin>>player1_firstGame;
                    }
                }
            }




            for(int i=0; i<20; i++)
            {
                if(i!=(player1_firstGame-1))
                {
                    cout<<arr_numbers[i]<<" ";
                }
                else
                {
                    arr_numbers[i]=arr_char[i];
                    cout<<arr_numbers[i]<<" ";
                }
            }
            cout<<endl<<endl;


            cout<<"player 1 : chose your second number \n";
            cin>>player1_secondGame;
            while(player1_secondGame>20)
            {
                cout<<"please chose a right number"<<endl;
                cin>>player1_secondGame;

            }
            while(player1_firstGame==player1_secondGame)
            {
                cout<<"please chose a right number"<<endl;
                cin>>player1_firstGame;

            }
            for(int i=0; i<vec1.size(); i++)
            {
                if(player1_secondGame==vec1[i])
                {
                    while(player1_secondGame==vec1[i] || player1_secondGame>20 || player1_firstGame==player1_secondGame)
                    {
                        cout<<"please chose a right number"<<endl;
                        cin>>player1_secondGame;
                    }
                }
            }


            for(int i=0; i<20; i++)
            {
                if(i!=(player1_secondGame-1))
                {
                    cout<<arr_numbers[i]<<" ";
                }
                else
                {
                    arr_numbers[i]=arr_char[i];
                    cout<<arr_numbers[i]<<" ";
                }
            }
            cout<<endl<<endl;

            if(arr_char[player1_firstGame-1]!=arr_char[player1_secondGame-1])
            {
                for(int i=0; i<20; i++)
                {
                    if(arr_numbers[i]!='*')
                    {
                        arr_numbers[i]=arr_numbers2[i];
                    }
                }
            }

            if(arr_char[player1_firstGame-1]==arr_char[player1_secondGame-1])
            {

                arr_numbers[player1_firstGame-1]='*';
                arr_numbers[player1_secondGame-1]='*';
                stopOfLoop+=2;
                vec1.push_back(player1_firstGame);
                vec1.push_back(player1_secondGame);
                sum_player1++;
                cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl<<endl;

            }

            // It is the computer turn \\

            for(int i=0; i<20; i++)
            {
                cout<<arr_numbers[i]<<" ";
            }
            cout<<endl<<endl;

            if((player1_firstGame-player1_secondGame)==10 || (player1_firstGame-player1_secondGame)==1 || (player1_firstGame-player1_secondGame)==-10 || (player1_firstGame-player1_secondGame)==-1)
            {
                for(int i=0; i<20; i++)
                {
                    for(int j=0; j<20; j++)
                    {
                        if((arr_char[i]==arr_char[j]) && (i!=j) && (arr_numbers[i]!='*') && (arr_numbers[j]!='*'))
                        {
                            cout<<"computer first game is :\n";
                            arr_numbers[i]=arr_char[i];
                            for(int i=0; i<20; i++)
                            {
                                cout<<arr_numbers[i]<<" ";
                            }
                            cout<<endl<<endl;

                            cout<<"computer second game is :\n ";
                            arr_numbers[j]=arr_char[j];
                            for(int i=0; i<20; i++)
                            {
                                cout<<arr_numbers[i]<<" ";
                            }
                            cout<<endl<<endl;

                            arr_numbers[i]='*';
                            arr_numbers[j]='*';
                            stopOfLoop+=2;
                            vec1.push_back(i+1);
                            vec1.push_back(j+1);
                            sum_computer++;
                            cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl<<endl;
                            goto backToPlayer1_Easy;
                        }
                    }
                }
            }
            else
            {
                for(int i=0; i<20; i++)
                {
                    for(int j=0; j<20; j++)
                    {
                        if(i+1!='*' && j+1!='*' && i+1!=player1_firstGame && i+1!=player1_secondGame && i!=j && i+1!=computer_firstGame && i+1!=computer_secondGame && j+1!=computer_secondGame && j+1!=computer_firstGame)
                        {
                            if(arr_char[i+1]!=arr_char[j+1])
                            {
                                cout<<"computer first game is :\n";
                                arr_numbers[i+1]=arr_char[i+1];
                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                cout<<"computer second game is :\n";
                                arr_numbers[j+1]=arr_char[j+1];
                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                computer_firstGame=i+1;
                                computer_secondGame=j+1;

                                arr_numbers[i+1]=arr_numbers2[i+1];
                                arr_numbers[j+1]=arr_numbers2[j+1];

                                goto backToPlayer1_Easy;
                            }
                            if(arr_char[i+1]==arr_char[j+1])
                            {
                                cout<<"computer first game is :\n";
                                arr_numbers[i+1]=arr_char[i+1];
                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                cout<<"computer second game is :\n";
                                arr_numbers[j+1]=arr_char[j+1];
                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                arr_numbers[i+1]='*';
                                arr_numbers[j+1]='*';

                                for(int j=0; j<20; j++)
                                {
                                    cout<<arr_numbers[j]<<" ";
                                }
                                cout<<endl<<endl;

                                computer_firstGame=i+1;
                                computer_secondGame=j+1;

                                stopOfLoop+=2;
                                vec1.push_back(i+1);
                                vec1.push_back(j+1);
                                sum_computer++;
                                cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl<<endl;
                                goto backToPlayer1_Easy;

                            }
                        }
                    }
                }
            }
        }


        // check winner \\

        system("CLS");

        cout<<"score of player 1: "<<sum_player1<<endl<<"score of computer: "<<sum_computer<<endl;

        for(int i=0; i<20; i++)
        {
            cout<<arr_numbers[i]<<" ";
        }
        cout<<endl<<endl;


        if(sum_player1==sum_computer)
        {
            cout<<"It is a tie situation , There  is no winner"<<endl;
            cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
            cin>>playAgainOrNot;

            if(playAgainOrNot==1)
                return 0;
            if(playAgainOrNot==2)
                goto tryagain;
        }
        if(sum_player1>sum_computer)
        {
            cout<<"Player 1 is the winner"<<endl;
            cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
            cin>>playAgainOrNot;

            if(playAgainOrNot==1)
                return 0;
            if(playAgainOrNot==2)
                goto tryagain;
        }
        if(sum_player1<sum_computer)
        {
            cout<<"computer is the winner"<<endl;
            cout<<"Do you want to play again : \n1) no \n2) yes \n"<<endl;
            cin>>playAgainOrNot;

            if(playAgainOrNot==1)
                return 0;
            if(playAgainOrNot==2)
                goto tryagain;
        }


        // end of game : one player : Medium  \\

    }



    // end of game : one player \\

    // end of game \\

  }
}





