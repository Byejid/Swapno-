#include<iostream>
using namespace std ;

class Mall
{

    int n, q, num ;
    double price ;
    char ch;

public:

    void welcome()
    {

    cout<< "Hey there,Welcome to our Mall !"<<endl;
    }

    void take_input()
    {
        cout << "\t\tEnter your choice: " << endl ;
        cout <<endl<< "\t\t1. Footwear " << endl ;
        cout << "\t\t2. Costume " << endl ;
        cout << "\t\t3. Food" << endl ;
        cout << "\t\t4. Medicine " << endl ;
        cout << "\t\t5. Educational Products " << endl ;
        cin >> n ;

        if(n==1)
        {
            cout << "\t\tWhich brand do you want? " << endl ;
            cout << "\t\t1. Converse " << endl ;
            cout << "\t\t2. New balance " << endl ;
            cin >> num ;

            if(num==1)
            {
                cout << "\t\tWhat kind of footwear do you want? " << endl ;
                cout << "\t\ta. Sneakers " << endl ;
                cout << "\t\tb. Sandals " << endl ;
                cout << "\t\tc. Casuals " << endl ;
                cout << "\t\td. Ladies flats " << endl ;
                cout << "\t\te. Formals " << endl ;
                cin >> ch ;

                if(ch=='a')
                {
                    cout << "\t\tHow many pairs do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*600 ;

                }

                else if(ch=='b')
                {
                    cout << "\t\tHow many pairs do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*250 ;

                }

                else if(ch=='c')
                {
                    cout << "\t\tHow many pairs do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*500 ;

                }

                else if(ch=='d')
                {
                    cout << "\t\tHow many pairs do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*450 ;

                }

                else if(ch=='e')
                {
                    cout << "\t\tHow many paris do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*350 ;

                }

                else
                {
                    cout << "\t\tYou pressed the wrong key!!! " << endl ;
                }


            }

            else if(num==2)
            {
                cout << "\t\tWhat kind of footwear do you want? " << endl ;
                cout << "\t\ta. Sneakers " << endl ;
                cout << "\t\tb. Sandals " << endl ;
                cout << "\t\tc. Casuals " << endl ;
                cout << "\t\td. Ladies flats " << endl ;
                cout << "\t\te. Formals " << endl ;
                cin >> ch ;


                if(ch=='a')
                {
                    cout << "\t\tHow many pairs do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*600 ;

                }

                else if(ch=='b')
                {
                    cout << "\t\tHow many pairs do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*250 ;

                }

                else if(ch=='c')
                {
                    cout << "\t\tHow many pairs do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*500 ;

                }

                else if(ch=='d')
                {
                    cout << "\t\tHow many pairs do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*450 ;

                }

                else if(ch=='e')
                {
                    cout << "\t\tHow many paris do you want? " << endl ;
                    cin >> q ;
                    cout << "\t\tYou selected " << q << " pairs. " << endl ;
                    price = q*350 ;

                }

                else
                {
                    cout << "\t\tYou pressed the wrong key!!! " << endl ;
                }

            }

            else
            {
                cout << "\t\tYou pressed the wrong key!!! " << endl ;
            }

        }


        else if(n==2)
        {
            cout << "\t\tWhat kind of costume do you want? " << endl ;
            cout << "\t\ta. Women costumes " << endl ;
            cout << "\t\tb. Adult costumes " << endl ;
            cout << "\t\tc. Men costumes " << endl ;
            cout << "\t\td. Kids costumes " << endl ;
            cout << "\t\te. Boys costumes " << endl ;
            cout << "\t\tf. Baby & Toddler Costumes " << endl ;
            cin >> ch ;

            if(ch=='a')
            {
                cout << "\t\tHow many women costumes do you want? " <<endl ;
                cin >> q ;
                cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
                price = q*500 ;

            }

            else if(ch=='b')
            {
                cout << "\t\tHow many adult costumes do you want? " << endl;
                cin >> q ;
                cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
                price = q*250 ;
            }

            else if(ch=='c')
            {
                cout << "\t\tHow many men costumes do you want? " << endl;
                cin >> q ;
                cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
                price = q*450 ;
            }

            else if(ch=='d')
            {
                cout << "\t\tHow many kids costumes do you want? " << endl ;
                cin >> q ;
                cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
                price = q*100 ;
            }

            else if(ch=='e')
            {
                cout << "\t\tHow many boys costumes do you want? " << endl;
                cin >> q ;
                cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
                price = q*500 ;

            }

            else if(ch=='f')
            {
                cout << "\t\tHow many baby & toddler costumes do you want? " << endl ;
                cin >> q ;
                cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
                price = q*100 ;

            }

            else
            {
                cout << "\t\tYou pressed the wrong key!!! \n" << endl ;
            }


        }

        else if(n==3)
        {
            cout << "\t\tWhat kind of food do you want? " << endl ;
            cout << "\t\ta. Dairy " << endl ;
            cout << "\t\tb. Baby foods " << endl ;
            cout << "\t\tc. Beverages " << endl ;
            cout << "\t\td. Breakfast Cereals " << endl ;
            cin >> ch ;

            if(ch=='a')
            {
                cout << "\t\tSelect your dairy foods. " << endl ;
                cout << "\t\t1. Milk " << endl ;
                cout << "\t\t2. Cheese " << endl ;
                cin >> num ;

                if(num==1)
                {
                    cout << "\t\tHow many packet of milk do you want? " <<endl ;
                    cin >> q ;
                    price = q*50 ;
                }

                else if(num==2)
                {
                    cout << "\t\tHow many packet of cheese do you want? " <<endl ;
                    cin >> q ;
                    price = q*40 ;

                }

            }

            else if(ch=='b')
            {
                cout << "\t\tSelect your baby foods. " << endl ;
                cout << "\t\t1. Yogurt " << endl ;
                cout << "\t\t2. Oatmeal " << endl ;
                cin >> num ;

                if(num==1)
                {
                    cout << "\t\tHow many packet of yogurt do you want? " <<endl ;
                    cin >> q ;
                    price = q*100 ;

                }

                else if(num==2)
                {
                    cout << "\t\tHow many packet of oatmeal do you want? " <<endl ;
                    cin >> q ;
                    price = q*100 ;

                }

            }

            else if(ch=='c')
            {
                cout << "\t\tSelect your beverage. " << endl ;
                cout << "\t\t1. Juice and plant drinks " << endl ;
                cout << "\t\t2. Water " << endl ;
                cin >> num ;

                if(num==1)
                {
                    cout << "\t\tHow many bottles of juice and plant drinks do you want? " << endl ;
                    cin >> q ;
                    price = q*30 ;

                }

                else if(num==2)
                {
                    cout << "\t\tHow many bottles of one liter water do you want? " << endl ;
                    cin >> q ;
                    price = q*15 ;

                }

            }
            else if(ch=='d')
            {
                cout << "\t\tSelect your breakfast cereals. " << endl ;
                cout << "\t\t1. Porridge " << endl ;
                cout << "\t\t2. Cornflakes " << endl ;
                cin >> num ;

                if(num==1)
                {
                    cout << "\t\tHow many packet of porridge do you want? " <<endl ;
                    cin >> q ;
                    price = q*30 ;

                }

                else if(num==2)
                {
                    cout << "\t\tHow many packet of cornflakes do you want? "<< endl ;
                    cin >> q ;
                    price = q*50 ;

                }
            }

            else
            {
                cout << "\t\tYou pressed the wrong key!!! " << endl ;
            }


        }

        else if(n==4)
        {
            cout << "\t\tWhat kind of medicine do you want? " << endl ;
            cout << "\t\ta. Paracetamol " << endl ;
            cout << "\t\tb. Saline " << endl ;
            cin >> ch ;

            if(ch=='a')
            {
                cout << "\t\tHow many strips of paracetamol do you want? "<< endl ;
                cin >> q ;
                price = q*5 ;

            }

            else if(ch=='b')
            {
                cout << "\t\tHow many packets of saline do you want? " <<endl ;
                cin >> q ;
                price = q*4 ;

            }

            else
            {
                cout << "\t\tYou pressed the wrong key!!! " << endl ;
            }

        }
        else if(n==5)
        {
            cout << "\t\tWhat kind of educational products do you want? "<< endl ;
            cout << "\t\ta. Pens " << endl ;
            cout << "\t\tb. Pencils " << endl ;
            cout << "\t\tc. Notebooks " << endl ;
            cout << "\t\td. Highlighters " << endl ;
            cin >> ch ;

            if(ch=='a')
            {
                cout << "\t\tHow many amount of pens do you want? " <<endl ;
                cin >> q ;
                price = q*5 ;

            }

            else if(ch=='b')
            {
                cout << "\t\tHow many amount of pencils do you want? " <<endl ;
                cin >> q ;
                price = q*5 ;

            }

            else if(ch=='c')
            {
                cout << "\t\tHow many amount of notebooks do you want? "<< endl ;
                cin >> q ;
                price = q*20 ;

            }

            else if(ch=='d')
            {
                cout << "\t\tHow many amount of highlighters do you want? "<< endl ;
                cin >> q ;
                price = q*30 ;

            }
        }

        else
        {
            cout << "\t\tYou pressed the wrong key!!! " << endl ;
        }

    }

    friend void cost(Mall s) ; ///Friend Function
    ///
};

void cost(Mall s)
{
    cout << "\t\tTotal cost is: " << s.price << endl << endl << endl ;
}

class Purchase : public Mall
{

public:


    int key ;


    void order()
    {
        cout << "\t\tTo confirm the order press 1 " << endl ;
        cout << "\t\tTo cancel the order press 2 " << endl ;
        cin >> key ;

        if(key==1)
        {
            cout << "\t\tYour order has been granted. " << endl ;
            cout << "\t\tYou will be notified soon." << endl ;
            cout << "\t\tHave a nice day dear!\n\n"<<endl;

        }

        else if(key==2)
        {
            cout << "\t\tYour order has been canceled.Thank you! \n\n" << endl ;

        }

        else
        {
            cout << "\t\tYou pressed the wrong key.Thank you! \n\n" << endl ;
        }

    }

};


int main()
{


    char ch;
    do
    {
         Mall one ;
        one.welcome() ;
        one.take_input() ;
        cost(one) ;
        Purchase one2 ;
        one2.order() ;
        cout<< "Do you want to continue? Then press 1 else anything!"<<endl;
        cin>>ch;

    }while(ch=='1');



    return 0;

}
