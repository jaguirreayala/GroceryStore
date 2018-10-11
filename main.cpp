//Author: Juan Aguirre-Ayala
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        //string list[5]; //array of 5 strings
        vector <string> list;
        int numItems = 0;
        char input;
        string item;

        do
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                if(list.size() >= 1)
                {
                cout<<"\n (D)elete last item";
                }
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if(input == 'a' || input == 'A') 
                {
                    cout << "What is the item?\n";
                    cin >> item;
                    list.push_back(item); 
                }
                if(list.size() >=1 && (input == 'd' || input == 'D'))
                {
                    cout << list[list.size() - 1] << " was deleted from the list.\n";
                    list.pop_back();
                }
        }while(input != 'q' && input != 'Q');

        if(list.size() == 0) 
        {
            cout <<"No items to buy!\n";
        }
        else if(list.size() >= 1)
        {
        cout << "==ITEMS TO BUY==\n";
        int num = 1; 
        for(int index=0; index < list.size(); index++)
        {
            cout << num << " " << list[index] << endl;
            num++;
        }
        }

        return 0;

}
