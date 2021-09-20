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

