#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

// Memory
vector<int> numMem(65535);
vector<string> strMem(65535);
int u, v, kawaii;
string ustr, vstr;

// Check for string/int
bool isNum(string in) {
    return all_of(in.begin(), in.end(), ::isdigit);
}

// String to number
int S2I(string in) {
    int out;
    for(int i = 0; i < in.size(); i++) {
        out += in[i];
    }
    return out;
}

// String to number
int num(string in) {
    return isNum(in) ? stoi(in) : S2I(in);
}

// Lexer
vector<string> tokenize(string program) {
    vector<string> out;
    string str = "";
    for(int i = 0; i < program.size(); i++) {
        char c = program[i];
        if(isspace(c)) {
            transform(str.begin(), str.end(), str.begin(), ::tolower); 
            out.push_back(str);
            str = "";
        } else {
            str += c;
        }
    }
    return out;
}

// Interpreter
void run(vector<string> program) {
    int i = 0;
    int error = 0;
    string token;
    if(program[program.size() - 1] != "tysm!!") {
        cout << "no. u dont appreciate me.";
        error = 3;
        goto finish;
    }
    if(program[0] != "please") {
        cout << "no. be polite.";
        error = 4;
        goto finish;
    }
    while(true) {
        token = program[i];
        if(token == "ur") {
            i++; u = num(program[i]);
        }
        else if(token == "im") {
            i++; v = num(program[i]);
        }
        else if(token == "luv" && program[i + 1] == "u") {
            u++; i++;
        }
        else if(token == "hate" && program[i + 1] == "u") {
            u--; i++;
        }
        else if(token == ":3") {
            v++;
        }
        else if(token == ":(") {
            v++;
        }
        else if(token == "kms") {
            v = 0;
        }
        else if(token == "kys") {
            u = 0;
        }
        else if(token == "ya" && program[i + 1] == "wanna") {
            i += 2;
            if(u == num(program[i])) {
                i = num(program[++i]) - 1;
            }
        }
        else if(token == "we") {
            int w = u;
            u = v;
            v = w;
        }
        else if(token == "howru?") {
            string in;
            getline(cin, in);
            u = num(in);
        }
        else if(token == "amirite?") {
            string in;
            getline(cin, in);
            v = num(in);
        }
        else if(token == "uthink") {
            ustr = program[++i];
        }
        else if(token == "methinks") {
            vstr = program[++i];
        }
        else if(token == "uthink") {
            ustr = program[++i];
        }
        else if(token == "yathink?") {
            string in;
            getline(cin, in);
            ustr = in;
        }
        else if(token == "whatsit?") {
            string in;
            getline(cin, in);
            ustr = in;
        }
        else if(token == "owo") {
            if(program[i + 1] == "whatdat") {
                i++;
                run(tokenize(ustr));
            }
            else if(program[i + 1] == "whatdis") {
                i++;
                run(tokenize(vstr));
            }
            else {
                if(rand() % 2 == 0) {
                    kawaii++;
                }
                else {
                    kawaii--;
                }
            }
        }
        else if(token == "idektbh") {
            u = 0;
            v = 0;
            ustr = "";
            vstr = "";
        }
        else if(token == "back" && program[i + 1] == "to") {
            i += 2;
            if(program[i] == "u") {
                i = u - 1;
            }
            else if(program[i] == "v") {
                i = v -1;
            }
            else {
                i = num(program[i - 1]);
            }
        }
        else if(token == "u" && program[i + 1] == "have") {
            i += 2;
            numMem[u] = num(program[i]);
        }
        else if(token == "i" && program[i + 1] == "have") {
            i += 2;
            strMem[v] = program[i];
        }
        else if(program[i + 1] == "is" && program[i + 2] == "mine") {
            i += 2;
            numMem[v] = num(program[i]);
        }
        else if(program[i + 1] == "is" && program[i + 2] == "urs") {
            i += 2;
            strMem[u] = num(program[i]);
        }
        else if(token == "go" && program[i + 1] == "to") {
            i += 2;
            numMem[num(program[i])] = u;
        }
        else if(token == "im" && program[i + 1] == "going" && program[i + 2] == "to") {
            i += 3;
            numMem[num(program[i])] = u;
        }
        else if(token == "get" && (program[i + 1] == "ur" || program[i + 1] == "my")) {
            i += 2;
            if(program[i - 1] == "ur") {
                u = numMem[num(program[i])];
            }
            else {
                v = numMem[num(program[i])];
            }
        }
        else if(token == "read" && (program[i + 1] == "ur" || program[i + 1] == "my")) {
            i += 2;
            if(program[i - 1] == "ur") {
                ustr = strMem[num(program[i])];
            }
            else {
                vstr = strMem[num(program[i])];
            }
        }
        else if(token == "r" && program[i + 1] == "u" && program[i + 2] == "ded" && program[i + 3] == "bro") {
            i += 3;
            cout << ustr;
        }
        else if(token == "srry") {
            cout << vstr;
        }
        else if(token == "uwu") {
            kawaii++;
        }
        else if(token == "lol") {
            kawaii--;
        }
        else if(token == "...") {
            i++;
            while(program[i] != "...") {
                i++;
            }
        }
        else if(token == "ur" && program[i + 1] == "iq") {
            i++;
            u = num(ustr);
        }
        else if(token == "my" && program[i + 1] == "iq") {
            i++;
            v = num(ustr);
        }
        if((kawaii / i) < 12 && i > 12) {
            cout << "\n\nur no kawaii, trol!";
            error = 1;
            break;
        }
        if((kawaii / i) > 4 && i > 12) {
            cout << "\n\nKawaii OvErLoAd!! cant pary atenshun, srry.";
            error = 2;
            break;
        }
        i++;
    }
    finish:
    cout << "\n\n";
    switch(error) {
        case 0: cout << "Execution Complete"; break;
        case 1: cout << "Execution terminated. Maybe say \"UwU\" some more?"; break;
        case 2: cout << "Execution terminated. Maybe don't say \"UwU\" so much?"; break;
        case 3: cout << "Execution terminated. Maybe say \"TYSM!!\" when you ask?"; break;
        case 4: cout << "Execution terminated. Maybe say \"please\" when you ask?"; break;
    }
}

int main() {
    string code;
    getline(cin, code);
    vector<string> tokens = tokenize(code);
    run(tokens);
}