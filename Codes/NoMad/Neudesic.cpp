#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin>>n;

    string str = "you shall not pass";  
    cout << "Original string: " << str << endl;

    // Use the built-in reverse to get char-by-char reversal.
    reverse(str.begin(), str.end()); 

    string buffer = "";
    string ans = "";

    // This for loop then reverses each individual
    // word in the string.
    for (int i=0; i < str.length(); i++)
    {
      if (str[i] != ' ')
      {
        buffer += str[i];
      }
      else
      {
        reverse(buffer.begin(), buffer.end());
        ans += buffer + " ";
        buffer = "";
      }
    }
    // Reversing the last word in the string outside the loop:
    reverse(buffer.begin(), buffer.end());
    ans += buffer;
    cout << "Reversed string: " << ans << endl;
}

/*8.The beautiful workspace at Neudesic has several conference rooms. Each of which is named in a unique fashion. In a strange coincidence, 

1. The names of the rooms that are used by the "dynamic directors" of Neudesic always starts with a consonant.
2. Rooms' names starting with a vowel are used by the "cool HRs" of Neudesic. 
3. And surprisingly, all the rooms whose names ends with the letter 'y' are utilized by the "awesome techies" of Neudesic, irrespective of the starting letter of the room's name

Can you write a program that will determine the current users of conference rooms, given the name of the room?

Input:
The first line of the input gives the number of test cases, T. T lines follow, each one containing the name of one room. Room names start with a capital letter followed by lower case English letters. There will be no other characters on any line, & no empty lines.

Output:
For each test case, output one line containing -
"Case #x: R is commanded by Y."
, where x is the case number (starting from 1), R is the room name, and Y is either "dynamic directors", "cool HRs" or "awesome techies".

Limits: 1 ≤ T ≤ 300.
Dataset: Each room name will have at most 100 letters.

---------------------------------------------------------------
Sample Input:

3
Mahishmati
Asgard
Galaxy
---------------------------------------------------------------
Sample Output:

Case #1: Mahishmati is commanded by dynamic directors.
Case #2: Asgard is commanded by cool HRs.
Case #3: Galaxy is commanded by awesome techies.
---------------------------------------------------------------

Note: Be careful with capitalization and the terminating period (full stops). Your output must be in exactly this format.

Copy the code you have written, tested and validated and paste it in the text box below.
(20 Points)

9.Neudesic Music Library has a huge audio collection. Each song has a name that is a string of characters. Neudesic Music Player has a search feature that lets users type a text into the search box, and the player then lists all songs whose names contain the substring. If there is exactly one song that matches the search, then user can hit the Enter key to play that song.
Some of our users hate using the mouse, and they don’t like typing too much, so they insists on always typing the shortest possible substring that will match exactly the one song that they want to listen to. Could you help our users find the optimal search query for each of the songs?

Input:
The first line of the input gives the number of test cases, T. T test cases follow. Each one starts with a line containing a single number “N”. The next “N” lines, each line contains 1 song name; these are all of the songs in Neudesic Music Library.
Each song name will consist of only letters, spaces and the hyphen character (-). All songs in our collection are unique & at the most 100 characters in length. Song names are case insensitive, so "fiNesse" is the same is "FinESSe". The search algorithm is also case insensitive.

Output:
For each test case, output one line containing-
"Case #x:"
, where x is the case number (starting from 1). After that, print N lines, one for each song in our collection, in the order that the songs were given in the input. 

- For each song, print the shortest string of characters that will uniquely find that song. 
- If there are several correct answers, print the lexicographically smallest one. 
- Put double quotes around each string. 
- If there is no correct answer, print ":(" (without the double quotes).

Limits: 1 ≤ T ≤ 100
Dataset: 1 ≤ N ≤ 100

---------------------------------------------------------------
Sample Input:

2
11
Beatles - Lonesome Tears in My Eyes
Beatles - Let It Be
Beatles - Not Guilty
Beatles - Roll Over Beethoven
Beatles - Sweet Little Sixteen
Beatles - Long Tall Sally
Beatles - Polythene Pam
Beatles - Dear Prudence
Beatles – Hey Jude
Beatles - Dig a Pony 
Beatles
6
A Perfect Circle - Gravity
Aimee Mann - You Do
Aqualung - Cinderella
Arcade Fire - Haiti
Art of Noise - Pleure
ATB - Marrakech
---------------------------------------------------------------   
Sample Output: 

Case #1:
" E"
" IT"
" G"
"V"
"W"
"AL"
"AM"
"C"
" H"
" A"
:(
Case #2:
"V"
" D"
"Q"
" F"
"S"
"B"
---------------------------------------------------------------   

Note: 
1. Notice the preceding space character in the outputs.
2. Upper case letters come lexicographically before lower case letters, hyphen comes before all letters, and space comes before hyphen.

Copy the code you have written, tested and validated and paste it in the text box below.
(55 Points)

10.Professor X has created a robot, which outputs speech (English sentences) in inverted word order. Can you help correct this? 
Given a list of space separated words, reverse the order of the words. Each line of text contains L letters and W words. A line will only consist of digits, letters and space characters. There will be exactly one space character between each pair of consecutive words.

Input:
The first line of input gives the number of cases, N.
N test cases follow. For each test case there will a line of letters and space characters indicating a list of space separated words. Spaces will not appear at the start or end of a line.

Output:
For each test case, output one line containing-
"Case #x: <text>"
where <text> is the list of words in reverse order.

Limits:
Dataset: N = 100; 1 ≤ L ≤ 1000

---------------------------------------------------------------
Sample Input:

3
place cool a is earth the
name your what’s 
565758 is number my
---------------------------------------------------------------
Sample Output:

Case #1: the earth is a cool place
Case #2: what’s your name
Case #3: my number is 565758
---------------------------------------------------------------

Copy the code you have written, tested and validated and paste it in the text box below.
(25 Points)
*/