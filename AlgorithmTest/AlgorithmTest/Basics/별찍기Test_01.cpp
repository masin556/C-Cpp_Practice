/*
*
**
***
****
*****
*/
#include <iostream>
using namespace std;

int main()
{
#pragma region 별1
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            cout << "*";
//        }
//        cout << '\n';
//    }
#pragma endregion

#pragma region 별2
    /*
    *****
    ****
    ***
    **
    *
    */
    //    int n;
    //    cin >> n;
    //
    //    for (int i = 0; i < n; i++)
    //    {
    //        for (int j = i; j < n; j++)
    //        {
    //            cout << "*";
    //        }
    //        cout << '\n';
    //    }

#pragma endregion

#pragma region 별3
    /*
     *
     **
     ***
     ****
     *****
     */
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    //{
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j < n - i - 1) // 1. 0 < (5 - 0 - 1)= 4 0 < 4  j가 작다면 공백
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << '\n';
    // }
#pragma endregion

#pragma region 별4
    /*
    *****
     ****
      ***
       **
        *
    */
    /* int n;
     cin >> n;

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < i; j++)
         {
             cout << " ";
         }
         for (int k = n; k > i; k--)
         {
             cout << "*";
         }
         cout << '\n';
     }*/
#pragma endregion

#pragma region 별5
    /*
        *
       ***
      *****
     *******
    *********

    */
 /*   int n;
    cin >> n;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < num; k++)
        {
            cout << "*";
        }
        num += 2;

        cout << '\n';
    }*/
#pragma endregion


#pragma region 별6
    /*
    *********
     *******
      *****
       ***
        *
    */
       int n;
       cin >> n;
       int num = 9;

       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < i; j++)
           {
               cout << " ";
           }
           for (int k = num; k > 0; k--)
           {
               cout << "*";
           }
           num -= 2;

           cout << '\n';
       }
#pragma endregion

#pragma region 별7
       /*
       *********
       *******
       *****
       ***
       *
       */
       int n;
       cin >> n;
       int num = 9;

       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < i; j++)
           {
               cout << " ";
           }
           for (int k = num; k > 0; k--)
           {
               cout << "*";
           }
           num -= 2;

           cout << '\n';
       }
#pragma endregion



    return 0;
}