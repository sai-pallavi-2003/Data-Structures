/* You are the receptionist at a hotel which has 10 floors, numbered from 0 to 9 and each floor has 26 rooms named from ‘A’ to ‘Z’. 
Being a receptionist your task is to handle booking queries.
You get booking queries in the form of strings of size 3 
-where 1st character is ‘+’ means room is booked, or ‘-’ means room is freed.
-Second character represents the floor of the room i.e, ‘0’ to ‘9’. 
-Third character represents the room name i.e, ‘A’ to ‘Z’.
On booking of each room you collect 1 coin from the customer. After the end of all the booking queries you have to count the number of coins you collected.
You may assume that the list describes a correct sequence of bookings in chronological order i.e., only free rooms can be booked, and only booked rooms can be freed.
Consider booking queries to be ["+1A", "+3E", "-1A", "+4F", "+1A", "-3E"]
+1A: Room A on the 1st floor is booked and you collected 1 coin.
+3E: Room E on the 3rd floor is booked and you collected 1 coin.
-1A: Room A on the 1st floor is freed.
+4F: Room F on the 4th floor is booked and you collected 1 coin.
+1A: Room A on the 1st floor is booked and you collected 1 coin.
-3E: Room E on the 3rd floor is freed.
So you collected 4 coins.
*/

//completing the function
int hotelBookings(vector < string > queries) {
    int count = 0;
  //auto keyword : The auto keyword specifies that the type of the variable that is begin declared will automatically be deduced from its initializer and for functions 
  //if their return type is auto then that will be evaluated by return type expression at runtime. we need auto & to manipulate data in an array
    for (auto & x: queries) {
        if (x[0] == '+') {
            count++;
        }
      //instead of checking the whole string represnting one reservation we just compare if its + or not add if its only +
    }

    return count;
}
