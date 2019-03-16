#include<bits/stdc++.h>
using namespace std; 

int main(int argv, char* argc[])
{
	if(argv == 1)
	{
	    cout << "<ERROR> This program requires arguments.\n"
	    "        Expected at least 1, received 0." << endl;
	    return 2;
    }
    char *current;
    for(int i=1;i<argv;i++)
    {
    	current = argc[i];
    	switch(*current){
    		case('h'):
    			cout << "<INFO> This program is a test one.\n       "
    			"Here are some other avaliable arguments.\n       "
    			"    c CLOSE THIS PROGRAM(RETURN VALUE: the next param;\n"
				"           if ther is no, return 802),\n"
    			"           h HELP,\n"
    			"           e SHOW HOW MANY ARGUMENTS HAVE BEEN ENTERED.\n";
    		    break;
    		case('c'):
    			try{
    				int v = (int) *argc[i + 1];
    				return v;
				}catch(...){
					return 802;
				}
			case('e'):
				cout << "<INFO> " << argv - 1 <<
				" arguments have been entered(except the run-program command)."
				<< endl;
				break;
		}
	}
	return 0;
}
