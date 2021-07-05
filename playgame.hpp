#define EXIT_BUTTON "Exit"
// #define 

int PlayGame(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam, int &ctrl /*, sqldb &, const int id, const int level, const int nod)*/){
    
    HDC hdc;
    RECT client;
    static HWND BUTTONS[10];

    switch (message){
        case WM_CREATE: {
            
            GetClientRect(hwnd, &client);

            // BUTTONS[0] = CreateWindow()

            break;
        }
    }
}