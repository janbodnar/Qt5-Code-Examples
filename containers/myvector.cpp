#include <QVector>
#include <QTextStream>

int main(void) {

    QTextStream out(stdout);

    QVector<int> vals = {1, 2, 3, 4, 5};
    
    out << "The size of the vector is: " << vals.size() << endl;
       
    out << "The first item is: " << vals.first() << endl;
    out << "The last item is: " << vals.last() << endl;
    
    vals.append(6);
    vals.prepend(0);   
    
    out << "Elements: "; 
    
    for (int val : vals) {
        out << val << " ";
    }    
    
    out << endl;
   
    return 0;
}
