
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    int a;
    int i;
    char h[] = "\u2665",lb[] = "\u2664",l[] = "\u2663",d[] = "\u2666";
    sleep(4);
    cout << "\t\t\033[1;31mTime Left\033[0m\n";
    for (int j = 3; j >=0 ; j--) {
        cout<<"\t\t\t\t\033[;33m"<<j<<"Second..\033[0m"<<endl;
        sleep(j);
    }
    cout<<"\t\t\033[;32m Start...\033[0m"<<endl;
    sleep(2);
    cout<<"\t\t\t\t\t\033[;34mFrom  :  KJamodkar\033[0m\n";
    cout << "\t\t\t\t\t\033[;34mTo    :  Aniruddha Da\033[0m\n\n";
    sleep(2);
    cout << "\t\t\t";
    for (i = 0; i<30; i++)
        cout << "-";
    cout << "\n\n";
    sleep(1);
    for (int k = 0; k <2 ;k++) {
        cout << "\t\t\t\t    i i i i i\n";
        sleep(1);
    }
    sleep(3);
    cout << "\t\t\t      __i_i_i_i_i__\n";

    sleep(3);

    cout << "\t\t\t     | \033[1;31m" << h << "        " << h << "\033[0m |\n";
    cout << "\t\t\t  ___| "  << l << "\033[;34m 24/08 \033[0m " << l << " |___\n";

    sleep(4);
    cout << "\t\t\t | \033[;33m" << h << "    " << h << "     "<< h << "    " << h << "\033[0m |\n";
    cout << "\t\t\t | " << l << "  " << h << " \033[1;31m HAPPY \033[0m "<< h << "  " << l << " |\n";
    sleep(4);
    cout << "\t\t --- " << h << "  " << lb << " \033[1;31m  ........ \033[0m "<< lb << "  " << h << " ---\n";
    cout << "\t\t| \033[1;31m" << h << "\033[0m   " << h <<"\033[;32m  BIRTHDAY \033[0m"<< d << "   " << h <<"    \033[1;31m"<< h << "\033[0m |\n";
    sleep(4);
    cout << "\t\t| " << h <<"   "<< h <<"   "<< d <<"\033[1;31m  ........ \033[0m "<< h <<"   "<< h << " |\n";
    sleep(4);
    cout << "\t\t| "<< h <<"  \033[;32m"<< l <<"\033[0m   "<< d <<"\033[1;31mAniruddha \033[0m"<< d <<"   \033[;32m"<< l <<"\033[0m  " << h << " |\n";
    cout<<"\t\t|____________________________|\n\n";
    sleep(4);
    cout<<"\t\033[;32m----------------------------------------\033[0m\n";
    sleep(4);
    cout<<"\t\033[;34mWISH U MANY MANY HAPPY RETURNS OF THE DAY..!!\033[0m\n";
    sleep(4);
    cout << "\t\t\t\033[1;31m" << h << "\t" << h << "\t\t"<< h <<"\t"<< h << "\t\t"<< h << "\t" << h << "\033[0m\n";
    sleep(2);
    cout<<"\t\t\t\t\t \033[;32mIntelligent \033[0m\n";
    sleep(2);
    cout << "\t\t\t\033[;33m" << d << "\t" << d << "\t\t"<< d << "\t" << d<<"\t\t"<< d << "\t" << d << "\033[0m\n";
    sleep(2);
    cout<<"\t\t\t\t\t  Talented \n";
    sleep(2);
    cout << "\t\t\t\033[1;31m" << h << "\t" << h << "\t\t"<< h <<"\t"<< h << "\t\t"<< h << "\t" << h << "\033[0m\n";
    sleep(2);
    cout<<"\t\t\t\t\033[;34m     Kindhearted \033[0m\n";
    sleep(2);
    cout << "\t\t\t\033[;33m" << l << "\t" << l << "\t\t"<<l << "\t" << l<<"\t\t"<< l << "\t" << l << "\033[0m\n";
    sleep(2);
    cout<<"\t\t\t\t\033[;32m  Honest To Work... \033[0m\t\t\t\t\t\n";
    sleep(2);
    cout << "\t\t\t\033[1;31m" << h << "\t" << h << "\t\t"<< h <<"\t"<< h << "\t\t"<< h << "\t" << h << "\033[0m\n";
    sleep(4);
    sleep(4);
    return 0;
}
