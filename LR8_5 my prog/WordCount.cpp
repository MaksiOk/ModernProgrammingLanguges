#include "WordCount.h"

ostream&operator <<(ostream& os, const WordCount& wd)
{
    os << "<" << wd._occurList.size() << "> "
        << wd._word << endl;

    int cnt = 0, onLine = 6;
    vector< Location >::const_iterator first =
        wd._occurList.begin();
    vector<  Location >::const_iterator last =
        wd._occurList.end();

    for (; first != last; ++first)
    {
        // os < <  Location
        os << *first << " ";

        // ��������������: �� 6 � ������
        if (++cnt >= onLine)
        {
            os << "\n"; cnt = 0;
        }

    }
    return os;
}