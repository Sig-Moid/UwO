# What is this?
UwO is a programming language I made just under a month ago, and I forgot to open-source it until I realised I hadn't yet done so while uploading my functional programming extension to C++. As such, I just wanted to release it here.

# Design Goals
UwO is inspired by python's commitment to being easily readable. UwO attempts to take things farther for a new generation of programmer, using a hyper-modern parlance to help younger individuals learn programming. Moreover, UwO attempts to simplify complex programming concepts such as classes, procedures, functions, and types. Rather, we aim for a memory-based unittyped goto-based system, which removes the unneccessary fluff in modern programming languages.

# Documentation
All tokens must be seperated by whitespace. Invalid tokens will be read as comments, though comments can be explicitly started/ended with the "..." token. All programs must begin with the "please" keyword, or the interpreter will identify the programmer as an ~impolite pile of garbage~ insufficently polite user. Similarly, all programs must end with the "tysm!!" keyword, or the interpreter will enter a depression, as it does not feel sufficiently recognised.

The language has memory for numbers, memory for strings, and two registers (you / me) that store a number (you.num / me.num) and a string (you.str / me.str).

Some keywords take an "argument." Sometimes these arguments are strictly numeric, but they can be written as strings––in which case the character values in the string will be added up one-by-one using C++ default char -> int static cast.

The various goto methods goto a keyword (a series of non-whitespace characters between whitespace). This keyword can be an invalid token, or it can be within a comment. As such, you can write code within comments and goto it to run code from comments, which makes condiitonal logic easier. The tokens are numbered starting at 0.

~RETAIN PROPER KAWAII OR ELSE~

That's all you need to know for overall aspects of the language! The keywords have been listed below.

# Keywords
* ur [num-arg] - set you.num to argument.
* im [num-arg] - set me.num to argument.
* luv u - increment you.num
* hate u - decrement you.num
* :3 - increment me.num
* :( - increment me.num
* kms - set me.num to 0
* kys - set you.num to 0
* ya wanna [num-arg a] [num-arg b] - check if you.num == a, if so goto token b
* we - swap you.num and me.num
* howru? - get user input for you.num (read like num-arg)
* amirite? - get user input for me.num (read like num-arg)
* uthink [str-arg] - set you.str
* methinks [str-arg] - set me.str
* yathink? - get user input for you.str
* whatsit? - get user input for me.str
* owo whatdat - run you.str as an UwO programme
* owo whatdis - run me.str as an Uwo programme
* ~owo (w/o whatdis or whatdat) - randomly increment/decrement kawaii~
* idektbh - set you.num/me.num to 0, and you.str/me.str to ""
* back to u - goto you.num
* back to v - goto me.num
* u have [str-arg] - load argument into string memory @ you.num
* i have [str-arg] - load argument into string memory @ me.num
* [num-arg] is mine - load argument into numeric memory @ me.num
* [num-arg] is urs - load argument into numeric memory @ you.num
* go to [num-arg] - goto argument
* im going to [num-arg] - load you.num into numeric memory at argument
* get ur [num-arg] - load numeric memory @ argument into you.num
* get my [num-arg] - load numeric memory @ argument into me.num
* read ur [num-arg] - load string memory @ argument into you.str
* read my [num-arg] - load string memory @ argument into me.str
* r u ded bro - print you.str
* srry - print me.str
* ~uwu increment kawaii~
* ur iq - load you.str into you.num by summing the characters
* my iq - load me.str into me.num by summing the characters
* ~lol decrement kawaii~

# Challenges
There are currently two challenges. If anybody can complete either challenge, they will get their name added to this readme for all time.

1. Make FizzBuzz in UwO
2. Make a text-based adventure game in UwO
