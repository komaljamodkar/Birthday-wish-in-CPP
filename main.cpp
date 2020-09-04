#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    int a;
    int i;
    char h[] = "\u2665",lb[] = "\u2664",l[] = "\u2663",d[] = "\u2666";
    sleep(7);
    cout << "\t\t\033[1;31mTime Left\033[0m\n";
    for (int j = 3; j >=0 ; j--) {
        cout<<"\t\t\t\t\033[;33m"<<j<<"Second..\033[0m"<<endl;
        sleep(j);
    }
    cout<<"\t\t\033[;32m Start...\033[0m"<<endl;
    sleep(2);
    cout<<"\t\t\t\t\t\033[;34mFrom  :  Mayuri\033[0m\n";
    cout << "\t\t\t\t\t\033[;34mTo    :  Aadesh\033[0m\n\n";
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
    sleep(2);
    cout << "\t\t\t      __i_i_i_i_i__\n";

    sleep(2);

    cout << "\t\t\t     | \033[1;31m" << h << "        " << h << "\033[0m  |\n";
    sleep(2);
    cout << "\t\t\t  ___| "  << l << "\033[;34m 25/08 \033[0m " << l << "  |___\n";
    sleep(2);

    cout << "\t\t\t | \033[;33m" << h << "    " << h << "     "<< h << "    " << h << "\033[0m  |\n";
    sleep(2);
    cout << "\t\t\t | " << l << "  " << d << " \033[1;31m   शुभं  \033[0m "<< d << "  " << l << "  |\n";
    sleep(2);
    cout << "\t\t --- " << h << "  " << lb << " \033[1;31m  ........ \033[0m "<< lb << "  " << h << " ---\n";
    sleep(2);
    cout << "\t\t| \033[1;31m" << h << "\033[0m  " << h<<"  "<< d <<"\033[;32m  * जन्मदिनम् * \033[0m"<< d << "  " << h <<"  \033[1;31m"<< h <<"\033[0m |\n";
    sleep(2);
    cout << "\t\t| "<< h <<"   \033[;32m"<< l <<"\033[0m   "<< d <<"\033[1;31m  आदेश:  \033[0m"<< d <<"   \033[;32m"<< l <<"\033[0m   " << h << " |\n";
    sleep(1);
    cout<< "\t    |______________.______________| \n\n";
    cout << "\t  \033[;34m"<< d << "    " << d<< "    "<< d<< "    "<<d<< "    "<<d<< "    "<<d<< "    "<< d<< "    " <<d<< "\033[0m \n";
    sleep(2);
    cout<<"\t\033[;32m----------------------------------------\033[0m\n";
    sleep(3);
    cout<<"\t\033[;34mWISH U MANY MANY HAPPY RETURNS OF THE DAY..!!\033[0m\n";
    sleep(4);
    cout << "\t\t\033[1;31m" << h << "\t" << h << "\t\t"<< h <<"\t"<< h << "\t\t"<< h << "\t" << h << "\033[0m\n";
    sleep(2);
    cout<<"\t\t\t\t \033[;32m || बुद्धिमान्: || \033[0m\n";
    sleep(2);
    cout << "\t\t\033[;33m" << d << "\t" << d << "\t\t"<< d << "\t" << d<<"\t\t"<< d << "\t" << d << "\033[0m\n";
    sleep(2);
    cout<<"\t\t\t\t\033[1;31m  || निष्पाप: || \033[0m\n";
    sleep(2);
    cout << "\t\t\033[;33m" << l << "\t" << l << "\t\t"<<l << "\t" << l<<"\t\t"<< l << "\t" << l << "\033[0m\n";
    sleep(2);
    cout<<"\t\t\t\t\033[;32m  || सरल: || \033[0m \n";
    sleep(2);
    cout << "\t\t\033[1;31m" << h << "\t" << h << "\t\t"<< h <<"\t"<< h << "\t\t"<< h << "\t" << h << "\033[0m\n";
    sleep(2);
    cout<<"\t\t\t\t\033[;34m  || चतुर: || \033[0m \n";
    sleep(2);
    cout << "\t\t\033[;33m" << l << "\t" << l << "\t\t"<<l << "\t" << l<<"\t\t"<< l << "\t" << l << "\033[0m\n";
    sleep(2);
    cout<<"\t\t\033[;32m || पुन:,जन्मदिवसस्य हार्दिक्य: शुभकामना: || \033[0m\t\t\t\t\t\n";
    sleep(2);
    cout<<"\t\033[;32m|| दीघयियरोग्ययस्तु ।सुयशः भवतु। विजयः भवतु। जन्मदिनशुभेच्छा:|| \033[0m\n";
    sleep(2);
    cout << "\t\t\033[1;31m" << h << "\t  " << h << "\t\t"<< h <<"\t  "<< h << "\t\t"<< h << "\t  " << h << "\033[0m\n";
    cout<<"\t\033[;32m----------------------------------------\033[0m\n";
    cout << "\t  \033[;34m"<< d << "    " << d<< "    "<< d<< "    "<<d<< "    "<<d<< "    "<<d<< "    "<< d<< "    " <<d<< "\033[0m \n";
    sleep(8);
    return 0;
}


