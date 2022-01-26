#include <iostream>
#include <list>

using namespace std;
// 第1問(10点)
// 以下のクラスにコンストラクタ、デストラクタを追加してください。
// コンストラクタ、デストラクタの処理の内容はなんでも構いません

class Point
{
public:
    Point();
    ~Point();

private:

};

Point::Point()
{
    cout << "コンストラクタ";
}

Point::~Point()
{
    cout << "デストラクタ";
}


// 第2問(10点)
// int型の変数をnewを使い確保してください。
// また、char型の配列をnewを使い確保してください。
// どちらもdeleteを呼び出すようにしてください。
/*
int main()
{
    int* newInt = new int;

    char* newC = new char[10];

    delete[] newC;

    delete newInt;
}*/



// 第3問(15点)
// 以下の継承先クラスのデストラクタが正しく呼び出されるように、
// クラスを修正してください。

class Test
{
public:
    Test()
    {
        printf("Test\n");
    }
    virtual ~Test()
    {
        printf("~Test\n");
    }
};
class Test2 : public Test
{
public:
    Test2()
    {
        printf("Test2\n");
    }
    ~Test2()
    {
        printf("~Test2\n");
    }
};
/*
int main()
{
    Test* t;
    t = new Test2();

    delete t;
    return 0;
}*/



// 第4問(25点)
// 以下の関数をテンプレート化して、
// 様々な型で計算できるようにしてください。


template <typename T>

T Calc(T a, T b, int type)
{
    T ans = 0;
    switch (type)
    {
    case 0:
        ans = a + b;
        break;
    case 1:
        ans = a - b;
        break;
    case 2:
        ans = a * b;
        break;
    case 3:
        ans = a / b;
        break;
    }

    return ans;
}

/*int main()
{
    int ans1;
    float ans2;
    char ans3;

    ans1 = Calc<int>(2, 5, 0);
    ans2 = Calc<float>(10.0f, 2.5f, 3);
    ans3 = Calc<char>(10, 4, 2);

    return 0;
}*/



// 第5問(25点)
// 次のプログラムを修正し、以下のような表示になるようにプログラムを作成してください。
// num = 50
// num = 40
// num = 30
// num = 20
// num = 10
// また、リストを修正してください。その際表示は以下のようになるようにしてください。
// num = 30

int main()
{
    std::list<int> lst;
    for (int i = 0; i < 5; ++i)
    {
        lst.push_front((i + 1) * 10);
    }

    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        printf("num = %d\n", *it);
    }

    lst.clear();

    lst.push_front(30);

    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        printf("num = %d\n", *it);
    }
}


// 第6問(25点)
// 第5問と同じ表示になるようにstd::vectorを使ってプログラムを記述してください。



