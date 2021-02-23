#include <iostream>
#include "Sales_item.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;

//    std::cout << "Enter two numbers:" << std::endl;
//    int v1 = 0, v2 = 0;
//    std::cin >> v1 >> v2;
//    std::cout << "The sum of " << v1 << " and " << v2
//              << " is " << v1 + v2 << std::endl;

//std::cout << "you";
//std::cout << "are";
//std::cout << std::endl;
//std::cout << "who";

//int v1 = 0, v2 = 0;
//std::cin >> v1;
//std::cin >> v2;
//std::cout << v1;
//std::cout << std::endl;
//std::cout << v2;


///*
// * comment pairs /* */ cannot nest.
// * ''cannot nest'' is considered source code,
// * as is the rest of the program
// */

//    std::cout << "/*";
//    std::cout << "*/";
//    std::cout << /* "*/" */;
//    std::cout << /* "*/" /* "/*" */;


//    int sum = 0, val = 1;
//// keep executing the while as long as val is less than or equal to 10
//    while (val <= 10) {
//        sum += val; // assigns sum + val to sum
//        ++val; // add 1 to val
//    }
//    std::cout << "Sum of 1 to 10 inclusive is "
//            << sum << std::endl;
//    return 0;


//    int sum = 0;
//    // sum values from 1 through 10 inclusive
//    for (int val = 1; val <= 10; ++val)
//        sum += val; // equivalent to sum = sum + val
//    std::cout << "Sum of 1 to 10 inclusive is "
//              << sum << std::endl;
//    return 0;


    /*
     * 1.4.3. Reading an Unknown Number of Inputs
     * */
//    int sum = 0, value = 0;
//    // read until end-of-file, calculating a running total of all values read
//    while (std::cin >> value)
//        sum += value;
//    std::cout << "Sum is: " << sum << std::endl;
//    return 0;

// error: used colon, not a semicolon, after endl
//    std::cout << "Read each file." << std::endl:
// error: missing quotes around string literal
//    std::cout << Update master. << std::endl;
// error: second output operator is missing
//    std::cout << "Write new master." std::endl;
// error: missing ; on return statement
//    return 0

//    int v1 = 0, v2 = 0;
//    std::cin >> v >> v2; // error: uses "v" not "v1"
// error: cout not defined; should be std::cout
//    cout << v1 + v2 << std::endl;
//    return 0;

/*
 * 1.4.4. The if Statement
 * */

//// currVal is the number we're counting; we'll read new values into val
//    int currVal = 0, val = 0;
//// read first number and ensure that we have data to process
//    if (std::cin >> currVal) {
//        int cnt = 1; // store the count for the current value we're processing
//        while (std::cin >> val) { // read the remaining numbers
//            if (val == currVal) // if the values are the same
//                ++cnt; // add 1 to cnt
//            else { // otherwise, print the count for the previous value
//                std::cout << currVal << " occurs "
//                          << cnt << " times" << std::endl;
//                currVal = val; // remember the new value
//                cnt = 1; // reset the counter
//            }
//        } // while loop ends here
//// remember to print the count for the last value in the file
//        std::cout << currVal << " occurs "
//                  << cnt << " times" << std::endl;
//    } // outermost if statement ends here
//    return 0;




/*
 * 1.5. Introducing Classes
 * */


// 0-201-78345-X 3 20.00
// 0-201-78345-X 2 25.00
// 0-201-78345-X 5 110 22

//    Sales_item item1, item2;
//    std::cin >> item1 >> item2; // read a pair of transactions
//    std::cout << item1 + item2 << std::endl; // print their sum
//    return 0;



//    Sales_item item1, item2;
//    std::cin >> item1 >> item2;
//// first check that item1 and item2 represent the same book C++ Primer, Fifth Edition
//    if (item1.isbn() == item2.isbn()) {
//        std::cout << item1 + item2 << std::endl;
//        return 0; // indicate success
//    } else {
//        std::cerr << "Data must refer to same ISBN"
//                  << std::endl;
//        return -1; // indicate failure
//    }

    Sales_item total; // variable to hold data for the next transaction
// read the first transaction and ensure that there are data to process
    if (std::cin >> total) {
        Sales_item trans; // variable to hold the running sum
// read and process the remaining transactions
        while (std::cin >> trans) {
// if we're still processing the same book
            if (total.isbn() == trans.isbn())
                total += trans; // update the running total
            else {
// print results for the previous book
                std::cout << total << std::endl;
                total = trans; // total now refers to the next book
            }
        }
        std::cout << total << std::endl; // print the last transaction
    } else {
// no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }
    return 0;



}


